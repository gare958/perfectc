   #include <stdio.h>

void printMin(int a, int b) {
	int min = a < b ? a : b;
	printf("�ּ�: %d\n", min);
}

int add(int a, int b) {
	int sum = a + b;
	return (sum);
}

int findMax(int a, int b) {
	int max = a > b ? a : b;
	return max;
}

int findMin(int x, int y) {
	int min = x < y ? x : y;
	return (min);
}
