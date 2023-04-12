#include <stdio.h>

int main(void){
	int num1; int num2;
	char ch1; char ch2;
	// 1. 예방방법 : 서식문자를 섞어서 입력받지 않는다.
	printf("정수2개, 실수2개 입력 >> ");
	//scanf("%d%d%c%c", &num1, %num2, &ch1, 1, &ch2, 1); 이러면 안 됨
	
	scanf("%d%d", &num1, &num2);
	//2.문자를 입력받을 경우, 앞에 띄어쓰기 한 칸을 넣어준다. 
	scanf(" %c %c", &ch1, 1 &ch2, 1);
	printf(" %d %d %c %c\n", num1, num2, ch1, ch2);
	
	 // 해결방법
	 // rewind(stdin) : vs2016이후 버전 
	 // fflush(stdin) : 이전버전 또는 다른 환경
	 fflush(stdin); // 임시공간에 저장된 것들을 모두 제거 
	 char word[100];
	 printf("문장 입력 >>");
	 gets(word, 100); // 원본 
	 printf("결과 : %s\n",word); 
	return 0;
}
