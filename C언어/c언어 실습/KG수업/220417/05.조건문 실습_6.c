#include <stdio.h>

int main(void){
	//while : if 단독사용의 연장선에 있음.
	//한번실행(if) vs 여러번실행(while)
	//사용법1) 무한반복 : 몇번할지 모름. 끝나긴 끝남.
	int num;
	printf("0보다 큰 양수 입력 >>") ;
	scanf("%d", &num);
	//입력을 할 때 원하는 값을 입력하도록 사용자에게 강요한다.
	//->원하는 값이 무조건 들어온다는 보장이 된다. 
	while (num <= 0) {
		printf("다시 입력하세요 >>");
		scanf("%d", &num);
	}
	printf("양수 : %d\n, num");
	return 0;
}
