// Constructor

#include<iostream>
using namespace std;

class One
{
    public:
        int m;
        float n;

    public:
        One()
        {
            m = 10;
            n = 20;
        }

        void display()
        {
            cout << "m = " << m << endl;
            cout << "n = " << n << endl;
        }
};

int main()
{
    One o1;
    o1.display();
    
    return 0;
}