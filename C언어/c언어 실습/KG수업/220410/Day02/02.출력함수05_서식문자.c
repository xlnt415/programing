#include <stdio.h>

int main(void) {
	//1. ���� �غ��� ��¾�Ŀ� ���缭 �����ش�.
	double fnum = 3.14;
	printf("���" : %f\n, fnum);
	// 2. ���� �غ��� ��¼��Ŀ� ���缭 ���� �����Ѵ�.
	printf("������ ������ ���� : %.2f\n", fnum);

	// %X, Y���Ĺ���]
	// ���Ĺ��� : c, s, d, f ���
	// X : �� ����. �����ϰ� �����ϴ� �뵵
	int num = 56;
	printf("->%d<-\n, num"); //�⺻����(0)
	printf("->%3d<-\n, num"); //�� ����(3ĭ) & ��������
	printf("->%-3d<-\n, num"); //�� ����(3ĭ) & ��������
	
	//.Y : f ���Ĺ��ڿ� �����ϰ�, �Ҽ��� ����.
	double value = 3.456;
	printf("%f\n", value);
	printf("%.3f\n", value);
	printf("%.2f\n", value);
	printf("%.1f\n", value);
	return 0;



}