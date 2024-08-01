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
		fscanf(fbest,"%d",&ary[i]);
	}
	
	start = clock();
	insertionsort(ary,n);
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	
	display(ary,n);
	printf("\nTime Complexity:\n\t%f",cpu_time);
}

void insertionsort(int ary[],int n){
	int i,j,temp,x;
	for(i=0;i<n;i++){
		x = ary[i];
		j = i - 1;
		while(x<ary[j] && j>=0){
			ary[j+1] = ary[j];
			j--;
		}
		ary[j+1] = x;
	}
}

void display(int ary[],int n){
	int i;
	printf("Sorted :\n\n");
	for(i=0;i<n;i++){
		printf("%d ",ary[i]);
	}
}
