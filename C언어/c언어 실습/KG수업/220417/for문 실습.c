#include <stdio.h>

int main(void){
	int count;
	printf("출력할 횟수 입력");
	scanf("%d", &count);
	if (count <= 0) printf("안나옵니다.\n");
	else {
		for (int i = 1;i<= count;i += 1) {
			printf("C Language is simple");
	}

	}	
	return 0;
}
