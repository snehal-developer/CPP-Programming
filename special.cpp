#include<iostream>
using namespace std;

class Demo
{   
    public:
        int i;          //Characteristics
        float f;        //Characteristics
    
    Demo()              //Constructor
    {
        cout<<"Inside Constructor\n";
        i = 0;
        f = 0.0;
    }

    ~Demo()             //Destructor
    {
        cout<<"Inside Destructor\n";
    }

    void fun()          //Behaviour
    {
        cout<<"Inside Fun\n";
    }
};

int main()
{   
    cout<<"Inside Main\n";
    
    Demo dobj;              // Object Creation
    
    cout<<dobj.i<<"\n";
    
    dobj.fun();
    
    cout<<"End of Main\n";
    
    return 0;
}