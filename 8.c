#include <stdio.h>
int main ()
{
	int a,b,c,d;
	scanf("%d",&a);
	int t1 = a/100;
	int t2 = a % 100 / 10;
	int t3 = a%10;
	int t = t3*100+t2*10+t1;
	
	printf("%d",t);

	return 0;
}
