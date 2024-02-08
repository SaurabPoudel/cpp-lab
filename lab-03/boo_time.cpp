#include <iostream>

class Time {
private:
  int day;
  int hour;
  int min;
  int sec;

public:
  Time(int d = 0, int h = 0, int m = 0, int s = 0)
      : day(d), hour(h), min(m), sec(s) {}

  Time operator+(const Time &t) {
    Time temp;
    temp.sec = sec + t.sec;
    temp.min = min + t.min + temp.sec / 60;
    temp.sec %= 60;
    temp.hour = hour + t.hour + temp.min / 60;
    temp.min %= 60;
    temp.day = day + t.day + temp.hour / 24;
    temp.hour %= 24;
    return temp;
  }

  void display() {
    std::cout << "Day: " << day << ", Hour: " << hour << ", Minute: " << min
              << ", Second: " << sec << std::endl;
  }
};

int main() {
  Time t1(1, 12, 30, 45);
  Time t2(2, 4, 20, 35);
  Time t3 = t1 + t2;
  std::cout << "Time 1: ";
  t1.display();
  std::cout << "Time 2: ";
  t2.display();
  std::cout << "Time 1 + Time 2: ";
  t3.display();
  return 0;
}
