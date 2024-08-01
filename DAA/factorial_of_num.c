#include <stdio.h>
#include <time.h>
void main(){
	double cpu_time = 0.0;
	clock_t start,end;
	int n=0;
	int i;
	int ans=1;
	printf("Enter number for it's factorial: ");
	scanf("%d",&n);
	start = clock();
	for(i=n;i>=1;i--){
 		ans = ans * i;
	}
	end = clock();
	printf("Answer = %d",ans);
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\nProgram time complexity: %f",cpu_time);
}
