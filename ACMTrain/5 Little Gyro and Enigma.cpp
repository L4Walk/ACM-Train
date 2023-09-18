// 5: Little Gyro and Enigma

/*
# include <iostream>
# include <string>
# include <set>
# include <map>
using namespace std;

int main()
{
	int n;
	int i, j;
	int cnt;
    string a, b;

	scanf("%d", &n);

	while (n--)
	{
        cin >> a >> b;

        int l = a.length();
        int f = 1, vis1[300] = { 0 }, vis2[300] = { 0 };
        int c = 0;

        for (int i = 0; i < l; i++) 
        {
            if (vis1[a[i]] == 0 && vis2[b[i]] == 0) 
            {
                c++;
                vis1[a[i]] = b[i];
                vis2[b[i]] = 1;
            }
            else if (vis1[a[i]] == (int)b[i])
                continue;
            else 
            {
                f = 0; 
                break;
            }
        }

        if (f) {
            if (c == 25) {
                for (int i = 97; i < 97 + 26; i++) {
                    if (vis1[i] == 0) {
                        for (int j = 97; j < 97 + 26; j++) {
                            if (vis2[j] == 0) {
                                vis1[i] = j;
                                break;
                            }
                        }
                        break;
                    }
                }
            }
            for (int i = 97; i < 97 + 26; i++) {
                if (vis1[i])
                    printf("%c->%c\n", i, vis1[i]);
            }
        }
        else 
            puts("Impossible");
	}

	return 0;
}
*/
