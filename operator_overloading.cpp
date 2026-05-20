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

        Complex operator+(const Complex &other) const
        {
            // const before Complex ensure that other is not changed here
            // eg: other.real = 100; Error

            // Const after ensure the current object is not changed here
            // eg: real = 100; error

            // & ensures that a copy of c2 is not created
            Complex temp;
            temp.real = real + other.real;
            temp.imag = imag + other.imag;
            
            return temp;
        }

        Complex operator-(const Complex &other) const
        {
            Complex temp;
            temp.real = real - other.real;
            temp.imag = real - other.imag;
            return temp;
        }

        Complex operator*(const Complex &other) const
        {
            Complex temp;
            temp.real = real*other.real - imag*other.imag;
            temp.imag = real*other.imag + imag*other.real;
            return temp;
        }
};

int main()
{
    Complex c1(1,1), c2(1,-1), sum, product;
    sum = c1+c2; // result = c1.add(c2)
    sum.print();

    product = c1*c2;
    product.print();

    return 0;
}

// (a+ib)(c+id) = (ac - bd) + (ad + bc)
// Here a = real, b = imag, c = other.real, d = other.imag

// ., :: , ?, : cannot be overloaded
// New operators cannot be overloaded using overloading
// Operators having unary and binary opeation can be overloaded
