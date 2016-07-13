#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const double a = 5., b = 5.;
const double pi = 3.1415926;
int main7()
{
	ofstream outfile("��.dat");
	double dx = 0.1, dy = 0.1;
	for (int i = 1; i <= 50; ++i)
	{
		double x = i*dx;  //x ȡֵ��ΧΪ(0,5]
		for (int j = -25; j <= 25; ++j)
		{
			if (j == 0) continue;  //�޳� y=0
			double y = j*dy;  //y ȡֵ��ΧΪ[-2.5,0),(0,2.5]
			double u1 = 0;
			for (int n = 1; n <= 10; ++n)
				u1 += pow(a, 4) * b * (pow(-1., n)*(n*n)*(pi*pi) + 2 -
				2 * pow(-1., n))*sinh(n*pi*y / a) * sin(n*pi*x / a)
				/ (pow((double)n, 5)*pow(pi, 5)*sinh(n*pi*b / (2 * a)));
			double u = u1 + x * y * (pow(a, 3) - pow(x, 3)) / 12;  //���̵Ľ�
			outfile << x << "\t" << y << "\t" << u << endl;  //������
		}
	}
	outfile.close();
	return 0;
}