#ifndef _STUDENT_H_
#define _STDENT_H_
#include <string>
using namespace std;
class student
{
private:
string firstName;
string lastName;
public:
void setName(string s1, string s2);
string fullName();
};
#endif

