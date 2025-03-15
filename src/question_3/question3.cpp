#include "question3.h"

bool test_config()
{
    return true;
}
bool is_palindrome(const std::string& str)
{
    bool is = false;
    string reverse = "";
    for(int i = str.size()-1; i >= 0; i--)
    {
        reverse += str[i];
    }
    if(reverse == str)
    {
        is = true;
    }
    return is;
}