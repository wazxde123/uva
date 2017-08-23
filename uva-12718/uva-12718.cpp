#include "stdio.h"
#include <cstdio>  
#include <cstring>  
int main()
{
	int t;
	while (scanf("%d", &t) != EOF)
	{
		char a[1005];
		int cnt[30];
		int i, j, k, z;
		int len;
		int ans;
		int count;
		count = 0;
		for (i = 1; i <= t; ++i)
		{
			scanf("%s", a);
			len = strlen(a);
			count = 0;
			for (j = 0; j<len; ++j)
			{
				memset(cnt, 0, sizeof(cnt));
				for (z = j; z<len; ++z)
				{
					cnt[a[z] - 'a']++;
					ans = 0;
					for (k = 0; k<26; ++k)
					{
						if (cnt[k] % 2 == 1)
						{
							if (ans)
								break;
							else
								ans = 1;
						}
					}
					if (k == 26)
						count++;
				}
			}
			printf("Case %d: %d\n", i, count);
		}
	}
	return 0;
}

