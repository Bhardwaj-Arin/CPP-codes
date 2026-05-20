// Passing objects as arguments to a function

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[5][5], size;

    public:
        Matrix(int n)
        {
            size = n;
        }

        void readMatrix()
        {
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    cin >> a[i][j];
                }
            }
        }

        void writeMatrix()
        {
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    cout << a[i][j] << " ";
                }   
                cout << endl;
            }
        }

        void add(Matrix m1, Matrix m2)
        {
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    a[i][j] = m1.a[i][j] + m2.a[i][j];
                }
            }
        }
};

int main()
{
    Matrix M1(3), M2(3), resultantMatrix(3);
    
    cout << "Enter the first matrix: " << endl;
    M1.readMatrix();
    // M1.writeMatrix();

    cout << "Enter the second matrix: " << endl;
    M2.readMatrix();
    // M2.writeMatrix();

    cout << "Resultant matrix: " << endl;
    resultantMatrix.add(M1,M2);
    resultantMatrix.writeMatrix();

    return 0;
}
