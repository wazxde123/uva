//�D�ءG���@�ӥb�|��r����A�D�������|�Q�I�]x�Ay�^��������ݪ��סC

//���R�G�����D��r-d�Ar+d�Y�id=sqrt�]x*x+y*y�^�C



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

