#include <iostream>

using namespace std;

Class fraction{
	public:
		fraction();
		fraction(int no,de);
		~fraction();
		void print();
		void simplify();
		std::istream& operator>>(std::istraam& is, const fraction& obj);
		fraction operator=(fraction other);
		fraction operator+(fraction other);
		fraction operator*(fraction other);
		fraction operator-(fraction other);
		fraction operator/(fraction other);

	private:
		int a,b;
		//a as nominator, b as denominator
}