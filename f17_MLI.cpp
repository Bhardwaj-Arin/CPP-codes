// Multilevel inheritance

#include<iostream>
using namespace std;

class A
{
    private:
        int a;

    public:
        void set_a()
        {
            cout << "Enter the value of a: ";
            cin >> a;
        }

        int get_a()
        {
            return a;
        }
};

class B : public A
{
    private:
        int b;

    public:
        void set_b()
        {
            cout << "Enter the value of b: ";
            cin >> b; 
        }

        int get_b()
        {
            return b;
        }
};  

class C : public B
{
    private:
        int c;

    public:
        void set_c()
        {
           cout << "Enter the value of c: ";
            cin >> c; 
        }

        void sum()
        {
            int result = get_a() + get_b() + c;
            cout << "Sum = " << result << endl;
        }
}; 

int main()
{
    C obj;
    obj.set_a();
    obj.set_b();
    obj.set_c();
    obj.sum();
    // obj.get_a();
    // obj.get_b();

    return 0;
}