#define swapintbit(n) (((n)&0x55555555)<<1)|(((n)&0xaaaaaaaa)>>1)
#include<stdio.h>
int main()
{
	int a = 8;
	printf("a交换奇偶数位后=%d\n", swapintbit(a));
	return 0;
}