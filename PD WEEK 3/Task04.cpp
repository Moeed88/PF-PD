#include <iostream>
using namespace std;
main()
{
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float total_marks;
float percentage;

cout << "Enter name: ";
cin >> name;
cout << " Enter subject1 marks: ";
cin >> subject1;
cout << " Enter subject2 marks: ";
cin >> subject2;
cout << " Enter subject3 marks: ";
cin >> subject3;
cout << " Enter subject4 marks: ";
cin >> subject4;
cout << " Enter subject5 marks: ";
cin >> subject5;

total_marks = subject1 + subject2 + subject3 + subject4 + subject5; 
percentage = total_marks / 500 * 100;

cout << "Student name is " << name << endl;
cout << "Student percentage is " << percentage << endl;
}
