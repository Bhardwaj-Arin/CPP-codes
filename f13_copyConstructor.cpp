// Copy constructor

#include<iostream>
#include<string>
using namespace std;

class Student
{
    int roll;
        string name;

    public:
        Student(int r = 0, string n = "Unknown")
        {
            roll = r;
            name = n;
        }

        // Copy constructor
        Student(const Student &s)
        {
            // s.roll = 1000; Error because const keyword does not allow modification of the original object data inside the constructor
            roll = s.roll;
            name = s.name;
        }

        void update_roll(int r)
        {
            roll = r;
        }

        void display() const
        {
            cout << "Roll no: " << roll << endl;
            cout << "Name: " << name << endl;
        }
};

int main()
{
    Student s1(1, "Martin Garrix");
    cout << "Object 1 data" << endl;
    s1.display();

    Student s2 = s1;    // copy constructor will be triggered
    cout << "\nObject 2 data" << endl;
    s2.display();

    s1.update_roll(2);  // Changing the roll no of s1
    cout << "\nObject 1 data after changing" << endl;
    s1.display();   

    cout << "\nObject 2 data after changing" << endl;
    s2.display();

    Student s3 = Student(2, "Avici");
    s3.display();

    const Student s4(4, "Kygo");  // This is possible due to presence of const keyword while defining the copy constructor else it would throw an error.
    Student s5(s4);
    // s4.display();
    
    return 0;
}

// Standard C++ rule for creating a copy constructor
// className(const className &obj){}


