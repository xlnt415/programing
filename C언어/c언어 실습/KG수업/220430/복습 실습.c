#include <stdio.h>

int main(void){
	int arr[15];
	int size = sizeof(arr) / sizeof(int); 
	/*�� �迭�� 15���� 1�� �����ϴ� ���� 0������ ä���� �����ϰ�
	����� ���� ����մϴ�*/
	for (int i = 0; i < size; i++){
		arr[i] = size - i;
	}
	//1) ù��° ���� ������ ���� ���
	printf("%d %d\n", arr[0], arr[size -1]);
	
	
	//2) Ȧ����°�� ���� ���
	for (int i = 0; i < size; i += 2){
		printf("%d", arr[i]);
	}printf("\n");
	
	//3) ¦�������� ���� ��� 
	for (int i = 1; i < size; i += 2){
		printf("%, arr[1]");
	} printf("\n")
	return 0;
}
