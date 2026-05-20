#include<iostream>
using namespace std;

class Animal {
public:

    // Fix 
    Animal(){};
    Animal(int x)
    { 
        cout << "Animal " << x << endl; 
    }
};

class Dog : public Animal {
public:
    Dog() 
    { cout << "Dog" << endl; 

    }  // Will throw an ERROR if the parent does not have any default constructor 
};

int main()
{
    Dog d;
    return 0;
}


// NOTE: Constructor calling order: Base class first then derived class