// 30: Packets

/*
# include <cstdio>
# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
	int a[7];
	int ans;
	int left1, left2;	//left2=2号箱子剩下的，left1=1号箱子剩下的

	while (scanf("%d%d%d%d%d%d", &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]) != EOF)
	{
		if (a[6] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0) 
			return 0;

		//先装6，5，4，3
		ans = a[6] + a[5] + a[4] + (a[3] + 3) / 4;

		left2 = a[4] * 5;
		//3号箱子可以装几个2号箱子
		if (a[3] % 4 == 1) 
			left2 += 5;

		if (a[3] % 4 == 2) 
			left2 += 3;

		if (a[3] % 4 == 3) 
			left2 += 1;

		if (left2 < a[2]) 
			ans += (a[2] - left2 + 8) / 9;

		left1 = ans * 36 - a[6] * 36 - a[5] * 25 - a[4] * 16 - a[3] * 9 - a[2] * 4;
		
		if (left1 < a[1])
			ans += (a[1] - left1 + 35) / 36;
		printf("%d\n", ans);
	}

	return 0;
}
*/