// Hybrid inheritance(multilevel + multiple)

#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void setRollNo(int r)
        {
            roll_no = r;
        }

        void displayRollNo()
        {
            cout << "Roll no" << roll_no << endl;
        }

        void golu()
        {
            cout << "golu function inside Student" << endl;
        }
};

class Test : public Student
{   
    protected:
        int marks1, marks2;
    public:
        void setMarks(float m1, float m2)
        {
            marks1 = m1;
            marks2 = m2;
        }

        void displayMarks()
        {
            cout << "Marks1" << marks1 << endl;
            cout << "Marks2" << marks2 << endl;
        }

        void golu()
        {
            cout << "golu function inside Test" << endl;
        }
};

class sports
{
    protected:
        int score;
    public:
        void set_score(int s)
        {
            score = s;
        }

        void displayScore()
        {
            cout << "Score = " << score << endl; 
        }

        void golu()
        {
            cout << "golu function inside sports" << endl;
        }
};


class Result : public Test, public sports
{
    private:
        int total;
    public:
        void calculate()
        {
            total = marks1 + marks2 + score;
        }

        void displayResult()
        {
            displayRollNo();
            displayMarks();
            displayScore();
            cout << "Total Score = " << total << endl;
        }
};

int main()
{
    Result r;
    r.setRollNo(101);
    r.setMarks(90,88);
    r.set_score(-90);
    r.calculate();
    r.displayResult();
    r.Student::golu();

    return 0;
}