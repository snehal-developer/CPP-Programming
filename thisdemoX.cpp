#include<iostream>

using namespace std;

class Demo
{
    public:
        int i,j;

        //Demo(Demo *this, int a, int b)
        Demo(int a, int b)
        {
            this->i=a;
            this->j=b;
        }
        
        // void display(demo*this)
        void display()
        {
            cout<<this->i<<"\n";      //this->i
            cout<<this->j<<"\n";      //this->j
        }
};

int main()
{
    Demo dobj1(10,20);      //dobj1 = 100
    Demo dobj2(50,60);      //dobj2 = 200

    dobj1.display();        //display(&dobj1)   -> display(100);
    dobj2.display();        //display(&dobj1)   -> display(200);

}