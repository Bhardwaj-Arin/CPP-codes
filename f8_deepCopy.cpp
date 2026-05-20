// Deep copy example

#include<iostream>
using namespace std;

class Test
{
    public:
        int *p;
        Test(int val)
        {
            p = new int;
            *p = val;
        }

        Test(const Test &t)
        {
            p = new int;
            *p = *(t.p);
        }

        ~Test()
        {
            cout << "Destructor called" << endl;
            delete p;
        }
};

int main()
{
    Test t1(10);
    Test t2 = t1;

    cout << "Value of t1 and t2 before modifying" << endl;
    cout << *t1.p << endl;
    cout << *t2.p << endl;

    *t1.p = 100;

    cout << "\nValue of t1 and t2 after modifying the value of t1" << endl;
    cout << *t1.p << endl;
    cout << *t2.p << endl;    
    
    return 0;
}