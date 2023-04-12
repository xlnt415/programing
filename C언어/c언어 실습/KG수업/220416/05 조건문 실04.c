#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	if (num < 0){
		num *= -1;
	}
	

	if (num / 10 == 0) {
		printf("한자리 수입니다.");
		}
	else if (num / 100 == 0){
		printf("두자리 수입니다.");
		}
	else {
		printf("세자리 수입니다.");
		}
	
	return 0;
}
