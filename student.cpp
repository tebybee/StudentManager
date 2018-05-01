#include "student.h"
#include <string>
using namespace std;
void student::setName(string s1, string s2)
{   
    firstName = s1;
    lastName = s2;
}
string student::fullName()
{
    string f;
    f.append(firstName);
    f.append(" ");
    f.append(lastName);
    return f;
}
