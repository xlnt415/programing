#include <stdio.h>
//���� ���α׷��� : ������ �ùٸ��� ��ƶ�. 

//�: �ڷ� -> ó�� -> ����
//�ڷ�� ��� �غ��� ���ΰ�? -���/�Է� 

//�غ��� �ڷ�� ��� ������ ���ΰ�? - ���� 
//�ڷ��� ������ �����ΰ�?	- ����(���Ϲ���/���ڿ�) / ����(����/�Ǽ�) 

//� ó���� �� ���ΰ�?
//ó�������� �����ؼ� �� ���ΰ�?
// -> �����ڿ� ���ؼ��� ó���� �ȴ� 

//������� ����� ���ΰ�? prinf
//�ٸ� ������ ������ ���ΰ�? ������ ���� ��ɾ �̿��Ѵ�. 
 
int main(void){
	
	char name[100];
	int age;
	char dream[100];
	char blood[100];
	printf("�̸� �Է�\t>> ");
	scnaf("%s", name, sizeof(name));
	printf("�����Է�\t>>");
	scanf("%d", &age);
	printf("������ �Է�\t>>");
	scanf("%s", blood, 100);
	printf("�� �Է�\t\t>> ");
	scanf("%s", dream, 100);
	//gets(dream, 100);
	
		
	return 0;
}


#include <stdio.h>

int main(void){
	int num1; int num2; int num3;
	sum = num1 + num2 + num3;
	
	printf("���� 3�� �Է� >>");
	scanf(%d%d%d", &num1, &num2, &num3);
	printf("�� : %d\n", sum);
	printf("��� : %.4f\n", sum/3.0);
	
	double avg = sum / 3.0;
	printf("������ : %d\n", (int)(sum/3.0));
	printf("�Ǽ��� : %f\n", avg - (int)avg);
	
	double result = (int)avg * (avg - (int)avg);
	printf("�����ο� �Ǽ����� �� : %.8f\n", result);
	
	return 0;
}
