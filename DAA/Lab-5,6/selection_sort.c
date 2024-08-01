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
	selectionsort(ary,n);
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	
	display(ary,n);
	printf("\nTime Complexity:\n\t%f",cpu_time);
}

void selectionsort(int ary[],int n){
	int i,j,temp,minj,minx;
	for(i=0;i<n-1;i++){
		minj = i;
		minx = ary[i];
		for(j=i+1;j<n;j++){
			if(ary[j] < minx){
				minj = j;
				minx = ary[j];
			}
			ary[minj] = ary[i];
			ary[i] = minx;
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
