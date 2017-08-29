#include <cstdio>  
#include <cmath>  

int n;

void get_ans() {
	int tmp = n;
	int m = (int)sqrt(n + 0.5);
	long long ans = 1;
	for (int i = 2; i <= m; i += 2) {
		if (n % i == 0) {
			int cnt = 0;
			while (n % i == 0) {
				n /= i;
				cnt++;
			}
			ans *= (cnt << 1) + 1;
		}
		if (i == 2) i--;
	}
	if (n > 1) ans += (ans << 1);
	ans = (ans >> 1) + 1;
	printf("%d %lld\n", tmp, ans);
}

int main() {
	while (~scanf("%d", &n) && n) {
		get_ans();
	}
	return 0;
}
