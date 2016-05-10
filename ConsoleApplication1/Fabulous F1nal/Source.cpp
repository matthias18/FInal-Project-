#include <iostream>
#include <string>
#include <cmath>
#include 'Header.h'
using namespace std;


int main()
{
	cout << "Welcome to the easy, automatic grader program! \n";
	cout << "Please enter the number of students who will be testing. \n";
	cin >> Numb3rofStudents; 
	cout << "And how many questions will this particular test contain? \n";
	cin >> Numb3rofQuestions;
	cout << "Please enter the answer key for the " << Numb3rofQuestions << " questions. \n";
	cin >> Answ3rK3y; //possible 2D array?// 
	cout << "To sumbit a student's set of answers, first enter their respective ID number, proceeded by their choices. \n";

	cout << "Student " << IDNumb3r << " imputted " << C0rr3ctCount << " out of " << Numb3rofQuestions << " questions; \n";
	cout << "Student " << IDNumb3r << " recieved a score of " << IndividualAverag3 << " percent. \n";
	cout << "For test number " << T3st /* */ << " the class average came to be " << Average << endl; 

		return 0;
}