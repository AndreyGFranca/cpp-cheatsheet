#include <stdio.h>
#include <omp.h>

int main(){
	int Q = 100;
	int a[Q], b[Q];
	#pragma omp parallel for
	for(int i = 0; i < Q; i++){
		a[i] = i;
		b[i] = a[i] + 10;
		printf("Thread %d executa a iteração %d do loop\n", omp_get_thread_num(), i);
	}

	printf("asdfasf = %d\n", sizeof(int));
	for (size_t i = 0; i < Q; i++) {
		printf("%d, ", a[i]);
		printf("%d\n", b[i]);
	}
}
