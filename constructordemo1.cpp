#include<iostream>
using namespace std;

//Encapsulation
class Marvellous
{
    //Access Specifier
    public:
    int No1, No2;       //Characteristics
    //Default constructor
    Marvellous()
    {
        cout<<"Inside default Constructor\n";
        No1 = 0;
        No2 = 0;
    }
    //Parametrised constructor
    Marvellous(int A, int B)
    {
        cout<<"Inside parametarised Constructor\n";
        No1 = A;
        No2 = B;
    }
    //Copy Constructor
    Marvellous(Marvellous &ref)
    {
        cout<<"Inside Copy Constructor\n";
        No1 = ref.No1;
        No2 = ref.No2;

    }

    //Destructor
    ~Marvellous(){
        cout<<"Inside Destructor\n";
    }
};

int main()
{    
    cout<<"Inside Main\n";
    // object Creation (Instance)
    Marvellous mobj1();         //Default Constructor obj
    Marvellous mobj2(11,21);    //Parametrised Constructor
    Marvellous mobj3(mobj2);    //Copy Constructor
    cout<<"End of Main\n";
    return 0;
}       //All destrctors gets called