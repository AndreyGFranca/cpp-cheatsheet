#include <stdio.h>
#include <omp.h>

int main(){
	FILE *a = fopen("a.txt", "w");
	int b = 0;
	#pragma omp parallel for firstprivate (a) private(b)
	for(int i = 0; i < 100; i++){
		b+=10;
		printf("%d  ", b);
	}	
}
