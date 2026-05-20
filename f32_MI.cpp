#include <iostream>
using namespace std;

class A {
    public:
        void greet()
        { 
            cout << "Hello from A" << endl; 
        }
};

class B {
    public:
        void greet() 
        { 
            cout << "Hello from B" << endl; 
        }
};

class C : public A, public B {};

int main() {
    C obj;
    // obj.greet();          // ERROR: ambiguous
    // obj.A.greet();        // ERROR: wrong syntax
    // obj.(A::greet)();     // ERROR: wrong syntax
    obj.A::greet();       // CORRECT syntax
    
    return 0;
}