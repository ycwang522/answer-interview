#include<iostream>
#include<math.h>
#define PI 3.141592653


using namespace std;

int main()
{
	const double c = 3.0*1e8;
	const double f = 1.0e9;

	double k = 2*PI*f/c;
	

	double l = 10.0; 
	double a1 = l / 2;
	double a2 = l / sqrt(2);
	double w = 2 * PI*f;
	double costheta = 0.5;
	double theta = 30 * PI / 180;
	double thegema1 = l*l*(k*w*sin(k*w*sin(theta)) / (k*w*sin(theta)))*(k*w*sin(k*w*sin(theta)) / (k*w*sin(theta))) / PI;
	double thegema2 = k*a1*l*l;
	double thegema3 = PI*a2*a2;
	cout << thegema1 << endl
		<< thegema2 << endl
		<< thegema3 << endl;
	system("pause");
}