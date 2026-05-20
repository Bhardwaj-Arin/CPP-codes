#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        A(int a = 0)
        {
            this->a = a;
        }

        A operator-()
        {
            A temp;
            temp.a = -a;
            return temp; 
        }

        void display()
        {
            cout << "Value of a: " << a << endl;
        }
};

int main()
{
    A c1(2), c2;
    c2 = -c1;
    c2.display();
    return 0;
}