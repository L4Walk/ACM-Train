// P5740 【深基7.例9】最厉害的学生

/*
# include <stdio.h>

struct student
{
	char name[10];
	int Chinese;
	int Math;
	int English;
	int score;
};

int main()
{
	int n, max_score = 0, max_i = 0;

	

	struct student stu[1001];

	scanf("%d", &n);

	for(int  i= 0; i < n; i++)
	{
		scanf("%s%d%d%d", &stu[i].name, &stu[i].Chinese, &stu[i].Math, &stu[i].English);

		stu[i].score = stu[i].Chinese + stu[i].Math + stu[i].English;
		
		if (stu[i].score > max_score)
		{
			max_score = stu[i].score;
			max_i = i;
		}

	}

	printf("%s %d %d %d", stu[max_i].name, stu[max_i].Chinese, stu[max_i].Math, stu[max_i].English);

	return 0;
}
*/