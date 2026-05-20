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

        // pre-increment
        Complex operator++() 
        {
            real++;
            imag++;
        
            Complex temp;
            temp.real = real;
            temp.imag = imag;

            return temp;
        }

        // post-increment
        Complex operator++(int)
        {
            Complex temp;
            temp.real = real;
            temp.imag = imag;

            real++;
            imag++;

            return temp;
        }

        void print()
        {
            cout << real << " + " << imag << "i" << endl;
        }

};

int main()
{

    Complex c1(1,1), c2;
    c2 = ++c1;
    c2.print();
    c1.print();


    Complex c3(2,2), c4;
    c4 = c3++;
    c4.print(); // remains same
    c3.print(); // increases by 1

    return 0;
}


/* Pre increment working 

real = 2, imaginary = 2
c1 becomes(2,2)
temp.real = 2, temp.imaginary = 2
return temp
c2 = holds temp -> c2 become (2,2)
*/


/* Post increment working 

temp.real = 2, temp.imag = 2
temp becomes (2,2)
real = 3, imag = 3
return temp

c4 = temp i.e c4 holds (2,2)
But c3 holds(3,3)
*/