#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��for����ж�һ�����ǲ�������
int main() {
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("sorry,�������������");
	}
	else {
		printf("�����������������");
	}
	return 0;
}