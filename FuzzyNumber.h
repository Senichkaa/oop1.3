//FuzzyNumber.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class FuzzyNumber
{
private:
	double x;
	double l;
	double r;
public:
	void set_x(double value) { x = value; }
	void set_l(double value) { l = value; }
	void set_r(double value) { r = value; }

	double get_x() const { return x; }
	double get_l() const { return l; }
	double get_r() const { return r; }

	void display();
	void read();
	void init(double x, double l, double r);

	friend FuzzyNumber sum(FuzzyNumber A, FuzzyNumber B);
	friend FuzzyNumber multiply(FuzzyNumber A, FuzzyNumber B);

	string ToString();
};