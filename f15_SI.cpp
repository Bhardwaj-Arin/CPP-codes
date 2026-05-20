// Single inheritance

#include<iostream>
using namespace std;

class Base
{
    protected:
        int x;
    public:
        void setValue(int a)
        {
            x = a;
        }
};

class Derived : public Base
{
    public:
        void display()
        {
            cout << "Value of x = " << x << endl;
        }
};

int main()
{
    Derived obj;
    obj.setValue(100);
    obj.display();
    
    return 0;
}
