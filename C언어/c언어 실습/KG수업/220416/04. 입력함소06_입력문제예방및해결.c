#include <stdio.h>

int main(void){
	int num1; int num2;
	char ch1; char ch2;
	// 1. ������ : ���Ĺ��ڸ� ��� �Է¹��� �ʴ´�.
	printf("����2��, �Ǽ�2�� �Է� >> ");
	//scanf("%d%d%c%c", &num1, %num2, &ch1, 1, &ch2, 1); �̷��� �� ��
	
	scanf("%d%d", &num1, &num2);
	//2.���ڸ� �Է¹��� ���, �տ� ���� �� ĭ�� �־��ش�. 
	scanf(" %c %c", &ch1, 1 &ch2, 1);
	printf(" %d %d %c %c\n", num1, num2, ch1, ch2);
	
	 // �ذ���
	 // rewind(stdin) : vs2016���� ���� 
	 // fflush(stdin) : �������� �Ǵ� �ٸ� ȯ��
	 fflush(stdin); // �ӽð����� ����� �͵��� ��� ���� 
	 char word[100];
	 printf("���� �Է� >>");
	 gets(word, 100); // ���� 
	 printf("��� : %s\n",word); 
	return 0;
}
