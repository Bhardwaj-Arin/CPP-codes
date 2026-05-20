#include<iostream>
using namespace std;

class Student
{
    private:
        int roll;
        string name;
    
    public:
        Student(int r = 0, string n = "Unknown")
        {
            roll = r;
            name = n;
        }

        Student(Student &s) // non-const reference
        {
            roll = s.roll;
            name = s.name;
        } 

        // Fix
        Student(const Student &s)
        {
            roll = s.roll;
            name = s.name;
        }
};

int main()
{
    const Student s1(100, "Martin");
    // Student s2 = s1;  Error
    return 0;
}

// const objects cannot bind to non-const reference.
// s1 is a constant object so when we call the copy constructor by writing s2 = s1 the copy construct expect a const reference only due to which error occurs.

// Fix: Make the reference const.