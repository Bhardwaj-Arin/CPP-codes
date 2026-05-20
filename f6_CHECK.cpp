// Dynamic contructor with array of objects

#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    char *name; // character pointer
    int age;

public:
    Student(const char *n = "Unknown", int a = 0)
    {
        cout << "Inside parametrized contructor" << endl;
        age = a;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
    }

    ~Student()
    {
        cout << "Inside destructor" << endl;
        delete[] name;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Student s("Uddipan", 25);
    // s.display();
    int n;
    cout << "Enter the no of students: ";
    cin >> n;

    Student *students = new Student[n];
    for(int i = 0; i < n; i++)
    {
        char tempName[50];
        int tempAge;
        cout << "Enter name of student: " << i+1 << endl;

        cin >> tempName;
        cout << "Enter age of student: " << i+1 << endl;
        cin >> tempAge;

        students[i] = Student(tempName, tempAge);
    }

    for(int i = 0; i < n; i++)
    {
        students[i].display();
    }

    delete[] students;
    return 0;
}

/*
String literal: Strings terminated by a null character(\0)
    Example1: const char[6] = "Hello";
    Example2: const char* p = "Hello";
Here, Hello is actually stored in read only memory in the form (H e l l o \0). It is not modifiable.
p[0] = 'X' will show undefined behaviour.

However when we create a character array say char arr[] = "Hello" then a copy of the string literal (H e l l o \0) is made in the stack so that it becomes modifiable.
*/