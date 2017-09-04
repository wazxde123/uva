#include "stdafx.h"
#include <stdio.h>  
#include <stdlib.h>  

int Q[10001];

int main()
{
	int t, n, m;
	while (~scanf("%d", &t))
		while (t--) {
			scanf("%d%d", &n, &m);
			for (int i = 0; i < n; ++i) {
				scanf("%d", &Q[i]);
			}

			int tail = n, head = 0, ans = 0;
			while (head < tail) {
				ans++;
				int index = head;
				for (int i = head + 1; i < tail; ++i) {
					if (Q[index] < Q[i]) {
						index = i;
					}
				}
				while (head < index) {
					if (head == m) {
						m = tail;
					}
					Q[tail++] = Q[head++];
				}
				if (head == m) { // find me  
					break;
				}
				head++; // print  
			}

			printf("%d\n", ans);
		}

	return 0;
}
