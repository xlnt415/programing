#include <stdio.h>

int main(void){
	int arr[15];
	int size = sizeof(arr) / sizeof(int); 
	/*위 배열에 15부터 1씩 감소하는 값을 0번부터 채워서 저장하고
	저장된 값을 출력합니다*/
	for (int i = 0; i < size; i++){
		arr[i] = size - i;
	}
	//1) 첫번째 값과 마지막 값을 출력
	printf("%d %d\n", arr[0], arr[size -1]);
	
	
	//2) 홀수번째의 값을 출력
	for (int i = 0; i < size; i += 2){
		printf("%d", arr[i]);
	}printf("\n");
	
	//3) 짝수번쨰의 값을 출력 
	for (int i = 1; i < size; i += 2){
		printf("%, arr[1]");
	} printf("\n")
	return 0;
}
