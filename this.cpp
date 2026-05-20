/*

#include<iostream>
using namespace std;

class A
{
    int a; // member variable
    public:
        void setData(int a)
        {
            // a = a;  parameter is set to itself the member variable a never gets initialized
            this->a = a; // now the member variable 'a' is set to the paramter 'a'(no ambiguity)
        }

        void getData()
        {
            cout << "The value of a is " << a;
        }
};

int main()
{
    A obj;
    obj.setData(4);
    obj.getData();
    return 0;
}

*/

#include<iostream>
using namespace std;

class Counter
{
    int count;
    public:
        Counter(){count = 0;}

        Counter& increment()
        {
            count++;
            // return this; Error as the fuction 'increment' return type is an object but this is a pointer

            return *this; // returns the object 
        }

        void display()
        {
            cout << "count = " << count << endl;
        }
};


int main()
{
    Counter obj;
    obj.increment().increment().increment();
    obj.display();
    
    return 0;
}

// this pointer stores the address of the current object. this also has its own address so returning this returns the address of the object not the actual object. So to return the actual object we need to deference it i.e we need to return *this to return the actual object.
