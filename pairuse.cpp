#include <iostream>
#include "pair1.cpp"
using namespace std;

int main() {
	pair1 p(10,20);

//	cout << pair1::add(p) << endl;
	cout << pair1::getCount() << endl;

	pair1 p2(100,200);

	int i1 = 5;
	cout << 10 + i1++ + i1 + 10 << endl;
	i1 = 5;
	cout << 10 + i1 + i1++ + 10 << endl;

	i1 = 5;
	cout << i1++ << i1++ << endl;

//	(p++)++;
	p.print();

	cout << p.first << endl;
	cout << pair1::count << endl;

	const pair1 p3(34, 345);
	p3.print();
  // +=
	int i = 10;

	//(i++)++;
	(++(++i))++;
	
	int j = 12;
	//i += (i += j);
	//(i += i) += j;
	
	
	
	(i += i)++;
	
	
	//(p += p) += p2;
	
	
	
	p.print();
	//int k = (i += j);



	p += p2;
	p.print();
	cout << i << endl;
	cout << j << endl;
	//cout << k << endl;
}

