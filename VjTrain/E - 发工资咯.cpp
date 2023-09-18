// E - ·¢¹¤×Ê¿©
 
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, salary, a[6] = { 100,50,10,5,2,1 };

    while (scanf("%d", &n) != EOF && n != 0)
    {
        
        int sum = 0;
        
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &salary);
            
            for (int i = 0; salary > 0; ++i)
                if (salary >= a[i])
                {
                    sum += salary / a[i];
                    salary %= a[i];
                }
        }

        printf("%d\n", sum);
    }
    return 0;
}
*/