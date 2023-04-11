#include<stdio.h>
long nSum(int n);
long nSum(int n) {
	int i = 0, sum = 0;
	while (i <= n) {
		sum += i;
		i++;
	}
	return sum;
}
void main() {
	int n, sum;
	printf("请输入n:");
	scanf_s("%d", &n);
	sum = nSum(n);
	printf("1到%d的和是%d", n, sum);
}
