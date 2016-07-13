#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	double x;
	ofstream out;
	out.open("titi.dat");
	for (x = -5; x <= 5; x += 1)
	{
		double y1 = -x + 2;
		double y2 = -x - 2;
		double y3 = x + 2;
		double y4 = x - 2;
		out << x << "   " << y1 << "   " << y2 << "   " << y3 << "   " << y4 << endl;
	}
	out.close();
	return 0;

}