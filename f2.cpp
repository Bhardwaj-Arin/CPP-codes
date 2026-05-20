// Non-Member function returning an object
// Addition of two complex numbers 

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:
        Complex(int r = 0, int imag = 0)
        {
            real = r;
            imaginary = imag;
        }

        void display()
        {
            cout << real << "+" << imaginary << "i" << endl;
        }

        friend Complex add(Complex, Complex);
};

Complex add(Complex o1, Complex o2)
{
    Complex obj;
    obj.real = o1.real + o2.real;
    obj.imaginary = o1.imaginary + o2.imaginary;

    return obj;
}

int main()
{
    Complex c1(1,1), c2(1,2), total;
    total = add(c1,c2);
    total.display();
    
    return 0;
}
