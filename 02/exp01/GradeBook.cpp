#include <iostream>
#include "GradeBook.h"
using namespace std;

GradeBook::GradeBook(string courseName_IN, string InstructorName_IN)
{
    setCourseName(courseName_IN);
    setInstructorName(InstructorName_IN);
}
void GradeBook::setCourseName(string courseName_IN)
{
    courseName = courseName_IN;
}
void GradeBook::setInstructorName(string InstructorName_IN)
{
    InstructorName = InstructorName_IN;
}

string GradeBook::getCourseName() const
{
    return courseName;
}
string GradeBook::getInstructorName() const
{
    return InstructorName;
}
void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n"
         << getCourseName() << "!\n"
         << "This course is presented by:" << InstructorName << endl;
}