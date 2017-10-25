#include <iostream>
using namespace std;

class polynomial {
	int* coefficients;
	int maxDegree;
	
	public:
	
	void add(polynomial p) {

	}
	
	~polynomial() {
		if (coefficients != NULL) {
			delete [] coefficients;
		}
	}

	polynomial(polynomial const & p) {
		coefficients = new int[p.maxDegree + 1];
		for (int i = 0; i <= p.maxDegree; i++) {
			coefficients[i] = p.coefficients[i];
		}
		maxDegree = p.maxDegree;
	}

	polynomial() {
		maxDegree = -1;
		coefficients = NULL;
	}

	int evaluate(int x) {
		int sum = 0;
		int currentPower = 1;
		int i = 0;
		while (i <= maxDegree) {
			sum = sum + currentPower*coefficients[i];
			i++;
			currentPower = currentPower * x;
		}
		return sum;
	}

	polynomial(int * co, int s) {
		coefficients = new int[s];
		for (int i = 0; i < s; i++) {
			coefficients[i] = co[i];
		}
		maxDegree = s - 1;
	}

	void print() {
		for (int i = 0; i <= maxDegree; i++) {
			cout << coefficients[i] << "x^" << i << " + ";
		}
		cout << endl;
	}

	void setCoefficients(int * co, int s) {

	}

	void setCoefficient(int degree, int coefficient) {
		if (degree > maxDegree) {
			int* temp = new int[degree + 1];
			for (int i = 0; i <= maxDegree; i++) {
				temp[i] = coefficients[i];
			}
			for (int i = maxDegree + 1; i <= degree; i++) {
				temp[i] = 0;
			}
			delete [] coefficients;
			coefficients = temp;
			maxDegree = degree;
		}
		coefficients[degree] = coefficient;
	}


};







