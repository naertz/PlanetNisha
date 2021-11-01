#include "print.h"
#include "user_input.h"

#include <cstdlib>
#include <iostream>
#include <string>

int int_to_string(std::string stringInput)
{
    int integerFromString = std::atoi(stringInput.c_str());
    return integerFromString;
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
            print("Invalid input. Try again...", "red");
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
    
    print("Enter yes or no (y/n): ", "blue", false);
    
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
            print("Invalid input. Try again: ", "red", false);
        }
    }
    
    return isAnswerYes;
}

int int_option(int maxDigit)
{
    std::string prompt = "Enter a value between 1 and " + std::to_string(maxDigit) + ": ";
    
    std::string stringInput = "-1";
    
    int answer = 0;
    
    bool isValidInput = false;
    
    print(prompt, "blue", false);
    
    if (std::cin.peek() == '\n')
    {
        std::cin.ignore();
    }
    
    while (!isValidInput)
    {
        std::getline(std::cin, stringInput);
        
        if (stringInput.length() == 1)
        {
            answer = int_to_string(stringInput);
        }
        
        if (answer > 0 && answer <= maxDigit)
        {
            isValidInput = true;
        }
        else
        {
            print("Invalid input. Try again...", "red");
            print(prompt, "blue", false);
        }
    }
    
    return answer;
}