#ifndef USER_INPUT_H
#define USER_INPUT_H

#include <string>

bool valid_name(std::string test_name);
std::string get_text(bool name = false);
bool yes_or_no();
int int_option(int maxDigit);

#endif // USER_INPUT_H
