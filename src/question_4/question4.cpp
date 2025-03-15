//
#include "question4.h"
using std::to_string;
bool test_config()
{
    return true;
}
string decimal_to_hex(int parameter)
{
    int temp;
    string hex ="";
    while(parameter != 0)
    {
        if(parameter >=16)
            temp = parameter / 16;
        else if(parameter <= 16)
            temp = parameter;
        if (temp == 10)
        {
            hex.push_back('A');
        }
        else if (temp == 11)
        {
            hex.push_back('B');
        }
        else if (temp == 12)
        {
            hex.push_back('C');
        }
        else if (temp == 13)
        {
            hex.push_back('D');
        }
        else if (temp == 14)
        {
            hex.push_back('E');
        }
        else if (temp == 15)
        {
            hex.push_back('F');
        }
        else if(temp < 10)
        {
            hex += to_string(temp);
        }
        parameter/=16;
    }
    return hex;

}