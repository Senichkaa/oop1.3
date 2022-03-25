//Source.cpp
#include "FuzzyNumber.h"
int main() {
	FuzzyNumber a;
	FuzzyNumber b;
	FuzzyNumber c;

	a.init(3, 1.5, 2);
	b.read();
	a.display();
	b.display();

	c = sum(a, b);
	c.display();
	cout << "A + B = " << "(" << c.get_x() - c.get_l() << ";" << c.get_x() << ";" << c.get_x() + c.get_r() << ")" << endl << endl;

	c = multiply(a, b);
	c.display();
	cout << "A * B = " << "(" << c.get_x() - c.get_l() << ";" << c.get_x() << ";" << c.get_x() + c.get_r() << ")" << endl << endl;

	return 0;
}