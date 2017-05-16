#include <stdio.h>


void _gugudan();
void main() {
	_gugudan();
	printf("Hello GIT!");

	return;
}
void _gugudan(){
	int i, j;

	for (i = 1; i < 10; i++){
		for (j = 1; j < 10; j++){
			printf("%d*%d=%d\n", j, i, i*j);
		}
	}
}