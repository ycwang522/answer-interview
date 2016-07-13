//#include <iostream>
//#include <fstream>  //流操作
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
//double dj(double x1, double y1, double z1, double x2, double y2, double z2)    //坐标的点积
//{
//	double ans1;
//	ans1 = x1*x2 + y1*y2 + z1*z2;
//	return ans1;
//}
//
//void cj(double x1, double y1, double z1, double x2, double y2, double z2, double data[3])  //坐标的叉乘  对应于i j k
//{
//	data[0] = y1*z2 - z1*y2; //对应的叉积i的系数
//	data[1] = z1*x2 - x1*z2;//对应的叉积j的系数
//	data[2] = x1*y2 - y1*x2;//对应的叉积k的系数
//}
//
//int nn;
//double x[n], y[n], z[n];	//将其定义成全局变量是为了防止栈溢出
//
//
//int mm;
//int dian1[m], dian2[m], dian3[m];
//double qxx[m][3], qxy[m][3], qxz[m][3];	//三角面元的边的位置矢量;
//double bianchang[m][3];	//三角面元边长;
//double zdx[m][3], zdy[m][3], zdz[m][3];	//面元边的中点;
//double mianji[m];
//double fx[m], fy[m], fz[m];	//三角面元的法向量;
//double xz[m], yz[m], zz[m];	//三角形的重心位置，在程序中是局部坐标系的原点在全局坐标系中的矢量;
//int main()
//{
//	//读取点坐标信息
//	/*int nn;
//	double x[n], y[n], z[n];*/
//	ifstream infile;  //ifstream函数表示从硬盘读取数据到内存中
//	
//	infile.open("dian.txt");//该文件标注了立方体的八个顶点以及六个面的中心点
//	std::cout << "进行数据处理:读入点信息" << std::endl;
//	for (int i = 0; i<n; i++)
//	{
//		infile >> nn >> x[i] >> y[i] >> z[i];//输入点坐标信息
//	}
//	infile.close();
//
//	//读取面元坐标信息
//	/*int mm;
//	int dian1[m], dian2[m], dian3[m];
//	double qxx[m][3], qxy[m][3], qxz[m][3];
//	double bianchang[m][3], mianji[m];
//	double zdx[m][3], zdy[m][3], zdz[m][3];
//	double fx[m], fy[m], fz[m];
//	double xz[m], yz[m], zz[m];*/
//	ifstream infile1;
//	infile1.open("mian.txt");   //将立方体剖分，每个面按对角线分割平均分四份
//	std::cout << "进行数据处理:读入面元信息" << std::endl;
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
//		qxz[i][2] = z[dian1[i]] - z[dian3[i]];                    //计算边长矢量。
//
//		bianchang[i][0] = sqrt(qxx[i][0] * qxx[i][0] + qxy[i][0] * qxy[i][0] + qxz[i][0] * qxz[i][0]);
//		bianchang[i][1] = sqrt(qxx[i][1] * qxx[i][1] + qxy[i][1] * qxy[i][1] + qxz[i][1] * qxz[i][1]);
//		bianchang[i][2] = sqrt(qxx[i][2] * qxx[i][2] + qxy[i][2] * qxy[i][2] + qxz[i][2] * qxz[i][2]);            //计算三角面元的三条边长。
//
//		zdx[i][0] = (x[dian2[i]] + x[dian1[i]]) / 2;
//		zdy[i][0] = (y[dian2[i]] + y[dian1[i]]) / 2;
//		zdz[i][0] = (z[dian2[i]] + z[dian1[i]]) / 2;
//		zdx[i][1] = (x[dian3[i]] + x[dian2[i]]) / 2;
//		zdy[i][1] = (y[dian3[i]] + y[dian2[i]]) / 2;
//		zdz[i][1] = (z[dian3[i]] + z[dian2[i]]) / 2;
//		zdx[i][2] = (x[dian1[i]] + x[dian3[i]]) / 2;
//		zdy[i][2] = (y[dian1[i]] + y[dian3[i]]) / 2;
//		zdz[i][2] = (z[dian1[i]] + z[dian3[i]]) / 2;             //计算面元边长中点坐标。
//
//		double temp = (bianchang[i][0] + bianchang[i][1] + bianchang[i][2]) / 2;        //temp是周长的一半
//		mianji[i] = sqrt(temp*(temp - bianchang[i][0])*(temp - bianchang[i][0])*(temp - bianchang[i][2]));
//		//利用海伦公式计算三角面元的面积。
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
//		double temp9 = temp1*temp5 - temp2*temp4;   //(temp7,temp8,temp9)是前两个向量(temp1,temp2,temp3)和(temp1,temp2,temp3)的叉积
//		double mo = sqrt(temp7*temp7 + temp8*temp8 + temp9*temp9);	            //计算面元的法向量。
//		fx[i] = temp7 / mo;
//		fy[i] = temp8 / mo;
//		fz[i] = temp9 / mo;//向量的归一化，使其成为单位向量(fx[i],fy[i],fz[i])即为其单位法向量
//
//		xz[i] = (x[dian1[i]] + x[dian2[i]] + x[dian3[i]]) / 3;
//		yz[i] = (y[dian1[i]] + y[dian2[i]] + y[dian3[i]]) / 3;
//		zz[i] = (z[dian1[i]] + z[dian2[i]] + z[dian3[i]]) / 3;                             //计算面元中心坐标。
//	}
//	infile1.close();
//
//	ofstream out;
//	out.open("rcs.dat");
//	for (int i = 0; i <= 360; i++)     //入射角度的变化范围为-180到180.
//	{
//		if (i == 80)
//		{
//			cout << "循环即将结束" << endl;
//		}
//		
//		cout << "角度循环中：" << i << endl;
//		double sitai = i*pi / 180.0;        //将入射角度化为弧度值。
//		double sitas = sitai;
//
//		double ki[3], ks[3];                        //入射方向和散射方向
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
//			w[k] = ki[k] - ks[k];   //？
//		}
//		double mw = sqrt(w[0] * w[0] + w[1] * w[1] + w[2] * w[2]);//w的模
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
//				sign = sign - jj*k0*mianji[j] * ans*polar(1.0, phase) / sqrt(pi);    //polar(x,y),x，y分别为幅度和角度
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
