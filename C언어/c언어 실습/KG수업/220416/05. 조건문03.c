#include <stdio.h>

int main(void){
	int num;
	printf("¦���� Ȧ����, Ȧ���� ¦����...");
	scanf("%d", &num);
	if (num % 2 == 0){
		num++;
	} 
	if (num % 2 == 1){
		num++; 
	}
	printf("�ٲ� ��: %d\n", num);
	return 0;
}
