// P5707 【深基2.例12】上学迟到
/*

# include <stdio.h>

int main()
{
	int s, v;
	int h, m, t;

	scanf_s("%d%d", &s, &v);


	if (s % v == 0)
		t = s / v;
	else 
		t = s / v + 1;

	if (t % 60 == 0)
	{
		h = 7 - t / 60;
		m = 50 - t + t / 60 * 60;
	}
	else
	{
		h = 7 - t / 60 - 1;
		m = 50 - t + (t / 60 + 1)* 60;
	}


	if (h < 0)
		h = 24 + h;

	if (m < 0)
	{
		h--;
		m = 60 - m;
	}

	if (m >= 60)
	{
		h++;
		m = m - 60;
	}

	printf("%02d:%02d", h, m);

}
*/