#include<iostream>
using namespace std;

class Engine
{   private:
        int horsepower;

    public:     
        Engine(int hp) : horsepower(hp)
        {
            cout << "Engine: " << horsepower << " HP" << endl;
        }
};

class Body
{
    private:
        string color;

    public:
        Body(string c) : color(c)
        { 
            cout << "Body color: " << color << endl;
        }
};

class Car : public Engine, public Body
{
    private:
        string brand;
    public:
        Car(int hp, string c, string b) : Engine(hp), Body(c), brand(b)
        {
            cout << "Car brand: " << brand << endl;
        } 
};

int main()
{
    Car myCar(200, "Red", "Toyota");
    return 0;
}