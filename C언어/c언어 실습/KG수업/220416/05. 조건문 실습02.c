#include <stdio.h>

int main(void){
	int num1; int num2;
	scanf("%d\n %d", &num1, &num2);

	if (num1 > num2){
		printf("ù��° ������ �� Ů�ϴ�."); 
	 	printf("%d", num1 * 2);

	} 
	
	else {
		printf("�� ��° ������ �� Ů�ϴ�", "%d * 3", num2);
		printf("%d", num2 * 3);
	}
	
	return 0;
}

#include <stdio.h>

int main(void) {
    int num1; int num2;
    printf("���� 2�� �Է� >> ");
    scanf("%d%d", &num1, &num2);
    if (num1 > num2) {
        printf("ù��°�� �� Ů�ϴ�.\n");
        }
    else {
        printf("�ι�°�� �� Ů�ϴ�.\n");
        }
    return 0;
}
