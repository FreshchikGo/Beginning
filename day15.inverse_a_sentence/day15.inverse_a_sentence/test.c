#include<stdio.h>
#include<assert.h>
#include<string.h>
void inverse(char * p,  int sz)
{
	assert(p != NULL);
	int i;
	char temp;
	for (i = 0; i < sz / 2; i++)
	{
		temp = p[i];
		p[i] = p[sz - 1 - i];
		p[sz - 1 - i] = temp;
	}

}
int main()
{
	char arr[30] = "Zhuolilin love  GuangZhou.";
	inverse(arr, strlen(arr));
	int i = 0;
	while (arr[i] != '\0')
	{
		char *p = &arr[i];
		int count = 0;
		while (arr[i]!=NULL && arr[i]!= ' ')
		{
			i++;
			count++;
		}
		inverse(p, count);
		i++;
	}
	
	printf("%s\n", arr);
}