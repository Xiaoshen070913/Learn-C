#include <stdio.h>
int main ()
{
int n;

scanf("%d", &n);
int fact = 1;

int i = 1;
for ( i=1; i<=n; i++) {            //第一个是初始条件；第二个循环继续条件；第三个循环每一轮要做的动作；
	fact *= i;
}
printf("%d!=%d\n", n, fact);


	return 0;
}
