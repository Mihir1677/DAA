#include <stdio.h>
#include <time.h>
void main(){
	FILE *fbest,*favg,*fworst;
	fbest = fopen("Best_Case_Data.txt","r");
	favg = fopen("Average_Case_Data.txt","r");
	fworst = fopen("Worst_Case_Data.txt","r");
	
	double cpu_time = 0.0;
	clock_t start,end;
	
	int n = 100000;
	int i;
	int ary[n];
	for(i=0;i<n;i++){
		fscanf(fworst,"%d",&ary[i]);
	}
	
	start = clock();
	bubblesort(ary,n);
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	
	display(ary,n);
	printf("\nTime Complexity:\n\t%f",cpu_time);
}

void bubblesort(int ary[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ary[j+1]<ary[j]){
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}

void display(int ary[],int n){
	int i;
	printf("Sorted :\n\n");
	for(i=0;i<n;i++){
		printf("%d ",ary[i]);
	}
}
