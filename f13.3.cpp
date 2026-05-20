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

        Student(const Student &s)
        {
            roll = s.roll;
            name = s.name;
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
        }

        // Fix
        void display() const
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
        }
};

int main()
{
    const Student s1(100, "Jared");
    // s1.display(); --> Error

    return 0;
}

// s1 is const object but display is non-const so s1 cannot call display
// Fix make void const

