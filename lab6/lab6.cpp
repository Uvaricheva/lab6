#include "stdafx.h" 
#include <iostream> 


using namespace std;

class real {
protected:
	double a;
public:
	real(double _a) : a(_a) {}
	double mod() {
		return abs(a);
	}
	void print() {
		cout << "a=" << a << endl
			<< "|a|=" << mod() << endl;
	}
};

class complex : public real {
protected:
	double mnim;
public:
	complex(double _a, double _mnim) : real(_a), mnim(_mnim) {}
	double mod() {
		return sqrt(real::mod()*real::mod() + mnim*mnim);
	}
	void print() {
		cout << "a=" << a << " Мнимая часть=" << mnim << endl
			<< "|a|=" << mod() << endl;
	}

};

void main() {
	setlocale(LC_ALL, "rus");
	double x, mnim;
	cin >> x >> mnim;
	real a(x);
	complex b(x, mnim);

	a.print();
	b.print();

	system("pause");
}