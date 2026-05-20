// Member function returning an object
// Addition of two complex numbers 

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:

        // First way

        /*
        Complex(){};

        Complex(int r, int imag)
        {
            real = r;
            imaginary = imag;
        }
        */

        // Second way
        Complex(int r = 0, int imag = 0)
        {
            real = r;
            imaginary = imag;
        }

        Complex add(Complex other)
        {
            Complex obj;
            obj.real = real + other.real;
            obj.imaginary = imaginary + other.imaginary;
            
            return obj;
        }

        void display()
        {
            cout << real << "+" << imaginary << "i" << endl;
        }
};

int main()
{
    Complex c1(1,3), c2(-1,-2), total;
    total = c1.add(c2);
    total.display();

    return 0;
}

// NOTE : While creating a parametrized constructor always create a default constructor else the program throws an error.

// At line no 16 we have created a default constructor before creating the parametrized contructor at line no 18. However we can create a default constructor by passing default arguments to the parametrized constructor as shown in line no 26.
