#include "question2.h"

bool test_config()
{
    return true;
}
string get_factorial_sequence(int parameter)
{
    string factorial,temp2 = "";
    int temp = 1;
    for (size_t i = 1; i < parameter; i++)
    {
        temp *= i;
        if(!i==parameter)
        {
            factorial += i + "x";
        }
    }
    
}