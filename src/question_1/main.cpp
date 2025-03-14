#include "question1.h"
using std::cin;
using std::cout;

int main()
{
    char quit_ans;
    double mass,kinetic_energy,velocity;
    while(true)
    {
        cout<<"What is the mass(Kg) of the object: \n";
        cin>>mass;
        if(mass <= 0)
        {
            cout<<"Sorry that is an incorrect value type. try again \n";
        }
        else
        {
            cout<<"What is the velocity(mps)) of the object: \n";
            cin>>velocity;
            if(mass <= 0)
            {
                cout<<"Sorry that is an incorrect value type. try again \n";
            }
            else
            {
                kinetic_energy = get_kinetic_energy(mass,velocity);
                cout<<"The  expected kinetic energy is "<<kinetic_energy<<" joules \n";
                cout<<"Would you like to continue(Y/N): \n";
                cin>>quit_ans;
                if(quit_ans == 'N' || quit_ans == 'n')
                {
                    break;
                }
            }
        }
    }
    

    return 0;
}
//cout<<"What is the velocity(mps)) of the object: \n";
//cin>>velocity;