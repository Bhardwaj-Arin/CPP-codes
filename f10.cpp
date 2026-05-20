// Default constructor

#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
        int rollNo;
        string name;

    public:
        Student()
        {
            rollNo = 1234;
            name = "XYZ";
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
        }
};

int main()
{
    Student s;
    s.display();
    
    return 0;
}