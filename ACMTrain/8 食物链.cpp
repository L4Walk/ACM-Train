// 8: Ê³ÎïÁ´

/*
# include <iostream>
using namespace std;

const int N = 5e4 + 10;
int father[N], value[N];
int n;

void init(int num){
	for (int i = 1; i <= num; i++) {
		father[i] = i;
		value[i] = 0;
	}
}

int Find(int v) {
	if (father[v] == v)
		return v;
	else
		return father[v] = Find(father[v]);
}

bool isMerge(int u, int v) {
	return Find(u) == Find(v);
}

void Merge(int u, int v) {
	int t1 = Find(u);
	int t2 = Find(v);

	if (value[t1] < value[t2])
		father[t1] = t2;
	else {
		father[t2] = t1;
		if (value[t1] == value[t2])
			value[t1]++;
	}
}

int main()
{
	int r;
	int sum = 0;
	int a, b, c;

	scanf("%d%d", &n, &r);
	init(3 * n);

	for (int i = 0; i < r; i++) {
		scanf("%d%d%d", &a, &b, &c);

		if (b<1 || c<1 || b>n || c>n) {
			sum++;
			continue;
		}

		if (a == 1) {
			if (isMerge(b, c + n) || isMerge(b, c + 2 * n))
				sum++;
			else {
				Merge(b, c);
				Merge(b + n, c + n);
				Merge(b + 2 * n, c + 2 * n);
			}
		}
		else{
			if (isMerge(b, c) || isMerge(b, c + 2 * n))
				sum++;
			else {
				Merge(b, c + n);
				Merge(b + n, c + 2 * n);
				Merge(b + 2 * n, c);
			}
		}
	}

	printf("%d\n", sum);

	return 0;
}
*/