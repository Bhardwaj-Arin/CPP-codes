// Example of passing objects as an argument to a function

#include<iostream>
using namespace std;

class Length
{
    int metre, centimetre;
    public:
        void setLength(int m = 0, int cm = 0)
        {
            metre = m;
            centimetre = cm;
        }

        void addLength(Length L1, Length L2)
        {
            centimetre = L1.centimetre + L2.centimetre;
            metre = centimetre/100;
            centimetre = centimetre % 100;
            metre = metre + L1.metre + L2.metre;
        }

        void getLength()
        {
            cout << "Length in (metres): " << metre << endl;
            cout << "Length in (centimetres): " << centimetre << endl;
        }
};

int main()
{   
    Length L1, L2, L3;
    L1.setLength(5, 45);
    L2.setLength(2, 65);
    L3.addLength(L1,L2);
    L3.getLength();

    return 0;
}