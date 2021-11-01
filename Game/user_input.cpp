#include "print.h"
#include "user_input.h"

#include <climits>
#include <cstdlib>
#include <errno.h>
#include <iostream>
#include <string>

enum string_to_uint_error { SUCCESS, OUT_OF_RANGE, INCONVERTIBLE };

string_to_uint_error valid_string_to_uint (unsigned int &parsedUnsignedInteger, const char *stringInputPointer, int base = 0)
{
    string_to_uint_error errorResult;
    char *end;
    unsigned long unsignedLongToParse;
    
    errno = 0;
    
    unsignedLongToParse = std::strtoul(stringInputPointer, &end, base);
    
    if ((errno == ERANGE && unsignedLongToParse == ULONG_MAX) || unsignedLongToParse > UINT_MAX)
    {
        if (*stringInputPointer == '\0' || *end != '\0')
        {
            errorResult = INCONVERTIBLE;
        }
        else
        {
            errorResult = OUT_OF_RANGE;
        }
    }
    else if (*stringInputPointer == '\0' || *end != '\0')
    {
        errorResult = INCONVERTIBLE;
    }
    else
    {
        errorResult = SUCCESS;
        parsedUnsignedInteger = static_cast<unsigned int>(unsignedLongToParse);
    }
    
    return errorResult;
}

unsigned int string_to_uint(std::string stringInput)
{
    const char * stringInputPointer = stringInput.c_str();
    unsigned int unsignedIntegerFromString = 0;
    
    string_to_uint_error errorResult = valid_string_to_uint(unsignedIntegerFromString, stringInputPointer);
    
    if (errorResult != SUCCESS)
    {
        unsignedIntegerFromString = 0;
    }
    
    return unsignedIntegerFromString;
}

bool valid_name(std::string nameInput)
{
    bool isValidName = true;
    
    if (nameInput.find(" ") != std::string::npos)
    {
        isValidName = false;
    }
    
    return isValidName;
}

bool valid_text(std::string textInput, bool isName)
{
    bool isValidText = true;
    
    if (textInput.length() < 1)
    {
        isValidText = false;
    }
    else if (isName)
    {
        if (!valid_name(textInput))
        {
            isValidText = false;
        }
    }
    
    return isValidText;
}

std::string get_text(bool isName)
{
    std::string textInput = "";
    
    bool isValidInput = false;
    
    while (!isValidInput)
    {
        std::getline(std::cin, textInput);
        
        if (!valid_text(textInput, isName))
        {
            print("Invalid input. Try again...", RED);
        }
        else
        {
            isValidInput = true;
        }
    }
    
    return textInput;
}

bool yes_or_no()
{
    std::string answer = "";
    
    bool isAnswerYes;
    bool isValidInput = false;
    
    print("Enter yes or no (y/n): ", BLUE, false);
    
    while (!isValidInput)
    {
        std::getline(std::cin, answer);
        
        if (answer == "y" || answer == "yes" || answer == "Y" || answer == "Yes")
        {
            isValidInput = true;
            isAnswerYes = true;
        }
        else if (answer == "n" || answer == "no" || answer == "N" || answer == "No")
        {
            isValidInput = true;
            isAnswerYes = false;
        }
        else
        {
            print("Invalid input. Try again: ", RED, false);
        }
    }
    
    return isAnswerYes;
}

unsigned int uint_option(unsigned int maxDigit)
{
    std::string prompt = "Enter a value between 1 and " + std::to_string(maxDigit) + ": ";
    
    std::string stringInput = "0";
    
    unsigned int answer = 0;
    
    bool isValidInput = false;
    
    print(prompt, BLUE, false);
    
    while (!isValidInput)
    {
        std::getline(std::cin, stringInput);
        
        if (stringInput.length() == 1)
        {
            answer = string_to_uint(stringInput);
        }
        
        if (answer > 0 && answer <= maxDigit)
        {
            isValidInput = true;
        }
        else
        {
            print("Invalid input. Try again...", RED);
            print(prompt, BLUE, false);
        }
    }
    
    return answer;
}