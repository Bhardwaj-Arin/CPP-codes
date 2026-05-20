#include<iostream>
using namespace std;

class Animal
{
    public:
        string name;

        Animal()
        {
            cout << "Animal Constructor called" << endl;
        }

        void eat()
        {
            cout << name << " is eating." << endl;
        }

        ~Animal()
        {
            cout << "Animal destructor called" << endl;
        }
};

class Mammal : public Animal
{
    public:
        Mammal()
        {
            cout << "Mammals constructor called" << endl;
        }

        void breathe()
        {
            cout << name << " breathes air." << endl;
        }

        ~Mammal()
        {
            cout << "Mammals destructor called" << endl;
        }
};

class Dog : public Mammal
{
    public:
        Dog(string n)
        {
            name = n;
            cout << "Dogs constructor called" << endl;
        }

        void bark()
        {
            cout << name << " is barking." << endl;
        }

        ~Dog()
        {
            cout << "Dogs destructor called" << endl;
        }
};

int main()
{   
    Dog d("Bruno");
    d.eat();
    d.breathe();
    d.bark();
    
    return 0;
}