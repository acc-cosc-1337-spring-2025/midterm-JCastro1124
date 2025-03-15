#include "question3.h"
using std::cin;
using std::cout;

int main()
{
    string temp;
    bool is_or_not;
    char ans;
    while(true)
    {
        cout<<"Type in a string: \n";
        cin>>temp;
        is_or_not = is_palindrome(temp);
        if(is_or_not)
        {
            cout<<temp<<" is a palindrome.\n";
        }
        else if(!is_or_not)
        {
            cout<<temp<<" is not a palindrome.\n";
        }
        cout<<"Would you like to exit(Y/N): \n";
        cin>>ans;
        if(ans == 'Y' || ans == 'y')
        {
            break;
        }

    }
    return 0;
}