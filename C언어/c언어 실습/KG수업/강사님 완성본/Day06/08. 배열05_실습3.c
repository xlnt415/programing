#include <stdio.h>

int main(void) {
	int values[4];
	int result = 0;
	// ���ǻ���1 : �迭�� ũ�Ⱚ�� ���ؼ� ������ �����Ѵ�.
	// -> �迭�� ũ�Ⱚ�� �ٲ㵵 ��� �ڵ尡 �����ǵ��� �����ش�.
	int size = sizeof(values) / sizeof(int); // sizeof(�迭)/sizeof(���ڷ���);
	for (int i = 0; i < size; i++) {
		printf("����%d �Է� >> ", i + 1);
		scanf_s("%d", &values[i]);
	}
	// ���ǻ���2 : ���� �ٸ� ������ �ڵ�� �ϳ��� �ݺ����� ��ġ�� �ʴ´�.
	// -> �Լ��� ������� �� ��, �˾ƺ��� ���������.
	// -> ���� �ڵ带 ���������� �� ����� -> ������ �ľ��� ��ƴ�.
	// -> ȿ������ 1�� ����
	// 1 * 5 * 2 vs 2 * 5 -> 10 vs 10
	for (int i = 0; i < size; i++) {
		result += values[i];
	}
	printf("�� : %d\n", result);
	if (result % 5 == 0) printf("5�� ����Դϴ�.\n");
	return 0;
}