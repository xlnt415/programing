#include <stdio.h>

int main(void) {
	// ������ �����? �׳� ����?
	int count;
	printf("����� Ƚ�� �Է� >> ");
	scanf_s("%d", &count);
	if (count <= 0) printf("�ȳ��ɴϴ�.\n");
	else {
		// ���� �̸� �ߺ��� ���ϴ°� ����.
		// - ���� �̸��̸� �ܺ��� ������ ������.
		// �����! - count�� �ǵ帮�� �ʴ´�.
		for (int i = 1; i <= count; i++) {
			printf("\"C Language is SIMPLE\"\n");
		}
		// �׳� ����! - count�� �ǵ���� ��������.
		for (;count>0 ;count--) {
			printf("\"C Language is SIMPLE\"\n");
		}
	}

	
	

	return 0;
}