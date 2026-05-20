#include<iostream>
using namespace std;

class Animal
{
    public:
        int age;
        Animal()
        {
            age = 0;
            cout << "Animals contructor" << endl;
        }

        void breathe()
        {
            cout << "Animal breathes" << endl;
        } 
};


class Dog : virtual public Animal
{
    public:
        Dog()
        {
            cout << "Dog's contructor" << endl;
        }

        void bark()
        {
            cout << "Woof!" << endl;
        }
};

class Bird : virtual public Animal
{
    public:
        Bird()
        {
            cout << "Bird's contructor" << endl;
        }

        void chirp()
        {
            cout << "Tweet!" << endl;
        }
};

class GuideDog : public Dog, public Bird
{
    public:
        GuideDog()
        {
            cout << "GuideDog's constructor" << endl;
        }
};

int main()
{
    GuideDog g;
    g.bark();
    g.chirp();
    // g.breathe(); Error if the parent class Animal is not virtual
    g.breathe();
    return 0;
}