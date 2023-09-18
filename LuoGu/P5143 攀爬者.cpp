// P5143 ≈ ≈¿’ﬂ

/*
# include <stdio.h>
# include <math.h>
# include <iostream>
# include <algorithm>
using namespace std;

struct Point {
	int x;
	int y;
	int z;
}p[50000];

double Dic(int x1, int y1, int z1, int x2, int y2, int z2);
int Mycmp(Point a, Point b);

int main()
{
	int n;
	double dic = 0.0;
	while (scanf("%d", & n) != EOF)
	{
		dic = 0.0;
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d%d", &p[i].x, &p[i].y, &p[i].z);
		}

		sort(p, p + n, Mycmp);

		for (int i = 0; i < n - 1; i++)
		{
			dic += Dic(p[i].x, p[i].y, p[i].z, p[i + 1].x, p[i + 1].y, p[i + 1].z);
		}

		printf("%.3lf\n", dic);
	}

	return 0;
}

double Dic(int x1, int y1, int z1, int x2, int y2, int z2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2) + pow(z1 - z2, 2));
}

int Mycmp(Point a, Point b)
{
	return a.z > b.z;
}
*/