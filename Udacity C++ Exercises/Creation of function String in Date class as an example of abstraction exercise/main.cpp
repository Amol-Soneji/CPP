#include <cassert>
#include <string>
#include <vector>

class Date {
 public:
  Date(int day, int month, int year);
  int Day() const { return day_; }
  void Day(int day);
  int Month() const { return month_; }
  void Month(int month);
  int Year() const { return year_; }
  void Year(int year);
  std::string String() const;

 private:
  bool LeapYear(int year) const;
  int DaysInMonth(int month, int year) const;
  int day_{1};
  int month_{1};
  int year_{0};
};

Date::Date(int day, int month, int year) {
  Year(year);
  Month(month);
  Day(day);
}

bool Date::LeapYear(int year) const {
  if (year % 4 != 0)
    return false;
  else if (year % 100 != 0)
    return true;
  else if (year % 400 != 0)
    return false;
  else
    return true;
}

int Date::DaysInMonth(int month, int year) const {
  if (month == 2)
    return LeapYear(year) ? 29 : 28;
  else if (month == 4 || month == 6 || month == 9 || month == 11)
    return 30;
  else
    return 31;
}

void Date::Day(int day) {
  if (day >= 1 && day <= DaysInMonth(Month(), Year())) day_ = day;
}

void Date::Month(int month) {
  if (month >= 1 && month <= 12) month_ = month;
}

void Date::Year(int year) {
  year_ = year;
}

std::string Date::String() const
{
    switch(Date::Month())
    {
        case 1:
            return ("January " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 2:
            return ("February " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 3:
            return ("March " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 4:
            return ("April " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 5:
            return ("May " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 6:
            return ("June " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 7:
            return ("July " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 8:
            return ("August " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 9:
            return ("September " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 10:
            return ("October " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 11:
            return ("November " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
        case 12:
            return ("December " + std::to_string(Date::Day()) + ", " + std::to_string(Date::Year()));
    }
}

// Test
int main() {
  Date date(29, 8, 1981);
  assert(date.String() == "August 29, 1981");
}
