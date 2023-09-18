// 32: Tri Tiling

/*
# include <stdio.h>

//int Tri_Tiling(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 2)
//		return 3;
//	else
//		return(4 * Tri_Tiling(n - 2) - Tri_Tiling(n - 4));
//}


int main()
{
	int a[] = { 1,3,11,41,153,571,2131,7953,29681,110771,413403,1542841,5757961,21489003,80198051,299303201 };
	int n;

	while (scanf("%d", &n) != EOF && n != -1)
	{
		if (n % 2 == 0)
			printf("%d\n", a[n / 2]);
		else
			printf("0\n");
	}

	return 0;
}

//
//int main()
//{
//	for (int i = 0; i <= 15; i++)
//	{
//		printf("%d\n", Tri_Tiling(i * 2));
//	}
//}

*/