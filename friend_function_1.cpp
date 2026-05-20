#include<iostream>
using namespace std;

class Box
{
    private:
        double length;

    public:
        Box(double l = 0)
        {
            length = l;
        }

        friend void displayLength(Box);
};

void displayLength(Box b)
{
    cout << "Length = " << b.length;
}

int main()
{
    Box B(100.23);
    displayLength(B);
    
    return 0;
}