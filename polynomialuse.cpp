#include <iostream>
using namespace std;
#include "polynomial.cpp"

int main() {
	dynamic_array d;
	int i = d.at(5);


	int a[] = {1,2,0,3};
	polynomial p(a, 4);
	polynomial p1(p);
	p.print();
	p1.print();
	p.add(p1);
	p.setCoefficient(2, 5);
	p1.print();


}

