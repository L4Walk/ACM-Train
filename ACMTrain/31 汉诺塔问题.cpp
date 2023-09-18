// 31: ∫∫≈µÀ˛Œ Ã‚

/*
# include <stdio.h>

int move(char getone, int n, char putone);
int Hanoi(int n, char x, char y, char z);
int k = 1;

int main()
{
	int n;
	char x = 'a';
	char y = 'b';
	char z = 'c';

	while (scanf("%d", &n) != EOF)
	{
		Hanoi(n, x, y, z);
		k = 1;
	}

	return 0;
}

int move(char getone, int n, char putone)
{
	printf("%d,move %d from %c to %c\n", k, n, getone, putone);

	k++;

	return 0;
}

int Hanoi(int n, char x, char y, char z)
{

	if (n == 1)
		move(x, 1, z);
	else
	{
		Hanoi(n - 1, x, z, y);
		move(x, n, z);
		Hanoi(n - 1, y, x, z);
	}
	return 0;
}
*/