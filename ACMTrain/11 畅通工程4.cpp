//11: ³©Í¨¹¤³Ì£¨4£©

/*
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>

using namespace std;
int n, t, m;
double sum;
const int maxn = 107;
const int inf = 0x3f3f3f3f;
double a[maxn][maxn];
double b[maxn];
double x[maxn], y[maxn];
double length[maxn];
int vis[maxn];
int path[maxn];

void prim()
{
    for (int i = 1; i <= n; i++)
    {
        vis[i] = 0;
        length[i] = a[1][i];
    }

    for (int i = 1; i <= n; i++)
    {
        double u = inf;
        int v;

        for (int j = 1; j <= n; j++)
        {
            if (vis[j] == 0 && length[j] < u)
            {
                u = length[j];
                v = j;
            }
        }

        vis[v] = 1;
        sum += length[v];

        for (int j = 1; j <= n; j++)
        {
            if (vis[j] == 0 && length[j] > a[v][j])
            {
                length[j] = a[v][j];
            }
        }
    }
}

double leng(double x1, double y1, double x2, double y2)
{
    double k = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return k;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        for (int i = 1; i <= n; i++)cin >> x[i] >> y[i];

        for (int i = 1; i <= n; i++)
            for (int j = i; j <= n; j++)
            {
                double k = leng(x[i], y[i], x[j], y[j]);
                if (j == i)a[i][j] = 0;
                else if (k < 10 || k>1000)a[i][j] = a[j][i] = 1e9;
                else a[i][j] = a[j][i] = k;
            }

        prim();
        if (sum < 1e9)
            printf("%.1f\n", sum * 100);
        else 
            cout << "oh!" << endl;

    }
    return 0;
}
*/