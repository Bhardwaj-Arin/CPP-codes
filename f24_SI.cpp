#include<iostream>
using namespace std;

class Animal {
    public:
        Animal(string name) {
            cout << "Animal: " << name << endl;
        }
};

class Dog : public Animal {
    public:
        Dog(string name):Animal(name){};
};

int main()
{
    Dog d("Bob");
    return 0;
}