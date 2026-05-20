// Constructor overloading

#include<iostream>
using namespace std;

class Person
{
    private:
        int age;
    public:
        Person()
        {
            age = 24;
        }

        Person(int a)
        {
            age = a;
        }

        int getAge()
        {
            return age;
        }
};

int main()
{
    Person p1, p2(20);
    cout << "Person 1 age: " << p1.getAge() << endl;
    cout << "Person 2 age: " << p2.getAge() << endl;
    
    return 0;
}