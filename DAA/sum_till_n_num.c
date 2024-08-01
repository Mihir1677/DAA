#include <stdio.h>
#include <time.h>
void main(){
	double cpu_time = 0.0;
	clock_t start,end;
	int n=0;
	int ans=0;
	int i;
	printf("Enter number to print sum till it: ");
	scanf("%d",&n);
	start = clock();
	for(i=0;i<=n;i++){
		ans = ans + i;
	}
	end = clock();
	printf("Answer = %d",ans);
	printf("\nProgram time complexity: %f",cpu_time);
}
