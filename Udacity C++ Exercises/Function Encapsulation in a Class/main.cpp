#include <cassert>

class Date {
public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);

private:
  int day_{1};
  int month_{1};
  int year_{0};
  int DaysInMonth()
  {
      if((Year() % 4 == 0) && (Month() == 2))
          return 29;
      else
      {
          switch(Month())
          {
              case 1:
                  return 31;
              case 2:
                  return 28;
              case 3:
                  return 31;
              case 4:
                  return 30;
              case 5:
                  return 31;
              case 6:
                  return 30;
              case 7:
                  return 31;
              case 8:
                  return 31;
              case 9:
                  return 30;
              case 10:
                  return 31;
              case 11:
                  return 30;
              case 12:
                  return 31;
          }
      }
  }
};

Date::Date(int day, int month, int year) {
  Year(year);
  Month(month);
  Day(day);
}

void Date::Day(int day) {
  if (day >= 1 && day <= DaysInMonth())
    day_ = day;
}

void Date::Month(int month) {
  if (month >= 1 && month <= 12)
    month_ = month;
}

void Date::Year(int year) { year_ = year; }

// Test
int main() {
  Date date(29, 8, 1981);
  assert(date.Day() == 29);
  assert(date.Month() == 8);
  assert(date.Year() == 1981);
}
