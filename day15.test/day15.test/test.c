#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strlen(char * p)
{
	assert(p != NULL);
	int count = 0;
	while (*p != '\0')
	{
		p++;
		count++;
	}
	return count;
}

void * memcpy(void * dst, const void * src, size_t count)
{
	void * ret = dst;
	assert(dst);
	assert(src);
	/*
	* copy from lower addresses to higher addresses
	*/
	while (count--) {
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;
	}

	return(ret);
}
int main()
{
	char string1[60] = "The quick brown dog jumps over the lazy fox";
	char string2[60] = "The quick brown fox jumps over the lazy dog";

		printf("Function:\tmemcpy without overlap\n");
		printf("Source:\t\t%s\n", string1 + 40);
		printf("Destination:\t%s\n", string1 + 16);
		memcpy(string1 + 16, string1 + 40, 3);
		printf("Result:\t\t%s\n", string1);
		printf("Length:\t\t%d characters\n\n", strlen(string1));

		/* Restore string1 to original contents */
		memcpy(string1 + 16, string2 + 40, 3);

		printf("Function:\tmemmove with overlap\n");
		printf("Source:\t\t%s\n", string2 + 4);
		printf("Destination:\t%s\n", string2 + 10);
		memmove(string2 + 10, string2 + 4, 40);
		printf("Result:\t\t%s\n", string2);
		printf("Length:\t\t%d characters\n\n", strlen(string2));

		printf("Function:\tmemcpy with overlap\n");
		printf("Source:\t\t%s\n", string1 + 4);
		printf("Destination:\t%s\n", string1 + 10);
		memcpy(string1 + 10, string1 + 4, 40);
		printf("Result:\t\t%s\n", string1);
		printf("Length:\t\t%d characters\n\n", strlen(string1));

	char * test = "asvsfaf";
	int res = my_strlen(test);
	printf("%d", res);
	return 0;

}