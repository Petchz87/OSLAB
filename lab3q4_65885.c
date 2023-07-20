#include <stdio.h>

int main() {
	int a;
	int sum = 0;
	int cnt = 0;
	while(a > 0){
		printf("enter a number : ");
		scanf("%d", &a);
		sum += a;
		cnt++;
	}
		printf("summation = %d\n", sum);
		printf("average = %d\n", (sum/cnt));
	return 0;
}
