// A - 圆桌问题

/*求解思路*/
/*通过模拟删除过程进行求解*/

/*
# include <stdio.h>
# include <iostream>
# include <vector>
using namespace std;

int main()
{
	int n, m;	// n代表好人||坏人的人数，总人数为2n，m表示步长；
	int i, j;
	int pos;

	while (scanf("%d%d", &n, &m) != EOF)
	{
		// 初始化seat
		vector<int>seat;
		seat.clear();

		for (i = 0; i < 2 * n; i++)
		{
			seat.push_back(i);
		}

		// 模拟杀人;
		pos = 0;

		for (i = 0; i < n; i++)
		{
			pos = (pos + m - 1) % seat.size();	// 获取下一次位置
			seat.erase(seat.begin() + pos);	// 删除
		}

		// 输出
		j = 0;
		for (i = 0; i < 2 * n; i++)
		{
			if (i % 50 == 0 && i != 0)
				printf("\n");

			if (j < seat.size() && i == seat[j])
			{
				printf("G");
				j++;
			}
			else
				printf("B");
		}
		printf("\n\n");
	}


	return 0;
}
*/