#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//用for语句判断一个数是不是奇数
int main() {
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("sorry,这个数不是奇数");
	}
	else {
		printf("哇塞！这个数是奇数");
	}
	return 0;
}