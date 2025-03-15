#include "question2.h"
using std::to_string;

bool test_config()
{
    return true;
}
string get_factorial_sequence(int parameter)
{
    string factorial = "";
    int temp = 1;
    for (int i = 0; i < parameter; i++)
    {
        temp *= (i+1);
        if(i != parameter && i != 0)
        {
            factorial = factorial + to_string(i) + "x";
        }
    }
    factorial = factorial + to_string(parameter) + "=" + to_string(temp);
    return factorial;

}