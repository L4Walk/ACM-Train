//13: The Blocks Problem Again

/* 刘汝佳上的板子 */

/*
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

const int maxn = 101;
vector<int>pile[maxn];
int n;

//找木块儿 a 所在的pp 和h ， 以引用的形式返回调用者
void find_block(int a, int& p, int& h)
{
    for (p = 0; p < n; p++)
    {
        for (h = 0; h < pile[p].size(); h++)
            if (pile[p][h] == a)
                return;
    }
}

//把第p堆高度为h的木块上方的所有木块返回原位
void clear_above(int p, int h)
{
    for (int i = h + 1; i < pile[p].size(); i++)
    {
        int b = pile[p][i];
        pile[b].push_back(b);
    }
    pile[p].resize(h + 1);
}

//把第p堆高度为h及其上方的木块儿整体移动到p2堆的顶部
void pile_onto(int p, int h, int p2)
{
    for (int i = h; i < pile[p].size(); i++)
        pile[p2].push_back(pile[p][i]);
    pile[p].resize(h);
}

void print()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d:", i);
        for (int j = 0; j < pile[i].size(); j++)
            printf(" %d", pile[i][j]);
        printf("\n");
    }
}

int main()
{
    int a, b;
    string s1, s2;
    cin >> n;
    for (int i = 0; i < n; i++)
        pile[i].push_back(i);
    while (cin >> s1 >> a >> s2 >> b)
    {
        int pa, pb, ha, hb;
        find_block(a, pa, ha);
        find_block(b, pb, hb);
        if (pa == pb)   //处理非法指令
            continue;
        if (s2 == "onto")
            clear_above(pb, hb);
        if (s1 == "move")
            clear_above(pa, ha);
        pile_onto(pa, ha, pb);
    }
    print();
    return 0;
}
*/