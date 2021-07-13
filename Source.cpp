#include<iostream>
/*Simple Program giving a result based on
* a simple multiplication.
* Program was worked on Sept 12, 2018
* during time in LBCC
*/

using namespace std;

int main () {
//variable declaration
	int id; 
	double hours, rate, gross;


	cout << "    Employee Salary Records" << endl;

	cout << "Employe ID: ";  //User enter ID
	cin >> id;
	cout << "Hours Worked: "; //User enter hours worked
	cin >> hours;
	cout << "Rate per Hour: "; //Pay rate/hours
	cin >> rate;
	//processing
	gross = hours * rate;
	cout << "Gross Salary: $" << gross << " /week"; 
	cout << endl;

	system("Pause");
	return 0;

}