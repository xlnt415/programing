#include <stdio.h>

int main(void) {
	// break : �ݺ��� �߰��� ����
	// -> ���ǽĿ��� ó���� �Ǹ� ���ǽĿ��� ó���Ѵ�.
	// -> ���ʿ��� ������ ó���� �ȵǵ��� �ϴ� ��.
	int num;
	while (1) {
		printf("10���� ū �� �Է� >> ");
		scanf_s("%d", &num);
		if (num <= 10) break; // ���ǹ��� �����ؾ� �Ѵ�.
		printf("10������ ���̾�� �մϴ�.\n");
	}
	// while�� ���ǽĿ��� ������ ���� ���� �����ϴ�.
	num = 11;
	while (num>10) {
		printf("10���� ū �� �Է� >> ");
		scanf_s("%d", &num);
		if (num > 10) printf("10������ ���̾�� �մϴ�.\n");
	}
	printf("��� : %d\n", num);
	// continue : �ݺ��� �߰��� �����(�����ܰ�� �̵�)
	// - ���ǹ��� ����ؾ� �Ѵ�.
	// - ����غ��� ū �ǹ̰� ����
	while (num > 10) {
		printf("10���� ū �� �Է� >> ");
		scanf_s("%d", &num);
		if (num > 10) {
			printf("10������ ���̾�� �մϴ�.\n");
			continue;
		}
	}
	printf("��� : %d\n", num);
	return 0;
}