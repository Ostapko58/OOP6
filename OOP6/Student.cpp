#include "Student.h"

int Student::counter = 0;
Student::Student()
{
	Man man;
	this->man = man;
	Student::counter++;
}

Student::Student(Man man, int year)
{
	this->man = man;
	this->year = year;
	Student::counter++;
}

Student::Student(string name, int age, string sex, double weight, int year)
{
	Man man(name, age, sex, weight);
	this->man = man;
	this->year = year;
	Student::counter++;
}

Student::~Student()
{
	Student::counter--;
}

Student::Man Student::getMan()
{
	return this->man;
}

int Student::getYear()
{
	return this->year;
}

void Student::yearIncrease()
{
	this->year++;
}



Student& Student::operator=(Student& student)
{
	this->man = student.man;
	this->year = student.year;
	return *this;
}

int Student::getCounter()
{
	return Student::counter;
}

void Student::setYear(int year)
{
	this->year = year;
}

void Student::setMan(Man man)
{
	this->man = man;
}

ostream& operator<<(ostream& out, Student& student)
{
	out << student.man << "year: " << student.year << "\n";
	return out;
}

istream& operator>>(istream& in, Student& student)
{
	in >> student.man;
	cout << "year: "; in >> student.year;
	cout << endl;
	return in;
}









int Student::Man::counter = 0;
Student::Man::Man(string name, int age, string sex, double weight)
{
	this->name = name;
	this->age = age;
	this->sex = sex;
	this->weight = weight;
	Student::Man::counter++;
}

Student::Man::Man()
{
	this->name = "";
	this->age = 0;
	this->sex = "";
	this->weight = 0;
	Student::Man::counter++;
}

void Student::Man::setName(string name)
{
	this->name = name;
}

Student::Man::~Man()
{
	Student::Man::counter--;
}

void Student::Man::setAge(int age)
{
	this->age = age;
}

void Student::Man::setWeight(double)
{
	this->weight = weight;
}

string Student::Man::getName()
{
	return this->name;
}

int Student::Man::getAge()
{
	return this->age;
}

string Student::Man::getSex()
{
	return this->sex;
}

double Student::Man::getWeight()
{
	return this->weight;
}

int Student::Man::getCounter()
{
	return  Student::Man::counter;
}

Student::Man& Student::Man::operator=(Man& man)
{
	this->name = man.name;
	this->age = man.age;
	this->sex = man.sex;
	this->weight = man.weight;
	return *this;
}


ostream& operator<<(ostream& out, Student::Man& man)
{
	out << string("name: " + man.name
		+ "\nage: " + to_string(man.age)
		+ "\nsex: " + man.sex
		+ "\nweight: " + to_string(man.weight) + "\n");
	return out;
}

istream& operator>>(istream& in, Student::Man& man)
{
	cout << "name: "; in >> man.name;
	cout << "age: "; in >> man.age;
	cout << "sex: "; in >> man.sex;
	cout << "weight: "; in >> man.weight;
	return in;
}
