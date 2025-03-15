#include "question2.h"
using std::cin;
using std::cout;

int main()
{
    int num;
    string variable;
    char ans;
    while(true)
    {
        cout<<"Choice a number between 1 and 10 : \n";
        cin>>num;
        if (num >= 1 && num <= 10)
        {
            variable = get_factorial_sequence(num);
            cout<<"The factorial of "<<num<<" is "<<variable<<"\n";
            cout<<"Would you like to exit(Y/N): \n";
            cin>>ans;
            if(ans == 'Y' || ans == 'y')
            {
                break;
            }
        }
        else
        {
            cout<<"Sorry, that variable is out of range \n";
        }
        
    }
    return 0;
}