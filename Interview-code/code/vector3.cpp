#include <iostream>
//#include <qmath.h>
#include "vector3.h"

//Ĭ�Ϲ��캯��,��ʼһ��������
Vector3::Vector3(){
	x = 0;
	y = 0;
	z = 0;
}
//���ƹ��캯��
Vector3::Vector3(const Vector3 &a){
	x = a.x;
	y = a.y;
	z = a.z;
}
//�������Ĺ��캯����������ֵ��ɳ�ʼ��
Vector3::Vector3(float nx, float ny, float nz){
	x = nx;
	y = ny;
	z = nz;
}
//��������
Vector3::~Vector3(){};

//��׼�������
//���ظ�ֵ����������������ã���ʵ����ֵ��
Vector3& Vector3::operator=(const Vector3 &a){
	x = a.x;
	y = a.y;
	z = a.z;
	return *this;
}

//����"=="������
bool Vector3::operator==(const Vector3 &a) const{
	return x == a.x && y == a.y && z == a.z;
}

//����"!="������
bool Vector3::operator!=(const Vector3 &a) const{
	return x != a.x || y != a.y || z != a.z;
}

//��Ϊ������
void Vector3::Zero(){
	x = y = z = 0.0f;
}
//����һԪ"-"�����
Vector3 Vector3::operator-()const
{
	return Vector3(-x, -y, -z);
}

//���ض�Ԫ"+"��"-"�����
Vector3 Vector3::operator+(const Vector3 &a) const{

	return Vector3(x + a.x, y + a.y, z + a.z);
}
Vector3 Vector3::operator-(const Vector3 &a) const{
	return Vector3(x - a.x, y - a.y, z - a.z);
}

//�����ĳˡ�����
Vector3 Vector3::operator*(float a) const
{
	return Vector3(x*a, y*a, z*a);
}
Vector3 Vector3::operator/(float a) const{
	float oneOverA = 1.0f / a;//ע�����ﲻ��"����"���д���
	return Vector3(x*oneOverA, y*oneOverA, z*oneOverA);
}

//�����Է������
Vector3& Vector3::operator +=(const Vector3 &a){

	x += a.x;
	y += a.y;
	z += a.z;
	return *this;
}

Vector3& Vector3::operator -=(const Vector3 &a){
	x -= a.x;
	y -= a.y;
	z -= a.z;
	return *this;
}
Vector3& Vector3::operator *=(float a){
	x *= a;
	y *= a;
	z *= a;
	return *this;
}
Vector3& Vector3::operator /=(float a){
	float oneOverA = 1.0f / a;
	x *= oneOverA;
	y *= oneOverA;
	z *= oneOverA;
	return *this;
}

//������׼��
void Vector3::Normalize(){
	float magSq = x*x + y*y + z*z;
	if (magSq >0.0f){//������
		float oneOverMag = 1.0f / sqrt(magSq);
		x *= oneOverMag;
		y *= oneOverMag;
		z *= oneOverMag;
	}
}

//������ˣ����ر�׼�ĳ˷������
float Vector3::operator *(const Vector3 &a) const{
	return x*a.x + y*a.y + z *a.z;
}
void Vector3::PrintVector3(){
	std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;

}
//������ģ
float Vector3::VectorMag(const Vector3 &a){
	return sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
}

/*
Cross Product��˹�ʽ
aXb = | i   j   k  |
| a.x a.y a.z|
| b.x b.y b.z| = (a.y*b.z -a.z*b.y)i + (a.z*b.x - a.x*b.z)j + (a.x+b.y - a.y*b.x)k
*/

//�����������Ĳ��
Vector3 Vector3::CrossProduct(const Vector3 &a, const Vector3 &b){
	return Vector3(
		a.y * b.z - a.z * b.y,
		a.z * b.x - a.x * b.z,
		a.x * b.y - a.y * b.x
		);
}

//���������ľ���
float Vector3::Distance(const Vector3 &a, const Vector3 &b){

	float dx = a.x - b.x;
	float dy = a.y - b.y;
	float dz = a.z - b.z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}
