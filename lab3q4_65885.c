#include <stdio.h>

int main() {
	int num;
	float sum = 0;
	int cnt = 0;
	while(1){
		printf("enter a number : ");
		scanf("%d", &num);
		if(num < 1) break;
		sum += num;
		cnt++;
	}
		printf("summation = %.2f\n", sum);
		printf("average = %.2f\n", (sum/cnt));
	return 0;
}
