// Parametrized constructor

#include<iostream>
using namespace std;

class One
{
    int m;
    float n;

    public:
        One(int x, float y)
        {
            m = x;
            n = y;
        }

        void display()
        {
            cout << "m = " << m << endl;
            cout << "n = " << n << endl;
        }
};  

int main()
{   
    One o1 = One(1,3); // Copy initialization or Explicit constructor call
    One o2(1,2);       // Direct initialization or Implicit constructor call

    o1.display();
    o2.display();

    return 0;
}

// One o2(1,2) -> object is created and directly initialised to o2.
// One o1 = One(1,3) -> temporary object is created first and then it is initialized.