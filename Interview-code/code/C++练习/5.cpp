//类模版
#include<vector>
#include<iostream>
#include<array>
#include<string>
#include<cstring>

/*
struct myfish
{
	std::string pinzhong;
	int weight;
	double length;
};
*/
using namespace std;
struct CandyBar
{
	string name;
	double weight;
	int kalori;
};

int main5()
{
	//std::array<float, 10>ideas = { 1.2, 2.3, 5.6, 8.3, 3, 6, 7, 8, 9, 0 };
	//std::cout << ideas[1] << std::endl;

	//std::string one("cheeseburger");
	//std::cout << one << std::endl;

	//myfish fish;
	//fish.length = 10.0;
	//fish.pinzhong = "xiayu";
	//fish.weight = 120;

	//std::cout <<"鱼的长度为："<< fish.length<<"米"<< std::endl;
	//std::cout << "鱼的重量为:" << fish.weight << "公斤" << std::endl;
	//std::cout << "鱼的品种为" << fish.pinzhong << std::endl;
	//
	///*
	//double ted;
	//double *p = &ted;
	//std::cout << "请输入ted的值：";
	//std::cin >> ted;
	//std::cout << *p<<std::endl;
	//*/

	//float treacle[10]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	//float *p1 = treacle;
	//std::cout << *p1 << std::endl;
	//std::cout << *(p1 + 9);

	//std::cout << "请输入一个数字：" ;
	//int n;
	//std::cin >> n;
	//std::vector<int> ivec(n);
	//for (int i = 0; i < n; i++)
	//{
	//	ivec[i] = i;
	//	std::cout << ivec[i] << std::endl;
	//}
	////使用new动态建立数组
	//std::cout << "再输入一个整数值：";
	//int m;
	//std::cin >> m;
	//int *pnew = new int [m];
	//for (int i = 0; i < m; i++)
	//{
	//	*pnew = i + 1;
	//	std::cout << *pnew << std::endl;
	//}

	/*
	using namespace std;
	const int arsize = 20;
	string name;
	string dessert;

	cout << "Enter your name:\n";
	cin >> name;
	cin.getline(name, arsize);
	cout << "Enter your favorive dessert:" << endl;
	cin.getline(dessert, arsize);
	cout << "I have some delicious " << dessert;
	cout << " for you " << name << "." << endl;
	*/

	/*
	using namespace std;
	char firstname[10];
	char lastname[10];

	cout << "请输入姓：";
	
	cin.getline(firstname, 10);

	cout << "请输入名：";
	cin.getline(lastname, 10);
	cout << firstname << "," << lastname;
	*/
	
	/*
	CandyBar snack;
	snack.name = "Mocha Munch";
	snack.weight = 2.3;
	snack.kalori = 350;

	cout << snack.name << std::endl;
	cout << snack.weight << std::endl;
	cout << snack.kalori << std::endl;

	char ch;
	int count = 0;
	cout << "Please a sentence,the program will quit while enter #" << endl;
	cin.get(ch);
	while (ch!='#')
	{
		cout << ch ;
		count++;
		cin.get(ch);
	}
	
	cout << endl<<count << endl;
	*/

	//using namespace std;
	//int const Arsize = 80;
	//char line[Arsize];
	//cin.getline(line, 20);
	//for (int i = 0; line[i] != '\0'; i++)
	//{
	//	cout << line[i];
	//	if (line[i] == '.')
	//		break;


	//}

	/*
	using namespace std;
	int j;
	for (j = 0; j < 11; j += 3)
	
		cout << j;

	cout << endl << j << endl;
	*/
	


	return 0;
}