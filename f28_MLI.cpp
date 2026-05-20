#include <iostream>
using namespace std;

class A
{
    public:
        void show() { cout << "A::show()" << endl; }
};

class B : public A
{
    public:
        void show() { cout << "B::show()" << endl; } // overrides A's show
};

class C : public B
{
    public:
        void test()
        {
            show();    // Which show() is called?
            A::show(); // Explicit call to A's version
            B::show(); // Explicit call to B's version
        }
};

int main()
{
    C obj;
    obj.test();
    
    return 0;
}