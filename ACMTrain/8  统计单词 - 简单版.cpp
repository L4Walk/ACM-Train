//8: ͳ�Ƶ��� - �򵥰�

/*
# include <stdio.h>
# include <iostream>
# include <string>
# include <map>
using namespace std;

int main()
{
	int n;
	int max = 0;	//	������ֵ
	string temp;	//	�������Ļ���
	map<string, int>Letter;	// ����һ�����ʵ�map
	map<string, int>::iterator it;	// ��������

	freopen("test.in", "r", stdin);

	while (scanf("%d", &n) != EOF && n != 0)
	{
		// ��������
		Letter.insert(pair<string, int>("ball", 0));
		Letter.insert(pair<string, int>("absolute", 0));
		Letter.insert(pair<string, int>("action", 0));
		Letter.insert(pair<string, int>("advertise", 0));
		Letter.insert(pair<string, int>("feed", 0));
		Letter.insert(pair<string, int>("effect", 0));
		Letter.insert(pair<string, int>("ignore", 0));
		Letter.insert(pair<string, int>("shell", 0));
		Letter.insert(pair<string, int>("dictation", 0));
		Letter.insert(pair<string, int>("ajax", 0));
		Letter.insert(pair<string, int>("okey", 0));
		Letter.insert(pair<string, int>("black", 0));
		Letter.insert(pair<string, int>("emacs", 0));
		Letter.insert(pair<string, int>("animal", 0));
		Letter.insert(pair<string, int>("boasting", 0));
		Letter.insert(pair<string, int>("apple", 0));
		Letter.insert(pair<string, int>("equal", 0));
		Letter.insert(pair<string, int>("project", 0));
		Letter.insert(pair<string, int>("tsinghua", 0));
		Letter.insert(pair<string, int>("attach", 0));
		Letter.insert(pair<string, int>("bubble", 0));
		Letter.insert(pair<string, int>("evade", 0));
		Letter.insert(pair<string, int>("awake", 0));
		Letter.insert(pair<string, int>("exact", 0));
		Letter.insert(pair<string, int>("eyeful", 0));
		Letter.insert(pair<string, int>("azalea", 0));

		while (n > 0)
		{
			cin >> temp;

			Letter[temp]++;

			if (Letter[temp] > max)
				max = Letter[temp];

			n--;
		}

		printf("%d\n", max);		// ���

		// ��������
		Letter.clear();
		max = 0;
	}
	return 0;
}
*/