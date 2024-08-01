#include <stdio.h>
#include <time.h>
void main(){
		double cpu_time = 0.0;
	clock_t start,end;
	int i;
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	start = clock();
	if(n<1){
		printf("Enter natural number only!");
	}
	else{
		printf("Numbers: ");
		for(i=1;i<=n;i++){
			printf("%d ,",i);
		}
	}
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\nProgram time complexity: %f",cpu_time);
}
