// Create a point A(x,y) using a copy constructor. Initialize another point B(x,y). Then display both the points

#include<iostream>
using namespace std;

class Point
{
    int x,y;

    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }

        Point(const Point &obj)
        {
            x = obj.x;
            y = obj.y;
        }

        void display()
        {
            cout << "Point is: " << "<" << x << "," << y << ">" << endl;
        }
};

int main()
{
    Point A(1,2);
    cout << "Object 1 data" << endl;
    A.display();

    Point B(A); // copy constructor called
    cout << "\nObject 2 data" << endl;
    B.display();

    return 0;
}


