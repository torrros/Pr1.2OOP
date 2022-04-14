#include "Student.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;
Student makestudent(string name, int n, int* marks, int countmarks)
{
	Student D;
	
 bool result = D.Init(name, n, marks, countmarks);

 if (result == -1);
 cout << " " << endl;

	 return D;
	
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int countmark = 4;
	int* marks = new int[countmark] {  3,4,2,5 };
	Student g;
	g.Init("Торос", 5, marks, countmark);
	g.Display(countmark);
	
	cout << "" << endl;
	
	string name;
	int n;
	cout << " Прізвище -  "; getline(cin, name);
	cout << " Номер залікової книжки -  "; cin >> n;
	cout << " Кількість оцінок -  "; cin >> countmark;
	marks = new int[countmark];
	for (int i = 0; i < countmark; i++)
	{
		cout << " Оцінка  " << i + 1 << " -  "; cin >> marks[i];
	}
	
	Student D = makestudent(name, n, marks, countmark);
		D.Display(countmark);
	
	return 0;

}
		