// P1223 ее╤с╫ск╝

/*
# include <stdio.h>
# include <cctype>
# include <iostream>
# include <string>
# include <algorithm>
using namespace std;

# define N 1001

typedef struct People {
	long time;
	int mark;
}p;

p people[1001] ;

bool Cmp_1(const p& a, const p& b)
{
	return a.time < b.time;
}

int main()
{
	int n;
	int i;

	while (scanf("%d", &n) != EOF)
	{
		long wait[N] = { 0 };
		long time = 0;
		for (i = 0; i < n; i++)
		{
			scanf("%ld", &people[i].time);
			people[i].mark = i + 1;
		}

		sort(people, people + n,Cmp_1);

		wait[0] = people[0].time;
		for (i = 1; i < n; i++)
		{
			wait[i] += wait[i - 1] + people[i].time;
			//time += time + people[i].time;
		}

		for (i = 1; i < n; i++)
			time += wait[i];
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("%d", people[i].mark);
			else
				printf(" %d", people[i].mark);
		}
		printf("\n%.2lf\n", 1.0*time / n);
	}

	return 0;
}
*/

