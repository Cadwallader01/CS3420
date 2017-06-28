#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	//variables to hold input
	int studentID = 0;
	string lastName = "";
	string firstName = "";
	string classTaking = "";
	int grade = 0;
	double gpa = 0.0;

	string line;
	ifstream myfile("SIMS.txt");
	/*if (myfile.is_open())
	{
		while (line >> studentID >> lastName >> firstName >> classTaking >> grade >> gpa)


	}
	else cout << "Unable to open file";
	while (line >> firstName >> lastName >> num1 >> num2)
	{
		fullName = firstName + " " + lastName;
		cout << fullName << " " << num1 << " " << num2 << endl;
	}
	*/
	if (myfile.is_open())
	{
		//while (getline (myfile,line))
		while (getline(myfile, line))
		{
			cout << line << '\n';
		}
		myfile.close();
	}
	else cout << "Unable to open file";	
	




	//student id, lastName, firstName, class, grade, gpa
	//01234 stevenson frank history 93 4.0
	
	system("pause");
	return 0;
}
/*
    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value
*/