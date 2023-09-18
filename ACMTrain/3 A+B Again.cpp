// 3: A+B Again

/*
# include <stdio.h>

int main()
{
	int h1, h2, h3, m1, m2, m3, s1, s2, s3;
	int n;

	scanf("%d", &n);

	while (n > 0)
	{
		scanf("%d%d%d%d%d%d", &h1, &m1, &s1, &h2, &m2, &s2);

		h3 = h1 + h2;
		m3 = m1 + m2;
		s3 = s1 + s2;

		if (s3 >= 60)
		{
			m3 += s3 / 60;
			s3 -= s3 / 60 * 60;
		}


		if (m3 >= 60)
		{
			h3 += m3 / 60;
			m3 -= m3 / 60 * 60;
		}

		printf("%d %d %d\n", h3, m3, s3);
		n--;
	}


	return 0;
}
*/