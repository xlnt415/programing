#include <stdio.h>

int main(void){
	int num1; int num2; int num3;
	printf("���� 3�� �Է� >> ");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 % num2 == 0){
		printf("%d�� %d�� ����Դϴ�.", num1, num2);
	} 
	else if(num1 % num3 == 0){
		printf("%d�� %d�� ����Դϴ�.", num1, num3);
	}
	else {
		printf("%d�� ����� �����ϴ�.\n", num1);
	}
	return 0;
}
