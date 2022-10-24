#include <iostream>
#include"Student.h"
using namespace std;
int main()
{
	Student st1("Ostap",18,"male",63,2021 );
	cout << st1 << endl;
	cin >> st1;
	cout << st1 << endl;
	
	Student::Man man1("George", 20, "male", 105);
	cout << man1 << endl;
	cout << Student::getCounter() << endl;
	cout << Student::Man::getCounter() << endl;

	st1.setMan(man1);
	st1.setYear(312);
	cout << st1 << endl;

	man1.setName("ta");
	man1.setAge(123);
	man1.setWeight(564);
	cout << man1<< endl;
}


