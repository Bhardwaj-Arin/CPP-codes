#include<iostream>
using namespace std;

class Circle
{
    private:
        int radius;
    public:
        void set_radius()
        {
            cout << "Enter radius: "<<endl;
            cin >> radius;
        }

        double area();
};

inline double Circle :: area()
{
    return 3.14*radius*radius;
}

int main()
{
    Circle c;
    c.set_radius();
    cout << c.area();
    
    return 0;
}