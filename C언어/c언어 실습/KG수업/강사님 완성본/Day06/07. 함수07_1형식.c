#include <stdio.h>

double make_avg(int n1, int n2, int n3) {
	return (n1 + (double)n2 + n3) / 3;
}
// 1���� : ���� ó���ϴ� �Ϳ��� ���ߵǴ� �Լ�

int main(void) {
	// 4���� : �������α׷� - �ڷ� -> ó�� -> ����
	// 3���� : �����ܰ谡 ���� - �ڷ� -> ó�� -> �ѱ��
	// 2���� : �ڷ�ܰ谡 ���� - �޾ƿ� �� -> ó�� -> ����
	// 1���� : ó��(����)�� ���� - �޾ƿ� �� -> ó�� -> �ѱ��
	double result1 = make_avg(10, 11, 13);
	double result2 = make_avg(11, 17, 99);
	printf("�� ����� �� : %.2f\n", result1+result2);
	return 0;
}