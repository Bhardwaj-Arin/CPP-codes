#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imag;

    public:
        Complex(int r = 0, int i = 0)
        {
            real = r;
            imag = i;
        }

        void print()
        {
            cout << real << " + " << imag << "i" << endl;
        }

        Complex operator-()
        {
            Complex temp;
            temp.real = -real;
            temp.imag = -imag;
            return temp;
        }
};

int main()
{
    Complex c1(-1,-1), c2;
    c2 = -c1;
    c2.print();
    
    return 0;
}
