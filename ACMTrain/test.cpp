/*
// stl入门
# include <iostream>
# include <stdio.h>
# include <vector>
using namespace std;

int main()
{
	vector<double>a;
	
	// 往vector添加元素
	a.push_back(1);
	a.push_back(2);

	// 写法一
	int n1;
	for (int i = 0; i < n1; i++)
	{
		int t;
		scanf("%d", &t);
		a.push_back(t);
	}

	// 写法二
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

// 一段简单的测试代码
/*
#include <opencv2\opencv.hpp>
int main() {
	cv::Mat img = cv::imread("C:\Users\LJY_LU\Desktop\innovation.jpg"); //改成你自己的图片路径
	cv::imshow("test", img);
	cv::waitKey(0);
}
*/
