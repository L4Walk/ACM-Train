//A- 比比谁更大

/*
# include <stdio.h>
# include <math.h>
# include <string>
using namespace std;

int mod(string a, int b)//高精度a除以单精度b
{
	int d = 0;
	for (int i = 0; i < a.size(); i++) d = (d * 10 + (a[i] - '0')) % b;//求出余数
	return d;
}

string fac(int n)
{
	const int L = 100005;
	int a[L];
	string ans;
	if (n == 0) return "1";
	fill(a, a + L, 0);
	int s = 0, m = n;
	while (m) a[++s] = m % 10, m /= 10;
	for (int i = n - 1; i >= 2; i--)
	{
		int w = 0;
		for (int j = 1; j <= s; j++) a[j] = a[j] * i + w, w = a[j] / 10, a[j] = a[j] % 10;
		while (w) a[++s] = w % 10, w /= 10;
	}
	while (!a[s]) s--;
	while (s >= 1) ans += a[s--] + '0';
	return ans;
}

long long jiecheng(long n)
{
	long j;
	long res = 1;
	for (j = 2; j <= n; j++)
		res *= j;

	res %= 999068070;

	return res;
}


int main()
{
	long long a, b;

	while(scanf("%lld%lld",&a,&b)!= EOF)
	{
		long long  d1, d2;
		if (a > 12)
			 d1 = mod(fac(a), 999068070);
		else
			 d1 = jiecheng(a);
		

		if (b > 12)
			 d2 = mod(fac(b), 999068070);
		else
			  d2 = jiecheng(b);


		if(d1>d2)
			printf("a is the winner!\n");
		else if (d1<d2)
			printf("b is the winner!\n");
		else 
			printf("There is no winner!\n");
	}

	return 0;
}
*/
