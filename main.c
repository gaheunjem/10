#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void swap (int x, int y){ // 사본 넘겨줌 
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void swap2 (int *x, int *y){ // 포인터 넘겨줌 -> 포인터가 가르키는 걸 바꿔줌 
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(int argc, char *argv[]) {
	
	int a = 3;
	int b = 5;
	swap(a,b); // pointer (x)
	printf("a : %d, b : %d\n", a, b);
	
	int c = 3;	 
	int d = 5;
	
	swap2(&c, &d); // pointer (o)
	printf("c : %d, d : %d\n", c, d);
	
	return 0;
}
