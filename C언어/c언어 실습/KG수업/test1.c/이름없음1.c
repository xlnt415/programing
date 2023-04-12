#include <stdio.h>

int main(void){
	
	int A;
	int B;
	int C;
	
	scanf("%d", A);
	scanf("%d", B);
	scanf("%d", C);
	
	printf((A+B)%C);
	printf(((A%C)+(B%C))%C);
	printf((A*B)%C);
	printf(((A%C)*(B%C))%C);
	
	return 0;
}
