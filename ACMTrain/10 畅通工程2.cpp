//10: ³©Í¨¹¤³Ì£¨2£©

/*
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <vector>
#include <queue>
#include <cmath>
#include <stack>
#include <map>
#include <set>
using namespace std;

#define ms(x, n) memset(x,n,sizeof(x));

typedef  long long LL;
const int inf = 1 << 30;
const LL maxn = 110;

int N, w[maxn][maxn];
int d[maxn];
bool used[maxn];
typedef pair<int, int> P;

int Prim() {
    for (int i = 1; i <= N; i++)
        used[i] = false, d[i] = inf;

    priority_queue<P, vector<P>, greater<P> > q;
    q.push(P(d[1] = 0, 1));

    int ret = 0;

    while (!q.empty()) {
        P cur = q.top();
        q.pop();

        int u = cur.second;

        if (used[u]) continue;

        used[u] = true;

        ret += d[u];

        for (int v = 1; v <= N; v++)
            if (w[u][v] < d[v]) {
                d[v] = w[u][v];
                q.push(P(d[v], v));
            }
    }
    return ret;
}
int main()
{
    while (cin >> N && N != 0) {
        fill(w[0], w[0] + maxn * maxn, inf);

        int a, b, c;

        for (int i = 1; i <= N * (N - 1) / 2; i++) {
            cin >> a >> b >> c;
            w[a][b] = w[b][a] = c;
        }

        cout << Prim() << endl;
    }

    return 0;
}

*/
