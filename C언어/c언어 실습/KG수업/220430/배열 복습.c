#include <stdio.h>

int main(void){
	//���� 3�� �Է��� �޾� ����� ����ϰ�
	// �հ�/���հ� ���θ� �Ǵ��Ѵ�. 
	//�迭 : ������ ����
	// -> �ϳ��� �̸����� ������ ������ �����Ѵ�. 
	int score[3];
	printf("����, ����, ���� ���� �Է�: ");
	scanf("%d%d%d", &score[0], &score[1], &score[2]]);
	result1 = score[0] + score[1] + score[2];
	result2 = (double)result1 / 3;
	printf("����: %d��\n", result1);
	printf("���: %.0f��", result2);
	printf("������ : ");
	if (result2 >= 80) printf("�հ�\n");
	else printf("���հ�\n") 
	return 0;
}
