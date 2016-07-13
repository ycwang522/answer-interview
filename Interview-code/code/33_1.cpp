#include <iostream>
using namespace std;

class A
{
public:
	A(int v) : val(v) {}
	void print_val() { cout << "not const:" << val << endl; }
	void print_val() const { val++; cout << "const print_val:" << val << endl; }
private:
	mutable int val;
};
int main(int argc, char **argv)
{
	A b(45);
	b.print_val();

	const A a(12);
	a.print_val();
}