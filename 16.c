#include <stdio.h>
int main ()
{
const int READY = 24;
int code = 0;
int count = 0;

scanf ("%d %d", &code, &count);
if ( code == READY )
	if ( count < 20 )
		printf("一切正常\n");
else   //这个else是跟在内部的if后面，else会找最近的if配合
		printf("继续等待\n");


	return 0;
}
