#include<stdio.h>
int main ()
{
int n;

scanf("%d", &n);
int fact = 1;
int i = 1;
for ( i= n; i>=1; i--)  {         //这边还可以这样该 int i=n;
	fact *= i;               //for (  ; n>1; n--  )  for循环的条件可以省掉一个
                                //printf("%d!=%d\n", i, fact);
}

printf("%d!=%d\n", n, fact);

	return 0;
}
