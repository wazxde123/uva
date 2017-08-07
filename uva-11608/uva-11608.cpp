#include "stdio.h"
int problem_get[13];
int problem_need[13];

int main()
{
	int S, cases = 1;
	while (~scanf("%d", &S) && S >= 0) {
		for (int i = 1; i <= 12; ++i) {
			scanf("%d", &problem_get[i]);
		}
		for (int i = 1; i <= 12; ++i) {
			scanf("%d", &problem_need[i]);
		}

		printf("Case %d:\n", cases++);
		for (int i = 1; i <= 12; ++i) {
			if (S >= problem_need[i]) {
				puts("No problem! :D");
				S -= problem_need[i];
			}
			else {
				puts("No problem. :(");
			}
			S += problem_get[i];
		}
	}
	return 0;
}

