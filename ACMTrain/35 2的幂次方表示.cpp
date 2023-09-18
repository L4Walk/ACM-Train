// 35: 2���ݴη���ʾ

/*
# include <stdio.h>

void Decompose(int n);

int main()
{
	int n;
	
	for (int i = 1; i < 20000; i++)
	{
		Decompose(i);
		printf("\n");
	}

	
	while (scanf("%d", &n) != EOF)
	{
		Decompose(n);
		printf("\n");
	}
	
	return 0;
}

void Decompose(int n)
{
	//	 ���nΪ1��2ֱ�����
	if (n == 1)
	{
		printf("2(0)");
		return;
	}
	else if (n == 2)
	{
		printf("2");
		return;
	}
	else
	{
		int j = 1, i = 0;	//	jÿ�γ�2���������n�ͽ����ֽ�

		do
		{
			j = 2 * j;
			if (j > n)
			{
				j /= 2;	//	�˻طֽ�ǰ

				if (i == 1)	//	ȷ���Ƿ����2()
					printf("2");
				else
				{
					printf("2(");
					Decompose(i);
					printf(")");
				}

				// �ж��Ƿ�����ֽ�
				if (n - j != 0)
				{
					printf("+");
					Decompose(n - j);
				}
				return;
			}
			else
				i++;
		} while (1);
	}
}
*/
/*

# include <stdio.h>
# include <math.h>
# include <iostream>
# include <vector>
# include <map>
# include <string>
using namespace std;
map<int, string>index;
vector<int>temp;
vector<int>::iterator iter;
int main()
{
	int n;
	int i;
	int list[] = { 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384 };

	index[0] = "2(0)";
	index[1] = "2";
	index[2] = "2(2)";
	index[3] = "2(2+2(0))";
	index[4] = "2(2(2))";
	index[5] = "2(2(2)+2(0))";
	index[6] = "2(2(2)+2)";
	index[7] = "2(2(2)+2+2(0))";
	index[8] = "2(2(2+2(0)))";
	index[9] = " 2(2(2+2(0))+2(0)";
	index[10] = "2(2(2+2(0))+2)";
	index[11] = "2(2(2+2(0))+2+2(0))";
	index[12] = "2(2(2+2(0))+2(2))";
	index[13] = "2(2(2+2(0))+2(2)+2(0))";
	index[14] = "2(2(2+2(0))+2(2)+2)";

	while (scanf("%d", &n) != EOF)
	{
		temp.clear();

		while (n != 0)
		{
			for (i = 0;  list[i] <= n; i++);
			temp.push_back(i - 1);
			n -= list[i - 1];
		}
		
		for ( iter = temp.begin(); iter != temp.end(); iter++)
		{
			if (iter == temp.begin())
				cout << index[*iter];
			else
				cout << '+' << index[*iter];
		}

		printf("\n");
	}
	
	return 0;
}
*/

