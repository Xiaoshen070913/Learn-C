#include <stdio.h>
int main ()
{
	int a=0;
	int b=0;
	int c=0;
	scanf("%d %d",&a ,&b);

	int  hour = a / 100;

 	int  minute = a % 100;

	 minute = hour * 60 + minute;
	 minute = minute + b;
	 hour = minute / 60;
	 minute = minute % 60;
	 c = hour *100 + minute;

	printf("%d\n",c);


	return 0;
}
