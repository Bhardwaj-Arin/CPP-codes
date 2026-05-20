// frienship is not inherited in c++

#include <iostream>
using namespace std;

class Parent
{
    private:
        int x = 5;
    public:
        friend void show(Parent);
};

class Child : public Parent
{
    private:
        int y = 10;
};

void show(Parent p)
{
    cout << p.x << endl;
    // cout << p.y << endl; Not allowed as friendhip is not inherited in c++
}

int main()
{
    Child c;
    show(c);
    return 0; 
}