// Single inheritance using private derivation

#include<iostream>
using namespace std;

class B
{
    private:
        int a;
    public:
        int b;
        void getValues()
        {
            cout << "Enter the value of a and b: ";
            cin >> a >> b;
        }

        int get_a()
        {
            return a;
        }
};

class D : private B
{
    private:
        int product;
    public:
        void mul()
        {
            getValues();
            product = b * get_a();
        }

        void display()
        {
            cout << "Value of a: " << get_a() << endl;
            cout << "Value of b: " << b << endl;
            cout << "Product = " << product << endl;
        }
};

int main()
{
    D obj;
    obj.mul();
    obj.display();
    
    return 0;
}

// Inside Derived class all the public and protected members of the base class becomes private

// The Derived class can still use public members of the base class internally(inside its own methods) but those public members of the base class which became private inside D due to private derivation are no longer accessible through a derived object from outside.

// Golden rule of privae inheritance: Public and protected members of the base class become private members of the derived class. They are usable inside D's methods, but not accessible through a D object from outside.