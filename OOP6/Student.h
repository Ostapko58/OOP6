#pragma once
#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
	class Man
	{
	private:
		string name;
		int age;
		string sex;
		double weight;
		static int counter;
	public:
		Man(string, int, string, double);
		Man();
		~Man();
		void setName(string);
		void setAge(int);
		void setWeight(double);

		string getName();
		int getAge();
		string getSex();
		double getWeight();
		Man& operator =(Man&);
		friend ostream& operator << (ostream&, Student::Man&);
		friend istream& operator >> (istream&, Student::Man&);

		static int getCounter();
	};

	Student();
	Student(Man, int);
	Student(string, int, string, double, int);
	~Student();

	Man getMan();
	int getYear();

	void setYear(int);
	void setMan(Man);

	void yearIncrease();
	Student& operator =(Student&);
	friend ostream& operator << (ostream&, Student&);
	friend istream& operator >> (istream&, Student&);
	static int getCounter();

private:
	Man man;
	int year;
	static int counter;
};

