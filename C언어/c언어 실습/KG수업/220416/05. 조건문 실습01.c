#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("2�� ����Դϴ�.");
    }
	if (num % 7 == 0){
		printf("7�� ����Դϴ�.");		
	} 
	
	if (num < 15){
		printf("15�̸��Դϴ�.");
		}	
	if (num > 15){
		printf("15�ʰ��Դϴ�.");
	    }
		
	if (num == 15){
		printf("%d", num);
	}
	
	return 0;
}
