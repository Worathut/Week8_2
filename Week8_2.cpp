#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int IsPrime(int);
int main() {
	int num;
	do {
		scanf("%d", &num);
	} 
	while (IsPrime(num) != 1);

	if (IsPrime(num) == 1) {
		printf("%d is a prime number", num);
	}
	return 0;
}
int IsPrime(int n) {
	if (n == 0 || n == 1) {
		return 0;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}