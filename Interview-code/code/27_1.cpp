#include<vector>
#include<iostream>
#include<string>

using namespace std;

void display_message(const string &str1,vector<int>&vec_int)
{
	cout << str1;
	for (int i = 0; i < vec_int.size(); i++)
	{
		cout << "vec_int[i]" << vec_int[i] << std::endl;
	}
}

//��������
void display_message(const string &str1, vector<double>&vec_double)
{
	cout << str1;
	for (int i = 0; i < vec_double.size(); i++)
	{
		cout << "vec_int[i]" << vec_double[i] << std::endl;
	}
}

//ģ��ʹ��
template<typename elemType>
void display_message(const string &str1, vector<elemType> &vec_template)
{
	cout << str1;
	for (int ix = 0; ix < vec_template.size(); ix++)
	{
		elemType T = vec_template[ix];
		cout << T << std::endl;


	}
}
const vector<int>*fibona_seq(int size)
{
	static vector<int>elem;//�ֲ���̬������ÿ�α�����ʱ������ֲ��Ǿ�̬���������ƻ������½���
	const int max = 1025;

	if (size <= 0 || size > max)
	{
		cout << "Error input.\n";
		return 0;
	}

	//��������size�ȵ�ǰ��̬������Ԫ�صĸ���Ҫ�࣬˵����Ҫ��������ݲ������ڵ�ǰ�ľ�̬������
	//��Ҫ����������㣬��������õ��Ľ�����뾲̬�������С�
	for (int ix = elem.size(); ix < size; ix++)
	{
		if (ix == 0 || ix == 1)
		{
			elem.push_back(1);
		}
		else
		{
			elem.push_back(elem[ix - 1] + elem[ix - 2]);
		}

	}
	
	//������������ֵ����&&�ڵ�ǰ���ú��������sizeС�ڵ�ǰ��̬�����еĳ���
	//˵�����������ֵ�����ڵ�ǰ�ľ�̬�������У���ʱ����Ҫ�ټ��㣬ֱ�ӷ��ص�ǰ��̬�����ĵ�ַ���ɡ�
	return &elem;

	

	const string str1("You are my best friend!");
	display_message;
}