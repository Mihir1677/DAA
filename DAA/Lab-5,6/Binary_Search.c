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
	
	int N = 100000;
	int i;
	int arr[N];
	for(i=0;i<N;i++){
		fscanf(fbest,"%d",&arr[i]);
	}
	printf("Enter number you want to find: ");
	int m;
	scanf("%d",&m);
	start = clock();
	binarySearch(arr, N, m);
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\n\nTime Complexity:\n\t%f",cpu_time);
}

int binarySearch(int arr[],int n, int m){
	if(m>arr[n-1]){
		printf("\n\tData not found!");
		return 0;
	}
	int i=1;
	int j=n;
	int k;
	while(i<j){
		k = (i+j)/2;
		if(m<=arr[k]){
			j = k;
		}
		else{
			i = k + 1;
		}
	}
	printf("\n\t%d found at index of %d",m,i+1);
	return 0;
}
	
