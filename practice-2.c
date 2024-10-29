#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//找出一百以内的奇数
int main() {
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d\n", i);
		}
		//else           //如果加了else的话i为奇数的时候就不会i++了    具体来说，当 i 是偶数时，你只是简单地增加了 i 的值，但没有继续检查新的 i 值是否为奇数。这会导致某些偶数被跳过，而不会打印出来  
		//i++;
		

		i++;        //这样才是真确的，无论i为奇数还是偶数都会i++;
	}



	return 0;
}