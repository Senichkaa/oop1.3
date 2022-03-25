//FuzzyNumber.cpp
#include <sstream>
#include "FuzzyNumber.h"

void FuzzyNumber::display() {
	cout << ToString() << endl;
}
void FuzzyNumber::read() {
	cout << "x = "; cin >> x;
	cout << "r = "; cin >> r;
	cout << "l = "; cin >> l;
}
void FuzzyNumber::init(double x, double l, double r) {
	set_x(x);
	set_r(r);
	set_l(l);
}

FuzzyNumber sum(FuzzyNumber A, FuzzyNumber B) {
	FuzzyNumber C;
	C.l = A.l + B.l;
	C.x = A.x + B.x;
	C.r = A.r + B.r;
	return C;
}
FuzzyNumber multiply(FuzzyNumber A, FuzzyNumber B) {
	FuzzyNumber D;
	D.l = A.x * B.x - B.x * A.l - A.x * B.l - A.l * B.l;
	D.x = A.x * B.x;
	D.r = A.x * B.x + B.x * A.r + A.x * B.r + A.r * B.r;
	return D;
}

string FuzzyNumber::ToString() {
	stringstream sout;
	sout << "{ " << get_x() - get_l()
		<< "; " << get_x()
		<< "; " << get_x() + get_r() << " }" << endl;
	return sout.str();
}