#include<iostream>
using namespace std;

class Time
{
    int hours, minutes;

    public:
        void setTime(int hrs, int mins)
        {
            hours = hrs;
            minutes = mins;
        }

        void displayTime()
        {
            cout << "Time: " << hours << "hr(s) " << minutes << "mins" << endl;
        }

        void add(Time t1, Time t2)
        {   
            minutes = t1.minutes + t2.minutes;
            hours = minutes/60;

            minutes = minutes % 60;
            hours = hours + t1.hours + t2.hours;
        }

};

int main()
{
    Time t1, t2, totalTime;
    t1.setTime(2,50);
    // t1.displayTime();

    t2.setTime(3,40);
    // t2.displayTime();

    totalTime.add(t1,t2);
    totalTime.displayTime();
    return 0;
}

// NOTE: minutes / 60 gives the hidden hours and minutes % 60 gives the remaining minutes