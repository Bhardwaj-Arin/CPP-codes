#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout << "Inside A" << endl;
        }
};

class B
{
    public:
        void display1()
        {
            cout << "Inside B" << endl;
        }
};

class C : public A, public B
{
    public:
        void display2()
        {
            cout << "Inside C" << endl;
        }
};

int main()
{
    C obj;
    obj.display();
    obj.display1();
    obj.display2();
    
    return 0;
}