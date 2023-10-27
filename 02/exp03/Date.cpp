#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int month_IN, int day_IN, int year_IN)
{

    setMonth(month_IN);
    setDay(day_IN);
    setYear(year_IN);
}

void Date::setMonth(int month_IN)
{
    if (month_IN >= 1 && month_IN <= 12)
    {
        month = month_IN;
    }
    else
    {
        month = 1;
    }
}

void Date::setDay(int day_IN)
{
    day = day_IN;
}
void Date::setYear(int year_IN)
{
    year = year_IN;
}
void Date::displayDate() const
{
    cout << month << "/" << day << "/" << year << endl;
}