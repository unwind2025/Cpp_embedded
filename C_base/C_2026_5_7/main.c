#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARR_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

/*

*/
int main() {
	int i, sum = 0;
	printf("请输入一个数字：");
	scanf("%d", &i);
	printf("Hello CCNU !\n");
	while (i >= 0) {
		sum =sum + i;
		i--;
	}
	printf("sum = %d\n", sum);
	return 0;
}