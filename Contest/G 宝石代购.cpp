//G ±¦Ê¯´ú¹º

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long money(long long x)
{
    long long res;

    res = pow(x, 3) + pow(x, 2) + x;

    return res;
}

int main()
{
    int q;
    long long i = 0;
    long long n;

    scanf("%d", &q);

    while (q > 0)
    {
        scanf("%lld", &n);

        while (money(i) <= n)
        {
            i++;
        }

        if (q > 1)
            printf("%lld\n", i - 1);
        else
            printf("%lld", i - 1);

        q--;
    }



    return 0;
}
*/