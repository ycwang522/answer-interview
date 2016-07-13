#ifndef VECTOR3_H
#define VECTOR3_H

class Vector3
{
public:
	float x, y, z;
	//���캯��
	//Ĭ�Ϲ��캯������ʼһ��������
	Vector3();
	//���ƹ��캯��
	Vector3(const Vector3 &a);
	//�������Ĺ��캯����������ֵ��ɳ�ʼ��
	Vector3(float nx, float ny, float nz);
	//��������
	~Vector3();

	//��׼�������
	//���ظ�ֵ����������������ã���ʵ����ֵ��
	Vector3& operator=(const Vector3 &a);

	//����"=="������
	bool operator==(const Vector3 &a) const;
	//����"!="������
	bool operator!=(const Vector3 &a) const;

	//��������

	//��Ϊ������
	void Zero();
	//����һԪ"-"�����
	Vector3 operator-()const;

	//���ض�Ԫ"+"��"-"�����
	Vector3 operator+(const Vector3 &a) const;
	Vector3 operator-(const Vector3 &a) const;
	//�����ĳˡ�����
	Vector3 operator*(float a) const;
	Vector3 operator/(float a) const;

	//�����Է������
	Vector3& operator+=(const Vector3 &a);
	Vector3& operator-=(const Vector3 &a);
	Vector3& operator*=(float a);
	Vector3& operator/=(float a);

	//������׼��
	void Normalize();

	//������ˣ����ر�׼�ĳ˷������
	float operator*(const Vector3 &a) const;

	//������ģ
	float VectorMag(const Vector3 &a);
	//�����������Ĳ��
	Vector3 CrossProduct(const Vector3 &a, const Vector3 &b);
	//���������ľ���
	float Distance(const Vector3 &a, const Vector3 &b);
	//��ӡ����
	void Vector3::PrintVector3();

};

#endif // VECTOR3_H


