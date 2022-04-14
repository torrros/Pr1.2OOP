#include "Student.h"
#include <iostream>

using namespace std;

void Student::SetName(string name)
{
	this -> name = name;
}

int Student::SetMarks(int* marks, int count)
{
	if (marks)
	{
		for(	int i = 0; i < count; i++)
			if (marks[i]>0 && marks[i]<=5)
				this -> marks = marks;
		return 0;
			
	}
}

void Student::SetBookID(int recordID)
{
	this -> BookID = recordID;
}

int Student::Init(string name, int n, int* marks, int countmarks)
{
	SetName(name);
	SetBookID(n); 
	return SetMarks(marks, countmarks);
}

void Student::Read(int* marks, unsigned coutmarks)
{
	string name;
	int n;
	cout << "Прізвище - "; getline(cin, name);
	cout << " Номер залікової книжки - "; cin >> n;
	cout << " Оцінки - " << endl;
		
	
	do {
		for (int i = 0; i < coutmarks; i++) {
			cout << "Оцінки" << i + 1 << ": "; cin >> marks[i];
		}
	} while(Init (name, n, marks, coutmarks) );
	cout << endl;
}
			
void Student::Display(int countmarks)
{
	cout << " Прізвище - " << name << endl <<
		" Номер залікової книжки - " << BookID<< endl
		<< " Оцінки -  ";
	if (marks) {
		

		for (int i = 0; i < countmarks; i++) {
			cout << marks[i];
			if (i < countmarks )
				cout << " | ";
		}
		
	}
	cout << "" << endl;
	cout <<" Cередня оцінка - " << getavr(countmarks) << endl;
	cout << " Кількість незадовільних оцінок  - " << countbad(countmarks) << endl;
}

string  Student::getname()const
{
	return name;
}

int Student::getBookID()const
{
	return BookID;
}

int* Student::getmarks()const
{
	return marks;
}

double Student::getavr(int countmarks)
{
	 
	double sum = 0.0;
	for (int i = 0; i < countmarks; i++)
		sum+= marks[i];
		return sum/ countmarks;
}

int Student::countbad(int countmarks)
{
	int count = 0;
	for (int i = 0; i < countmarks; i++)
		if (marks[i] <=2)
			count++;
	return count;
}
