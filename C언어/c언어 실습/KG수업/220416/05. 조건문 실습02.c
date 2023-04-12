#include <stdio.h>

int main(void){
	int num1; int num2;
	scanf("%d\n %d", &num1, &num2);

	if (num1 > num2){
		printf("첫번째 정수가 더 큽니다."); 
	 	printf("%d", num1 * 2);

	} 
	
	else {
		printf("두 번째 정수가 더 큽니다", "%d * 3", num2);
		printf("%d", num2 * 3);
	}
	
	return 0;
}

#include <stdio.h>

int main(void) {
    int num1; int num2;
    printf("정수 2개 입력 >> ");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2) {
        printf("첫번째가 더 큽니다.\n");
        }
    else {
        printf("두번째가 더 큽니다.\n");
        }
    return 0;
}
