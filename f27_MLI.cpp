#include<iostream>
using namespace std;

class A
{
    protected:
        int x;
    public:
        A(int a)
        {
            x = a;
            cout << "A's constructor called" << endl;
            cout << "x = " << a << endl;
        }

        ~A()
        {
            cout << "A's destructor called" << endl;
        }
};


class B : public A
{
    protected:
        int y;
    public:
        B(int a, int b) : A(a)
        {
            y = b;
            cout << "B's contructor called" << endl;
            cout << "y = " << b << endl;
        }

        ~B()
        {
            cout << "B's destructor called" << endl;
        }
};

class C : public B
{
    private:
        int z;
    public:
        C(int a, int b, int c) : B(a, b)
        {
            z = c;
            cout << "C's constructor called" << endl;
            cout << "z = " << c << endl;
        }

        void sum()
        {
            cout << "Sum = " << x + y + z << endl;
        }

        ~C()
        {
            cout << "C's destructor called" << endl;
        }
};

int main()
{
    C obj(1,2,3);
    obj.sum();

    return 0;
}

