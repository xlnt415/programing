#include <stdio.h>

int main(void) {
	int sc1; int sc2; int sc3;
	double avg;
	char rank;
	printf("���� ���� �Է� >> ");
	scanf_s("%d", &sc1);
	printf("���� ���� �Է� >> ");
	scanf_s("%d", &sc2);
	printf("���� ���� �Է� >> ");
	scanf_s("%d", &sc3);
	avg = (sc1 + sc2 + sc3) / 3.0;
	// ������ �ִ� ������ ���ǽ��� ��� ��
	// - ���� ���� �ͺ��� �Ǵ�.
	if (avg >= 90) rank = 'A';
	else if (avg >= 80) rank = 'B';
	else if (avg >= 70) rank = 'C';
	else if (avg >= 60) rank = 'D';
	else rank = 'F';
	// C����� ����� ������ó���� �׻� �⺻�̴�.
	// ���ڿ���....���ѻ����� ����.
	printf("��� : %c���\n", rank);
	printf("��� : %.1f��\n", avg);
	return 0;
}