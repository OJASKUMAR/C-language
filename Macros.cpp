#include<stdio.h>
int main()
{
	printf("Current time: %s\n",__TIME__);
	printf("current file:%s\n",__FILE__);
	printf("current line number:%d\n",__LINE__);
	printf("current DATE:%s\n",__DATE__);
	printf("ansi standard:%d\n",__STDC__);
}
