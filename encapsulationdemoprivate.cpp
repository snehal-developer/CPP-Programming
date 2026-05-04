
// This is the erronous file(with errors)
#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access Specifier(by default : private)
    int No1, No2;       //Characteristics
    
    void fun()          //Behaviour
    {
        cout<<"Inside Fun\n";
    }        
    void gun()          //Behaviour
    {
        cout<<"Inside Gun\n";
    }
};

int main()
{    
    // object Creation (Instance)
    Marvellous mobj1;       
    Marvellous mobj2;

    cout<<"Size of mobj1:"<<sizeof(mobj1)<<"\n";
    cout<<"Size of mobj2 No2:"<<sizeof(mobj2.No2)<<"\n";    //Error
    cout<<mobj2.No2<<"\n";                                  //Error
    mobj1.fun();                                            //Error
    mobj2.fun();                                            //Error
    mobj1.gun();                                            //Error


    return 0;
}