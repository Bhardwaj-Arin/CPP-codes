// Multiple inheritance

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "A's contructor" << endl;
        }
};

class B
{
    public:
        B()
        {
            cout << "B's contructor" << endl;
        }
};

class C : public B, public A
{
    public:
        C()
        {
            cout << "C's contructor" << endl;
        }
};

int main()
{
    C obj;
    return 0;
}