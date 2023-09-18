// 2842: a simple calculater_L1

/*
# include <stdio.h>
# include <string.h>
# include <math.h>
# include <iostream>
# include <string>
using namespace std;

int add(double a, double b);
int subtract(double a, double b);
int asubtractdd(double a, double b);
int divide(double a, double b);
int myfind(string s);

int main()
{
	string s;
	int pos;
	
	double a, b;

	while (cin >> s)
	{
		pos = myfind(s);
		a = stod(s.substr(0, pos));
		b = stod(s.substr(pos + 1, s.size()));

		if (s.find("+") != s.npos)
			printf("%.2lf", a + b);
		else if (s.find("-") != s.npos)
			printf("%.2lf", a - b);
		else if (s.find("*") != s.npos)
			printf("%.2lf", a * b);
		else
		{
			if (b == 0.00)
				printf("divisor is 0");
			else
				printf("%.2lf", a / b);
		}
	
		printf("\n");
	}


	return 0;
}

int add(double a, double b)
{
	double res;
	return  res = a + b;
}


int subtract(double a, double b)
{
	double res;
	return  res = a - b;
}

int asubtractdd(double a, double b)
{
	double res;
	return  res = a * b;
}

int divide(double a, double b)
{
	double res;
	return res = a / b;
}

int myfind(string s)
{
	int pos;

	pos = s.find("+");

	if(pos == s.npos)
		pos = s.find("-");

	if (pos == s.npos)
		pos = s.find("*");

	if (pos == s.npos)
		pos = s.find("/");

	return pos;
}

*/