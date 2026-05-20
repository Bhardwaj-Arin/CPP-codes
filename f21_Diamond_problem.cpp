// Diamond problem fix
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

class Mammal : virtual public Animal
{
    public:
        void walk()
        {
            cout << "Walking" << endl;
        }
};

class Bird : virtual public Animal
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
    b.eat(); // No Compilation error this time
    return 0;
}