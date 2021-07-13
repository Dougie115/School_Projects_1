/*Grading System
Long Beach City College
Date: September 23, 2018
Author: Douglas Lopez
*/
#include <iostream>
#include <iomanip>
#include <string>	
using namespace std;
int main()
{
	// Variable Declaration section
	int id = int();
	double average, total, cs11, cs12, cs22 = double();
	string fname = string();
	string lname = string();
		
	//Header
	cout << "====================================================================" << endl;
	cout << "Student Grading System (SGS)" << endl;
	cout << "Long Beach City College" << endl;
	cout << "Author: Douglas Lopez" << endl;
	cout << "Sept. 23, 2018" << endl;
	cout << "====================================================================" << endl;

	// Inputs
	cout << "To calculate your average grade please enter the following data." << endl;
	cout << "Please enter your student ID: ";
	cin >> id;
	cout << "Please enter your first name: ";
	cin >> fname;
	cout << "Please enter your last name: ";
	cin >> lname;
	cout << "PLease enter your grade for CS11: ";
	cin >> cs11;
	cout << "PLease enter your grade for CS12: ";
	cin >> cs12;
	cout << "PLease enter your grade for CS22: ";
	cin >> cs22;
	cout << "====================================================================" << endl;
	

	total = cs11 + cs12 + cs22;
	average = total / 3;
	

	cout << "Student ID: " << id << endl;
	cout << "First Name: " << fname << endl;
	cout << "Last Name: " << lname << endl;
	cout << "Total: " << total << endl;
	cout << "Average: " << setprecision(4)<<average << "% "<< endl;



	// Processing
		if (average >= 90 )
		{
			cout << "Grade: A" << endl;
			cout << "Comments: Congratulations I think you made it!" << endl;
		}
		else if (average >= 80 && average < 90)
		{
			cout << "Grade: B" << endl;
			cout << "Congrats you're better than average!" << endl;
		}
		else if (average >= 70 && average < 80)
		{
			cout << "Grade: C" << endl;
			cout << "Good job 'Average Joe'!" << endl;
		}
		else if (average >= 60 && average < 70)
		{
			cout << "Grade: D" << endl;
			cout << "You should try harder!" << endl;
		}
		else if (average < 60)
		{
			cout << "Grade: F" << endl;
			cout << "Things don't look to good do they..." << endl;
		}
		

	// Outputs
	cout << "Thank you for using the Student Grading System!" << endl;
	cout << "Goodbye...!" << endl;
	cout << "====================================================================" << endl;

	system("pause");
	return 0;
}