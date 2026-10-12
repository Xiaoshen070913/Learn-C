#include <stdio.h>
int main()
{
	int x = 0;
	scanf("%d",&x);
	int a =x/16;
	int b =x % 16;
	int c = a*10 + b;


	printf("%d\n",c);

	return 0;
}
