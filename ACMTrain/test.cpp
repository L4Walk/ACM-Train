/*
// stl����
# include <iostream>
# include <stdio.h>
# include <vector>
using namespace std;

int main()
{
	vector<double>a;
	
	// ��vector���Ԫ��
	a.push_back(1);
	a.push_back(2);

	// д��һ
	int n1;
	for (int i = 0; i < n1; i++)
	{
		int t;
		scanf("%d", &t);
		a.push_back(t);
	}

	// д����
	int n2 = 10;
	vector<int>b(n2);
	for (int i = 0; i < n2; i++)
	{
		scanf("%d", &b[i]);
	}
	b.push_back(0);

	return 0;
}
*/

// һ�μ򵥵Ĳ��Դ���
/*
#include <opencv2\opencv.hpp>
int main() {
	cv::Mat img = cv::imread("C:\Users\LJY_LU\Desktop\innovation.jpg"); //�ĳ����Լ���ͼƬ·��
	cv::imshow("test", img);
	cv::waitKey(0);
}
*/
