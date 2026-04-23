#include<iostream>

using namespace std;

class Demo
{   
    public:
        int i;          //Characteristics
        float f;        //Characteristics
    
    void fun()          //Behaviour
    {
        cout<<"Inside Fun\n";
    }
};
int main()
{ 
    Demo dobj;
    cout<<dobj.i<<"\n";
    dobj.fun();
    return 0;
}