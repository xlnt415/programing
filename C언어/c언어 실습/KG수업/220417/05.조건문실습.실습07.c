#include <stdio.h>

int main(void){
	int num;
	printf("���� �Է�>> ");
	scanf("%d", &num);
	
	while (num > 10){
		printf("�����Է� >>");
		scanf("%d", &num); 
		//���ʿ��� ������ �ϰ� �ȴ�. 
		//if (num<=10){
			printf("10���ϰ� �Է��� �Ǿ� �����մϴ�.\n");
			
		}
	}
	printf("10���ϰ� �Է��� �Ǿ� �����մϴ�.");
	return 0;
}
