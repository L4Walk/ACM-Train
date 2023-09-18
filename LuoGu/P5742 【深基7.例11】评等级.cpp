// P5742 【深基7.例11】评等级

/*
# include <stdio.h>

struct student
{
	int num;
	int study_score;
	int quality_score;
	int sum_score;
	double gpa;
}stu;

int main()
{
	int n;

	scanf("%d", &n);

	while (n > 0)
	{
		scanf("%d%d%d", &stu.num, &stu.study_score, &stu.quality_score);

		stu.sum_score = stu.study_score + stu.quality_score;
		stu.gpa = stu.study_score * 0.7 + stu.quality_score * 0.3;

		if (stu.sum_score > 140 && stu.gpa >= 80)
			printf("Excellent\n");
		else
			printf("Not excellent\n");

		n--;
	}

	return 0;
}
*/