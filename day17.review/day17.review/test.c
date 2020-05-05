#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
int my_strcmp(const char * str1, const char *str2)
{
	assert(str1 != NULL&& str2 != NULL);
	int res = 0;
	while (*str1 != '\0'||*str2 != '\0')
	{
		if ((res = *str1 - *str2) != 0)
			break;
		str1++;
		str2++;
	}
	if (res>0)
		return 1;
	else if (res<0)
		return -1;
	return res;
}
char * my_strcat(char *des, const char *res)
{
	assert(des != NULL&&res != NULL);
	char * p = des;
	while (*p != '\0')
		p++;
	while (*res != '\0')
		*p++ = *res++;
	*p = '\0';
	return des;
}
//Ä£Äâstrcpy
char * my_strcpy(char * des, const char *res)
{
	assert(des != NULL&&res != NULL);
	char *str = des;
	while (*str != '\0'&&*res!= '\0')
	{
		*str++ = *res++;
	}
	*str = '\0';
	return des;
}
//strlen
size_t my_strlen(const char * string)
{
	assert(string != NULL);
	size_t count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
//µÝ¹éstrlen
size_t my_strlen1(const char * string)
{
	assert(string != NULL);
	if (*string == '\0')
		return 0;
	else
		return my_strlen1(string + 1) + 1;
}  
int main()
{
	int res = 0;
	char str[20] = "hello";
	char *str1 = "Linux";
	my_strcpy(str, str1);
	printf("str=%s\n", str);
	res = my_strcmp(str, str1);
	printf("%d\n", res); 

	my_strcat(str, str1);
	printf("str=%s\n", str);
	res = my_strcmp(str,str1); 
	printf("%d\n", res);
	return 0;
}