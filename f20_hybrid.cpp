// Hybrid inheritance(Heirarchial + multiple)

#include<iostream>
using namespace std;

class Animal
{
    public:
        void eat()
        {
            cout << "Eating" << endl;
        }
};

class Mammal : public Animal
{
    public:
        void walk()
        {
            cout << "Walking" << endl;
        }
};

class Bird : public Animal
{
    public:
        void fly()
        {
            cout << "Flying" << endl;
        }
};

class Bat : public Mammal, public Bird
{
    public:
        void species()
        {
            cout << "I am Bat" << endl;
        }

};

int main()
{   Bat b;
    b.fly();
    b.species();
    b.walk();
    // b.eat(); Compilation error
    return 0;
}

// b.eat() gives compilation error because there are two posibilities
// 1. Mammal -> Animal -> eat()
// 2. Bird -> Animal -> eat()
// So there is an ambiguity due to which we get an error. This problem is called the diamond problem.
// To fix this problem make the base class virtual during derivation.
