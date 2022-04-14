#pragma once 
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int BookID;
	int* marks;
	
public:
	int Init(string name, int n, int* marks, int countmarks);
	void Read(int* marks, unsigned coutmarks);
	void Display(int countmarks);

	string getname() const;
	int getBookID() const;
	int* getmarks() const;

	void SetName(string);
	void SetBookID(int);
	int SetMarks(int* marks, int count);
	
	double getavr(int countmarks);
	int countbad(int countmarks);
};
