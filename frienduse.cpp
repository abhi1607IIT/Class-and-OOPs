#include <iostream>
#include "friend.cpp"
using namespace std;

int main() {
	A a(10);
	B b;
	cout << abc(a) << endl;
	cout << b.blah(a) << endl;
}

