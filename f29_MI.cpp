#include <iostream>
using namespace std;

class Father
{
public:
    void work()
    {
        cout << "Father goes to work" << endl;
    }

    void identity()
    {
        cout << "I am father" << endl;
    }
};

class Mother
{
public:
    void cook()
    {
        cout << "Mother cooks food" << endl;
    }

    void identity()
    {
        cout << "I am Mother" << endl;
    }
};

class Child : public Mother, public Father
{
public:
    void play()
    {
        cout << "Child plays" << endl;
    }

    void showIdentity()
    {
        Father ::identity();
        Mother ::identity();
        // identity(); Error
    }
};

int main()
{
    Child c;
    c.work();
    c.cook();
    c.play();
    c.showIdentity();

    return 0;
}