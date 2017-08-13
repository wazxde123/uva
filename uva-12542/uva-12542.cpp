// uva-12542.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <cstdio>  
using namespace std;
#define MAXN 300  
#define MAXM 100010  
char str[MAXN];
bool vi[MAXM] = { 0 };
int main()
{
	vi[1] = 0;
	for (int i = 2; i<MAXM; ++i)
		if (!vi[i])
			for (int j = i + i; j<MAXM; j += i)
				vi[j] = 1;
	while (scanf("%s", str))
	{
		int ans = 0;
		if (str[0] == '0'&&str[1] == '\0')   break;
		for (int i = 0; str[i]; ++i)
		{
			int tmp = 0;
			for (int j = i; str[j]; ++j)
			{
				tmp = tmp * 10 + str[j] - '0';
				if (tmp >= MAXM)   break;
				if (!vi[tmp])    ans = max(tmp, ans);
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}

