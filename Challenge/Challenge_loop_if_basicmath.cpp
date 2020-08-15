#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	float c=0,n=0,m=0,s1,s2,s3=0,s4=0,sd;
	scanf_s("%d %d",&a,&b);
	if (a < b) {
		for (int i = a; i <= b; i++) {
			printf("%d ",i);
			c = c + i;
			n = n + 1;
		}
		m = c / n;
		printf("\nAverage = %.1f\n", m);

		for (int j = a; j <= b;j++) {
			s1 = j - m;
			s2 = s1 * s1;
			s3 = s3 + s2;
		}
		s4 = s3 / (n - 1);
		sd = sqrt(s4);
		printf("SD = %.2f\n",sd);
	}
	
	else if (a > b) {
		for (int i = a; i >= b; i--) {
			printf("%d ", i);
			c = c + i;
			n = n + 1;
		}
		m = c / n;
		printf("\nAverage = %.1f\n", m);

		for (int j = a; j >= b; j--) {
			s1 = j - m;
			s2 = s1 * s1;
			s3 = s3 + s2;
		}
		s4 = s3 / (n - 1);
		sd = sqrt(s4);
		printf("SD = %.2f\n", sd);
	}
	return 0;
}