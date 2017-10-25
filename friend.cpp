class A {
	int data;
	public:
	A(int data) {
		this->data = data;
	}
	friend class B;
	friend int abc(A a);
};

int abc(A a) {
	return a.data;
}

class B {
	public:
	int blah(A a) {
		return a.data;
	}
};
