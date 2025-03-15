#include"question4.h"
using std::cin;
using std::cout;
int main()
{
    int var;
    string hex;
    char ans;
    while (true)
    {
        cout<<"give me a number between 1-512: \n";
        cin>>var;
        if (var >= 1 && var <= 512)
        {
            hex = decimal_to_hex(var);
            cout<<"The hexadecimal of "<<var<<" is "<<hex<<"\n";
            cout<<"Would you like to exit(Y/N): \n";
            cin>>ans;
            if(ans == 'Y' || ans == 'y')
            {
                break;
            }
        }
        else
        {
            cout<<"Sorry, that is a invalid value. \n";
            cout<<"Would you like to exit(Y/N): \n";
            cin>>ans;
            if(ans == 'Y' || ans == 'y')
            {
                break;
            }
        }
        
    }
    return 0;
}