#include <stdio.h>

int main(void) {
	int num1; int num2;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	// �����3. else �� �������ǹ� �߰��ϱ�.
	// -> ���� ����� ���� �ʿ��� ���� �����÷� ���� ���.
	
	// ���� : ���ӹ��� �����̸�, �߰�ȣ�� ���� �� �ִ�.
	// else if : ��Ģ�� ���� �߰�ȣ�� ���ָ� ������ �����
	if (num1 > num2) printf("ù��°�� �� Ů�ϴ�.\n");
	// (num1 <= num2) && (num2 > num1)
	else if (num2 > num1) printf("�ι�°�� �� Ů�ϴ�.\n");
	// (num1 <= num2) && (num2 <= num1)
	else printf("���� �����ϴ�.\n");
	
	// �������� else�� ���� -> �����1
	// else�� �ִ� -> �����2
	return 0;
}