#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <string>

bool valid_name(std::string test_name);
std::string get_text(bool name = false);
bool yes_or_no();
uint uint_option(uint maxDigit);

#endif // USER_INPUT_H
