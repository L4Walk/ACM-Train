// P1068 [NOIP2009 普及组] 分数线划定

/*
# include <stdio.h>
# include <algorithm>
using namespace std;

struct Interviewee {
	int name;
	int grade;
}inter[5000];

int Mycmp(Interviewee a, Interviewee b)
{
	if (a.grade == b.grade)
		return a.name < b.name;
	else 
		return a.grade > b.grade;

}

int main()
{
	int n, m;
	int line;
	int final_num, final_grade;
	int  i;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		for ( i = 0; i < n; i++)
		{
			scanf("%d%d", &inter[i].name, &inter[i].grade);
		}

		sort(inter, inter + n, Mycmp);

		line = m * 1.5;

		final_grade = inter[m].grade;

		while (inter[m].grade == final_grade)
		{
			m++;
		}
		final_num = m;

		printf("%d %d\n", final_grade, final_num);

		for (i = 0; i < final_num; i++)
		{
			printf("%d %d\n", inter[i].name, inter[i].grade);
		}


	}

	return 0;
}
*/