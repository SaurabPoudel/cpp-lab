#include <iostream>
using namespace std;

class Time {
  int sec, min, hr, day;

public:
  Time(int s, int m, int h, int d) {
    sec = s;
    min = m;
    hr = h;
    day = d;
  }

  Time addTime(Time t1) {
    Time t2(0, 0, 0, 0);
    int sect = sec + t1.sec;
    t2.sec = sect % 60;
    int mint = min + t1.min + sect / 60;
    t2.min = mint % 60;
    int hrt = hr + t1.hr + mint / 60;
    t2.hr = hrt % 24;
    t2.day = day + t1.day + hrt / 24;
    return t2;
  }

  void display() {
    cout << "Time: " << day << " days, " << hr << " hours, " << min
         << " minutes, " << sec << " seconds." << endl;
  }
};

int main() {
  Time t1(30, 30, 30, 30);
  Time t2(30, 30, 30, 30);
  Time t3 = t1.addTime(t2);
  t3.display();
}
