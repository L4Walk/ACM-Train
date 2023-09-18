// P5709 【深基2.习6】Apples Prologue / 苹果和虫子
/*

#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

//int main()
{
    int m, t, s;

    scanf_s("%d%d%d", &m, &t, &s);

    if (s == 0)
        printf("%d", m);
    else if (t == 0)
        printf("0");
    else
    {
        if (s % t == 0)
            printf("%d", max(m - s / t, 0) );
        else
            printf("%d", max(m - s / t - 1, 0));
    }

    return 0;
}
*/