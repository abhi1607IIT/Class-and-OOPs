#include <iostream>
using namespace std;
class pair1 {
  public:
		//must be initialized const int first;
		int first;
		int second;
		static int count;

		// pre
		pair1& operator ++() {
			first++;
			second++;
			return *this;
		}

		// post
		const pair1 operator ++(int) {
			pair1 p(*this);
			first++;
			second++;
			return p;
		}

		pair1& operator += (pair1 const & p2) {
			first += p2.first;
			second += p2.second;
			return *this;
		}

		bool operator > (pair1 const & p2) const {
			if (this->first == p2.first) {
				return this->second > p2.second;
			}
			return this->first > p2.first;
		}

		pair1(int first, int second):first(first),second(second) {
			count++;
		}

		void print() const{
			cout << first << " " << second << endl;
		}

		static int getCount() {
			pair1 p(100,100);
			p.first = 10;
			return count;
		}

		void add(pair1 const & p2) {
			this->first = this->first + p2.first;
			this->second = this->second + p2.second;
		}


};
int pair1::count = 0;
