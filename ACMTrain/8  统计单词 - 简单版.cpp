//8: 统计单词 - 简单版

/*
# include <stdio.h>
# include <iostream>
# include <string>
# include <map>
using namespace std;

int main()
{
	int n;
	int max = 0;	//	存放最大值
	string temp;	//	存放输入的缓存
	map<string, int>Letter;	// 建立一个单词的map
	map<string, int>::iterator it;	// 声明容器

	freopen("test.in", "r", stdin);

	while (scanf("%d", &n) != EOF && n != 0)
	{
		// 创建索引
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

		printf("%d\n", max);		// 输出

		// 重置数据
		Letter.clear();
		max = 0;
	}
	return 0;
}
*/