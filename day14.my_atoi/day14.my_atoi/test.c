#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int my_atoi(const char * p)
{
	
	assert(p != NULL);
	long res = 0;
		while (*p!='\0')
		{
			res = res * 10 + (*p - '0');
		     p++;
		}
		return res;
	  
}
int main()
{
	char *p = "4413";
	int res1;
	int res2;
	res1 = atoi(p);
	res2 = my_atoi(p);
	printf("res1=%d\n", res1);
    printf("res2=%d\n",res2);
	return 0;
}