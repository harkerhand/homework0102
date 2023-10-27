#include <iostream>
#include "GradeBook.h"
using namespace std;

int main()
{
    GradeBook gradeBook1("CS101", "Sam Smith");
    gradeBook1.displayMessage();
    cout << "Changing instructor name to Judy Jones" << endl;
    gradeBook1.setInstructorName("Judy Jones");
    gradeBook1.displayMessage();
}