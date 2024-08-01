#include <stdio.h>
#include <time.h>

int main()
{
	FILE *fbest,*favg,*fworst;
	fbest = fopen("Best_Case_Data.txt","r");
	favg = fopen("Average_Case_Data.txt","r");
	fworst = fopen("Worst_Case_Data.txt","r");
	
	double cpu_time = 0.0;
	clock_t start,end;
	
	int N = 6;
	int i;
	int arr[6] = {5,9,18,24,7,15};
//	for(i=0;i<N;i++){
//		fscanf(favg,"%d",&arr[i]);
//	}
	start = clock();
	heapSort(arr, N);
	end = clock();
//	printf("Sorted array is\n");
//	printArray(arr, N);
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\nTime Complexity:\n\t%f",cpu_time);
}

void heapSort(int arr[],int n){
	printf("%d",(n/2)-1);
}
