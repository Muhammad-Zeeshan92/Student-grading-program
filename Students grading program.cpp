#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
struct result
{
	char name[20];
	float activity;
	bool project_done = true ;
	double percentage;
	unsigned int pass : 1;
	unsigned int grade :5;
};
int main()
{
	result Students[5];
	int grade = 0;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the name of the student" << (i + 1) << ". ";
		cin >> Students[i].name, '\n';
		cout << "Enter the activity of the student" << (i + 1) << " between (0-1).";
		cin >> Students[i].activity, '\n';
		cout << "Enter whether the project has done by the student" << (i + 1) << " or not in terms of true=1 or false=0 ";
		cin >> Students[i].project_done, '\n';
		cout << "Enter the percentage of the student" << (i + 1) << ". ";
		cin >> Students[i].percentage, '\n';

		if (Students[i].project_done)
		{
			//Students[i].project_done == 1;
		}
		else
		{
			Students[i].project_done == 0;
			Students[i].grade = 0;
			Students[i].pass = 0;
		}
		if (Students[i].project_done == true) {
			if
				(Students[i].percentage < 40)

			{
				Students[i].grade = 0;
				Students[i].pass = 0;
			}
			else if (Students[i].percentage >= 40 && Students[i].percentage <= 60)
			{
				Students[i].grade = 1;
			}
			else if (Students[i].percentage > 60 && Students[i].percentage <= 80)
			{
				Students[i].grade = 2;
			}

			else if (Students[i].percentage > 80 && Students[i].percentage <= 90)
			{
				Students[i].grade = 3;

			}
			else if (Students[i].percentage > 90 && Students[i].percentage <= 95)
			{
				Students[i].grade = 4;

			}
			else if (Students[i].percentage > 95 && Students[i].percentage <= 100)
			{
				Students[i].grade = 5;
				//cout << Students[i].name << " Congratulations! You passed." << "Your final grade is " << Students[i].grade << " out of 5";
				Students[i].pass = 1;
			}
		}
		if (Students[i].activity > 0.5)
		{
			if (Students[i].grade < 5)
			{
				Students[i].grade += 1;
			}
		}
		if (Students[i].pass = 1 && Students[i].grade > 0)
		{
			cout << Students[i].name << " Congratulations! You passed." << "Your final grade is " << Students[i].grade << " out of 5";
		}
		else
			
		{
			
			cout << Students[i].name << " You failed! Better luck next time.";
		}
		cout << "\n";
	}

}


