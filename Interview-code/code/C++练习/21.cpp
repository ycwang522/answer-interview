//#include <iostream>
//#include <fstream>  //������
//#include <math.h>
//#include <complex>
//
//using namespace std;
//
//const int m = 659;
//const int n = 320;
//const double c = 3.0e+8;
//const double f = 3.0e+9;
//const double pi = 3.1415926;
//const double k0 = 2.0*pi*f / c;
//const double faii = 0.0;
//const double fais = pi;
//const complex<double> jj = complex<double>(0.0, 1.0);
//
//double dj(double x1, double y1, double z1, double x2, double y2, double z2)    //����ĵ��
//{
//	double ans1;
//	ans1 = x1*x2 + y1*y2 + z1*z2;
//	return ans1;
//}
//
//void cj(double x1, double y1, double z1, double x2, double y2, double z2, double data[3])  //����Ĳ��  ��Ӧ��i j k
//{
//	data[0] = y1*z2 - z1*y2; //��Ӧ�Ĳ��i��ϵ��
//	data[1] = z1*x2 - x1*z2;//��Ӧ�Ĳ��j��ϵ��
//	data[2] = x1*y2 - y1*x2;//��Ӧ�Ĳ��k��ϵ��
//}
//
//int nn;
//double x[n], y[n], z[n];	//���䶨���ȫ�ֱ�����Ϊ�˷�ֹջ���
//
//
//int mm;
//int dian1[m], dian2[m], dian3[m];
//double qxx[m][3], qxy[m][3], qxz[m][3];	//������Ԫ�ıߵ�λ��ʸ��;
//double bianchang[m][3];	//������Ԫ�߳�;
//double zdx[m][3], zdy[m][3], zdz[m][3];	//��Ԫ�ߵ��е�;
//double mianji[m];
//double fx[m], fy[m], fz[m];	//������Ԫ�ķ�����;
//double xz[m], yz[m], zz[m];	//�����ε�����λ�ã��ڳ������Ǿֲ�����ϵ��ԭ����ȫ������ϵ�е�ʸ��;
//int main()
//{
//	//��ȡ��������Ϣ
//	/*int nn;
//	double x[n], y[n], z[n];*/
//	ifstream infile;  //ifstream������ʾ��Ӳ�̶�ȡ���ݵ��ڴ���
//	
//	infile.open("dian.txt");//���ļ���ע��������İ˸������Լ�����������ĵ�
//	std::cout << "�������ݴ���:�������Ϣ" << std::endl;
//	for (int i = 0; i<n; i++)
//	{
//		infile >> nn >> x[i] >> y[i] >> z[i];//�����������Ϣ
//	}
//	infile.close();
//
//	//��ȡ��Ԫ������Ϣ
//	/*int mm;
//	int dian1[m], dian2[m], dian3[m];
//	double qxx[m][3], qxy[m][3], qxz[m][3];
//	double bianchang[m][3], mianji[m];
//	double zdx[m][3], zdy[m][3], zdz[m][3];
//	double fx[m], fy[m], fz[m];
//	double xz[m], yz[m], zz[m];*/
//	ifstream infile1;
//	infile1.open("mian.txt");   //���������ʷ֣�ÿ���水�Խ��߷ָ�ƽ�����ķ�
//	std::cout << "�������ݴ���:������Ԫ��Ϣ" << std::endl;
//	for (int i = 0; i<m; i++)
//	{
//		
//		infile1 >> mm >> dian1[i] >> dian2[i] >> dian3[i];
//
//
//
//		qxx[i][0] = x[dian2[i]] - x[dian1[i]];
//		qxy[i][0] = y[dian2[i]] - y[dian1[i]];
//		qxz[i][0] = z[dian2[i]] - z[dian1[i]];
//		qxx[i][1] = x[dian3[i]] - x[dian2[i]];
//		qxy[i][1] = y[dian3[i]] - y[dian2[i]];
//		qxz[i][1] = z[dian3[i]] - z[dian2[i]];
//		qxx[i][2] = x[dian1[i]] - x[dian3[i]];
//		qxy[i][2] = y[dian1[i]] - y[dian3[i]];
//		qxz[i][2] = z[dian1[i]] - z[dian3[i]];                    //����߳�ʸ����
//
//		bianchang[i][0] = sqrt(qxx[i][0] * qxx[i][0] + qxy[i][0] * qxy[i][0] + qxz[i][0] * qxz[i][0]);
//		bianchang[i][1] = sqrt(qxx[i][1] * qxx[i][1] + qxy[i][1] * qxy[i][1] + qxz[i][1] * qxz[i][1]);
//		bianchang[i][2] = sqrt(qxx[i][2] * qxx[i][2] + qxy[i][2] * qxy[i][2] + qxz[i][2] * qxz[i][2]);            //����������Ԫ�������߳���
//
//		zdx[i][0] = (x[dian2[i]] + x[dian1[i]]) / 2;
//		zdy[i][0] = (y[dian2[i]] + y[dian1[i]]) / 2;
//		zdz[i][0] = (z[dian2[i]] + z[dian1[i]]) / 2;
//		zdx[i][1] = (x[dian3[i]] + x[dian2[i]]) / 2;
//		zdy[i][1] = (y[dian3[i]] + y[dian2[i]]) / 2;
//		zdz[i][1] = (z[dian3[i]] + z[dian2[i]]) / 2;
//		zdx[i][2] = (x[dian1[i]] + x[dian3[i]]) / 2;
//		zdy[i][2] = (y[dian1[i]] + y[dian3[i]]) / 2;
//		zdz[i][2] = (z[dian1[i]] + z[dian3[i]]) / 2;             //������Ԫ�߳��е����ꡣ
//
//		double temp = (bianchang[i][0] + bianchang[i][1] + bianchang[i][2]) / 2;        //temp���ܳ���һ��
//		mianji[i] = sqrt(temp*(temp - bianchang[i][0])*(temp - bianchang[i][0])*(temp - bianchang[i][2]));
//		//���ú��׹�ʽ����������Ԫ�������
//
//
//		double temp1 = x[dian3[i]] - x[dian2[i]];
//		double temp2 = y[dian3[i]] - y[dian2[i]];
//		double temp3 = z[dian3[i]] - z[dian2[i]];
//		double temp4 = x[dian1[i]] - x[dian2[i]];
//		double temp5 = y[dian1[i]] - y[dian2[i]];
//		double temp6 = z[dian1[i]] - z[dian2[i]];
//		double temp7 = temp2*temp6 - temp3*temp5;
//		double temp8 = temp3*temp4 - temp1*temp6;
//		double temp9 = temp1*temp5 - temp2*temp4;   //(temp7,temp8,temp9)��ǰ��������(temp1,temp2,temp3)��(temp1,temp2,temp3)�Ĳ��
//		double mo = sqrt(temp7*temp7 + temp8*temp8 + temp9*temp9);	            //������Ԫ�ķ�������
//		fx[i] = temp7 / mo;
//		fy[i] = temp8 / mo;
//		fz[i] = temp9 / mo;//�����Ĺ�һ����ʹ���Ϊ��λ����(fx[i],fy[i],fz[i])��Ϊ�䵥λ������
//
//		xz[i] = (x[dian1[i]] + x[dian2[i]] + x[dian3[i]]) / 3;
//		yz[i] = (y[dian1[i]] + y[dian2[i]] + y[dian3[i]]) / 3;
//		zz[i] = (z[dian1[i]] + z[dian2[i]] + z[dian3[i]]) / 3;                             //������Ԫ�������ꡣ
//	}
//	infile1.close();
//
//	ofstream out;
//	out.open("rcs.dat");
//	for (int i = 0; i <= 360; i++)     //����Ƕȵı仯��ΧΪ-180��180.
//	{
//		if (i == 80)
//		{
//			cout << "ѭ����������" << endl;
//		}
//		
//		cout << "�Ƕ�ѭ���У�" << i << endl;
//		double sitai = i*pi / 180.0;        //������ǶȻ�Ϊ����ֵ��
//		double sitas = sitai;
//
//		double ki[3], ks[3];                        //���䷽���ɢ�䷽��
//		ki[0] = sin(sitai)*cos(faii);
//		ki[1] = sin(sitai)*sin(faii);
//		ki[2] = -cos(sitai);
//
//		ks[0] = sin(sitas)*cos(fais);
//		ks[1] = sin(sitas)*sin(fais);
//		ks[2] = cos(sitas);
//
//		double w[3];
//
//		for (int k = 0; k<3; k++)//w
//		{
//			w[k] = ki[k] - ks[k];   //��
//		}
//		double mw = sqrt(w[0] * w[0] + w[1] * w[1] + w[2] * w[2]);//w��ģ
//		complex<double> sign = complex<double>(0.0, 0.0);;
//
//		int count = 1;
//		for (int j = 0; j<m; j++)
//		{
//			double ans = dj(ki[0], ki[1], ki[2], fx[j], fy[j], fz[j]);
//
//			if (ans >= 0.0)
//			{
//				continue;
//			}
//			double phase = k0*dj(w[0], w[1], w[2], xz[j], yz[j], zz[j]);
//			complex<double> sign1;
//			complex<double> sign2 = complex<double>(0.0, 0.0);
//			double t = mw*sin(acos(dj(w[0], w[1], w[2], fx[j], fy[j], fz[j]) / mw));
//
//			if (abs(t)<1.0e-10)
//			{
//				sign = sign - jj*k0*mianji[j] * ans*polar(1.0, phase) / sqrt(pi);    //polar(x,y),x��y�ֱ�Ϊ���ȺͽǶ�
//			}
//			else
//			{
//				sign1 = -ans*polar(1.0, phase) / (sqrt(pi)*t);
//
//				double p[3];
//				cj(fx[j], fy[j], fz[j], w[0], w[1], w[2], p);
//				double mp = sqrt(p[0] * p[0] + p[1] * p[1] + p[2] * p[2]);
//				for (int k = 0; k<3; k++)
//				{
//					p[k] = p[k] / mp;
//				}
//				for (int k = 0; k<3; k++)
//				{
//					double ans1 = dj(p[0], p[1], p[2], qxx[j][k], qxy[j][k], qxz[j][k]);
//					double ans2 = dj(zdx[j][k], zdy[j][k], zdz[j][k], w[0], w[1], w[2]);
//					double ans3 = dj(qxx[j][k], qxy[j][k], qxz[j][k], w[0], w[1], w[2]);
//					if (abs(ans3)<1.0e-6)
//					{
//						ans3 = 1.0;
//					}
//					else
//					{
//						ans3 = sin(0.5*k0*ans3) / (0.5*k0*ans3);
//					}
//					sign2 = sign2 + ans1*polar(1.0, k0*ans2)*ans3;
//				}
//				sign = sign + sign1*sign2;
//				
//			}
//		
//			
//		}
//		double rcs = abs(sign)*abs(sign);
//		out << i << " " << 10.0*log10(rcs) << endl;
//	
//	}
//	out.close();
//	return 0;
//}
