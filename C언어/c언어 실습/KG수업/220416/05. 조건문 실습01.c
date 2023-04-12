#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	
	if (num % 2 == 0){
		printf("2의 배수입니다.");
    }
	if (num % 7 == 0){
		printf("7의 배수입니다.");		
	} 
	
	if (num < 15){
		printf("15미만입니다.");
		}	
	if (num > 15){
		printf("15초과입니다.");
	    }
		
	if (num == 15){
		printf("%d", num);
	}
	
	return 0;
}
