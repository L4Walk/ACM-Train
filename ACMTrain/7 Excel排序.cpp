// 7: Excel����

/*
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

struct Stu{
	char xuehao[10];
	char name[10];
	int grade;
}stu[1001];


//����ѧ������
int Comp_1(const void* p1, const void* p2)
{
	return strcmp((*(Stu*)p1).xuehao, (*(Stu*)p2).xuehao);
}


//������������
int Comp_2(const void* p1, const void* p2) 
{
	if (strcmp((*(Stu*)p1).name, (*(Stu*)p2).name) != 0)
		return strcmp((*(Stu*)p1).name, (*(Stu*)p2).name);
	else
		return strcmp((*(Stu*)p1).xuehao, (*(Stu*)p2).xuehao);
}


// ���ɼ�����
int Comp_3(const void* p1, const void* p2)
{
	struct Stu* p3 = (Stu*)p1;
	struct Stu* p4 = (Stu*)p2;
	if (p3->grade != p4->grade)
		return p3->grade - p4->grade;
	else 
		return strcmp((*(Stu*)p1).xuehao, (*(Stu*)p2).xuehao);
}


int main()
{
	int n, c;
	int i, j;
	int cnt = 1;

	while (scanf("%d%d",&n,&c) != EOF && n+c != 0)
	{

		for (i = 0; i < n; i++)
		{
			scanf("%s%s%d", &stu[i].xuehao, &stu[i].name, &stu[i].grade);
		}
		
		switch (c)
		{
		// �� C=1 ʱ����ѧ�ŵ�������
		case 1:
			qsort(stu, n, sizeof(stu[0]), Comp_1);
			break;
		// �� C=2ʱ���������ķǵݼ��ֵ�������
		case 2:
			qsort(stu, n, sizeof(stu[0]), Comp_2);
			break;
		// �� C=3 ʱ�����ɼ��ķǵݼ�����
		case 3:
			qsort(stu, n, sizeof(stu[0]), Comp_3);
			break;

		}

		printf("Case %d:\n", cnt);
		for (i = 0; i < n; i++)
			printf("%s %s %d\n", stu[i].xuehao, stu[i].name, stu[i].grade);

		cnt++;
	}



	return 0;
}
*/