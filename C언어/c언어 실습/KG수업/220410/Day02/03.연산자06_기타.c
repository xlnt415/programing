#include <stdio.h>

int main(void) {
	//1. �޸�(��ǥ)
	// - �ڵ带 �����Ű�� ���� �� ���
	// - ������� �����ߴٸ� ���� �������� ����� �غ�ȴ�
	/*printf("A\n");
	printf("B\n");*/
	
	int num = 15;
	int result = 0;
	printf("%d %d\n", result, num);
	result = (num += 5, num + 13); //�״� ���������� ����
	printf("%d %d\n", result, num);

	//2. sizeof() : �������/�ڷ����� ũ�⸦ �����ִ� ������
	printf("������ ũ�� : %d\n", sizeof(num));
	printf("�ڷ����� ũ�� : %d\n", sizeof(double));
	return 0;
}