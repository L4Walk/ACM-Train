// P1055 [NOIP2008 �ռ���] ISBN ����

/*
# include <stdio.h>

int main()
{
	int num[9] = {0};
	char ISBN[14], bs;
	int i, t, b;
	int sum = 0;

	// ��ȡISBN��9λ����
	scanf("%s", ISBN);

	t = 0;
	for (i = 0; i <= 12; i++)
	{
		if ((ISBN[i] >= 48) && (ISBN[i] <= 57))
		{
			num[t] = ISBN[i] - 48;
			t++;
		}
	}

	sum = 0;

	for (i = 0; i <= 8; i++)
	{
		sum += num[i] * (i + 1);
	}

	b = sum % 11;

	// �����ʶ��
	if (b == 10)
		bs = 'X';
	else
		bs = b + 48;


	// �ж��Ƿ����
	if (bs == ISBN[12])
		printf("Right");
	else
	{
		ISBN[12] = bs;
		printf("%s", ISBN);
	}

	return 0;
}
*/