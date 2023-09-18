// P1093 [NOIP2007 普及组] 奖学金

/*
# include <stdio.h>
# include <iostream>
# include <algorithm>
using namespace std;

struct Stu
{
	int num;
	int Chinese;
	int Math;
	int English;
	int sum;
}stu[300];

bool cmp(const Stu x, const Stu y)
{
	if (x.sum > y.sum)
		return x.sum > y.sum;
	else if (x.sum == y.sum && x.Chinese > y.Chinese)
		return x.Chinese > y.Chinese;
	else if (x.sum == y.sum && x.Chinese == y.Chinese )
		return x.num < y.num;
	else
		return 0;
	
}

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		stu[i].num = i + 1;
		scanf("%d%d%d", &stu[i].Chinese, &stu[i].Math, &stu[i].English);
		stu[i].sum = stu[i].Chinese + stu[i].Math + stu[i].English;
	}

	sort(stu,stu+n,cmp);

	for (int i = 0; i < 5; i++)
	{
		printf("%d %d\n", stu[i].num, stu[i].sum);
	}

	return 0;
}
*/