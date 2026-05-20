#include<iostream>
using namespace std;

class Animal
{

    private:
        int age;
    protected:
        string species;
    public:
        string name;
        Animal(string n = "Unknown", string s = "Unknown", int a = 0)
        {
            name = n;
            species = s;
            age = a;
            cout << "Animal Contructor Called" << endl;
        }

        int getAge()
        {
            return age;
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Species: " << species << endl;
            cout << "Age: " << age << endl;
        }

        ~Animal()
        {
            cout << "Animal destructor called" << endl;
        }
};

class Dog : public Animal
{
    private:
        string breed;
    public:
        Dog(string n, string s, int a, string b) : Animal(n,s, a)
        {
            breed = b;
            cout << "Dogs constructor called" << endl;
        }

        void display()
        {
            Animal::display();
            cout << "Breed" << breed << endl;
        }

        ~Dog()
        {
            cout << "Dogs destructor called" << endl;
        }
};

int main()
{
    Dog d("Bruno", "Canine", 3, "Labrador");
    d.display();
    return 0;
}