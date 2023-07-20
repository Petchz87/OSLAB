#include <stdio.h>

int main() {
	int num;
	int sum = 0;
	int cnt = 0;
	do{
		printf("enter a number : ");
		scanf("%d", &num);
		sum += num;
		cnt++;
	}while(num > 0);
		printf("summation = %d\n", sum);
		printf("average = %d\n", (sum/cnt));
	return 0;
}
