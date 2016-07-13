#include<iostream>
#include<string>

using namespace std;

template<class T>
T min(T a, T b)
{
	if (a < b)
		return a;
	else
	{
		return b;
	}
}

int main(int argc,char *argv[])
{
	char *a = "a";
	char *b = "b";
	char *c = "c";
	char *d = "d";
	cout << "min(a,b)=" << min(a, b) << endl;
	cout << "min(c,d)=" << min(c, d) << endl;
	return 0;

}