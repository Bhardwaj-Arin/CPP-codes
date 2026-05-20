#include<iostream>
using namespace std;

class B;
class A
{
    private:
        int a;
    public:
        A(int x)
        {
            a = x;
        }

        friend void add(A, B);
};

class B
{
    private:
        int b;
    public:
        B(int y)
        {
            b = y;
        }
    
    friend void add(A, B);
};

void add(A objA, B objB)
{
    cout << "Sum = " << objA.a + objB.b << endl;
}

int main()
{
    A a(5);
    B b(10);
    add(a , b);
    
    return 0;
}