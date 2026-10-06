// grading system
// name brian pride
// reg no ct101/g/26670/25


#include <iostream>

using namespace std;

int main()
{
	string student_name;
	int exam_marks;
	string grade;
	cout << "ENTER NAME:" << endl;
	cin >> student_name;

	cout << "ENTER NARKS:" << endl;
	cin >> exam_marks;
	if (exam_marks >= 70 && exam_marks <= 100)
	{
		grade = "A";
	}
	else if (exam_marks >= 60 && exam_marks <= 69)
	{
		grade = "B";
	}
	else if (exam_marks >= 50 && exam_marks <= 59)
	{
		grade = "C";
	}
	else if (exam_marks >= 40 && exam_marks <= 49)
	{
		grade = "D";
	}
	else if (exam_marks < 40)
	{
		grade = "E";
	}
	cout << "STUDETS GRADING SYSTEM" << endl;
	cout << "===========" << endl;
	cout << "student name: " << student_name << endl;
	cout << " Exam marks: " << exam_marks << endl;
	cout << "Grade: " << grade << endl;
}
