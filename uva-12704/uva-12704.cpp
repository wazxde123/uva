//題目：有一個半徑為r的圓，求它的直徑被點（x，y）分成的兩端長度。

//分析：直接求解r-d，r+d即可d=sqrt（x*x+y*y）。



#include <cstdio>  
#include <cmath>  

int main()
{
	int t;
	double x, y, r, d;
	while (~scanf("%d", &t))
		while (t--) {
			scanf("%lf%lf%lf", &x, &y, &r);
			d = sqrt(x*x + y*y);
			printf("%.2lf %.2lf\n", r - d, r + d);
		}
	return 0;
}

