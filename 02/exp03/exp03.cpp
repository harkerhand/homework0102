#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    Date date1(15, 2, 2023);
    cout << "Date 1:";
    date1.displayDate();
    cout << "Date 2:";
    Date date2(11, 28, 2020);
    date2.displayDate();
}