#include<stdio.h>
#include<windows.h>
int main()
{
	char arr1[] = "welcome to my house";
	char arr2[] = "*******************";
	int sz = sizeof(arr1) / sizeof (arr1[0]);
	int start = 0;
	while (start <=sz)
	{
		  arr2[start] = arr1[start];
			arr2[sz] = arr1[sz];
			printf("%s\n", arr2);
			Sleep(500);
			system("cls");
			sz--;
			start++;

	}
	printf("%s\n", arr2);

}