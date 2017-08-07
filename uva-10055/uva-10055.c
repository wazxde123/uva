
#唯一的陷阱就是在於數值範圍，剛好到2^32，所以我用unsigned long！

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned long a, b;
	while (scanf("%lld %lld", &a, &b) != EOF)
	{
		if (a > b)
			printf("%lld\n", a - b);
		else
			printf("%lld\n", b - a);
	}
	return 0;
}

