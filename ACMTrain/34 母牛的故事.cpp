//// 34: Ä¸Å£µÄ¹ÊÊÂ
//
//
//# include <stdio.h>
//# include <vector>
//# include <iostream>
//using namespace std;
//
//# define MAX 20000
//
//vector<long long>ccc;
//
//long long cow(long long n);
//
//int main()
//{
//	long long n;
//	freopen("test34.out", "w", stdout);
//	/*
//
//	for (long long i = 1; i < 1000; i++)
//	{
//		printf("%3lld:%lld\n", i, cow(i));
//	}
//	*/
//	
//	long long c[MAX] = { 0 };
//	long long dic[MAX] = { 0 };
//	c[1] = 1;
//	c[2] = 2;
//	c[3] = 3;
//	c[4] = 4;
//	
//
//	/*
//	ccc.push_back(1);
//	ccc.push_back(2);
//	ccc.push_back(3);
//	ccc.push_back(4);
//	
//	for (long long i = 4; i <= 2000000000; i++)
//	{
//		ccc.push_back(ccc[i - 1] + ccc[i - 3]);
//	}
//	
//	long long cnt = 1;
//	for (auto i = ccc.begin(); i != ccc.end(); i++)
//	{
//		printf("%d ", cnt);
//		cout << *i << endl;
//		cnt++;
//	}
//	*/
//	
//	for (long long i = 5; i < MAX; i++)
//	{
//		c[i] = (c[i - 1] + c[i - 3]) % 10000;
//		printf("%lld\n", c[i]);
//		//printf("%lld: %lld\n", i, c[i] );
//		//dic[c[i]]++;
//	}
//
//	/*
//	for (long long i = 0; i < 100000; i++)
//	{
//		printf("%lld:%lld\n", i + 1, dic[i]);
//	}
//	*/
//	return 0;
//}
//
///*
//long long cow(long long n)
//{
//	if (n < 4)
//		return n;
//	else
//		return( cow(n - 1) + cow(n - 3))%100000;
//}
//*/
