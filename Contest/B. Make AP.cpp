// B. Make AP

/*
bool is(long a1, long a2, long a3)
{
	if (a1 == a2 && a2 == a3)
		return true;

	if (((a1 + a3) % 2 == 0) && (a1 + a3) / 2 % a2 == 0)
		return true;

	if ((a1 == 1 || a3 == 1) && a2 != 1)
		return true;

	int d1 = a2 - a1;
	int d2 = a3 - a2;


	if (d1 != 0 && d2 != 0)
	{
		if ((a2 + d2) % a3 == 0 && (a2 + d2) > a3)
			return true;

		if ((a2 - d1) % a1 == 0 && (a2 - d1) > a1)
			return true;
	}

	if (d1 == 0 && a2 % a3 == 0)
		return true;

	if (d2 == 0 && a2 % a1 == 0)
		return true;

	return false;


}
# include <cstdio>
# include <cstring>
# include <iostream>
# include <algorithm>
using namespace std;

int main()
{
	int T;
	long a[3];
	long d1,d2;
	int i;

	scanf("%d", &T);

	while(T--)
	{
		scanf("%ld%ld%ld", &a[0], &a[1], &a[2]);

		if (is(a[0], a[1], a[2]))
			printf("YES\n");
		else
			printf("NO\n");

		/*
		if ((a[0] == 1 || a[2]==1)&&a[1] != 1 )
			printf("YES\n");
		else
		{
			d1 = a[2] + a[0];

			if (d1 % 2 == 0 && (d1/2)% a[1] == 0)
				printf("YES\n");
			else
			{
				d1 = a[1] - a[0];
				d2 = a[2] - a[1];

				if (d1 == d2)
					printf("YES\n");
				else
				{
					if (d1 != 0 && d2 != 0)
					{
						if (((a[1] - d2) % a[0] == 0 && (a[1] - d2) > 0) || ((a[1] + d1) % a[2] == 0 && (a[1] + d1) > 0))
							printf("YES\n");
						else
							printf("NO\n");
					}
					else if (d1 == 0)
					{
						if (a[1] % a[2] == 0)
							printf("YES\n");
						else
							printf("NO\n");
					}
					else if (d2 == 0)
					{
						if (a[1] % a[0] == 0)
							printf("YES\n");
						else
							printf("NO\n");
					}
					else
						printf("NO\n");

				}


			}
		}
	
	}

	return 0;
}

	*/