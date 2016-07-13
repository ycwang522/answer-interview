//printf格式化输出
#include<iostream>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
/*	char c = getchar();
	putchar('1');
	putchar(c);
	putchar('\n');

	char ch = getchar();
	putchar('2');
	putchar(ch);
	putchar('\n');

	char ch1 = getchar();//getchar()每次只读入一个字符，包括回车等空白字符。
	putchar('3');
	putchar(ch1);
*/

	//char str1[100];
	//printf("输入一个字符串：");
 //	scanf_s("%c",&str1);
	//
	//printf("%c", str1);
	////std::cout << str1 << std::endl;

	double f1 = 123.456;
	double f2 = 12.34567;
	double f3 = 1.234567;
	double f4 = 1234.56;
	double f5 = 12345.6;
	double f6 = 123456;
	printf("%9.6f\n%8.5f\n%7.4f\n%6.3f\n%5.2f\n%4.1f\n", f1, f2, f3, f4, f5, f6);
	system("pause");

}