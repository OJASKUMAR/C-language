#include<stdio.h>
int main()
{
	printf("Current time: %s",__TIME__);
	printf("current file:%s",__FILE__);
	printf("current line number:%d",__LINE__);
	printf("current DATE:%s",__DATE__);
	printf("ansi standard:%d",__STDC__);
}
