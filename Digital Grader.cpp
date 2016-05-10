//////////
// Made by Matthias Carroll 2016, all rights reserved
//////////
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main ()
{
int NumberCorrect = 0;
int y;
int x;
/*const int Students = 20;
const int Questions = 45;
int * NumberofStudents = &Students;
int * NumberofQuestions = &Questions;*/
char AnswerKey[Questions]; 
char Answers[Students][Questions];

cout << "Please enter the number of students. \n";
cin >> y;
cout << "How many questions are there? \n";
cin >> x;
cout << "Please enter the answer key. \n"; 
cin >> AnswerKey; 
cout << "Enter the student's answers. \n"; 

for (int a = 0; a < Students; a++)
{
	cin >> Answers[20][45];
	for (int b = 0; b < Questions; b++)
	{
		if (Answers[a][b] == AnswerKey[b])
			NumberCorrect++;
	}
	cout << "Student " << a << " inputed " << NumberCorrect << "correct answers .\n";
}
return 0;
}