#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	if (num < 0){
		num *= -1;
	}
	

	if (num / 10 == 0) {
		printf("���ڸ� ���Դϴ�.");
		}
	else if (num / 100 == 0){
		printf("���ڸ� ���Դϴ�.");
		}
	else {
		printf("���ڸ� ���Դϴ�.");
		}
	
	return 0;
}
