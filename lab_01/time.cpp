#include <iostream>
using namespace std;
class Time {
  int days, hours, min, sec;

public:
  Time(int days1, int hours1, int min1, int sec1) {
    days = days1;
    hours = hours1;
    min = min1;
    sec = sec1;
  }
  Time addTime(Time t1) {
    Time time(0, 0, 0, 0);
    time.days = days + t1.days;
    time.hours = hours + t1.hours;
    time.min = min + t1.min;
    time.sec = sec + t1.sec;
    return time;
  }
  void print() {
    cout << "Days: " << days << "Hours: " << hours << "Min: " << min
         << "Sec: " << sec;
  }
};
int main() {
  Time t1(1, 2, 3, 4);
  Time t2(1, 2, 3, 4);
  Time ans = t1.addTime(t2);
  ans.print();
}
