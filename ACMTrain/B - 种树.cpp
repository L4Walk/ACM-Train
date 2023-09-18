// B - ÖÖÊ÷

/*
# include <iostream>
# include <algorithm>
using namespace std;

struct Tree {
	int begin;
	int end;
	int num;
}tree[100010];

bool use[100010];

bool MyCmp(Tree a, Tree b)
{
	return a.end < b.end;
}

int main()
{
	int n;
	int h;
	int b, e, t;
	int i, j;
	int num;

	while (scanf("%d", &n) != EOF)
	{
		scanf("%d", &h);
		num = 0;
		for (i = 0; i < h; i++)
			scanf("%d%d%d", &tree[i].begin, &tree[i].end, &tree[i].num);

		sort(tree, tree + n, MyCmp);

		for (int i = 0; i < h; i++)
		{
			int k = 0;
			for (int j = tree[i].begin; j <= tree[i].end; j++)
				if (use[j])
					k++;

			if (k >= tree[i].num)
				continue;

			for (int j = tree[i].end; j >= tree[i].begin; j--)
			{
				if (!use[j]) {
					use[j] = true;
					k++;
					num++;
					if (k == tree[i].num)
						break;
				}
			}
		}

		printf("%d\n", num);

	}

	return 0;
}
*/