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
    Student s1 = Student(100, "Garry");
    return 0;
}

// Copy initialization: Creates and temporary object and temporary objects are const by natures so it cannot bind to non-const reference.

// FIX: Make non-const reference const