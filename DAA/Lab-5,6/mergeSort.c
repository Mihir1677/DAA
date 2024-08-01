#include <stdio.h>
#include <time.h>
void main(){
FILE *fbest,*favg,*fworst;
	fbest = fopen("Best_Case_Data.txt","r");
	favg = fopen("Average_Case_Data.txt","r");
	fworst = fopen("Worst_Case_Data.txt","r");
	
	double cpu_time = 0.0;
	clock_t start,end;
	
	int n = 10000;
	int i;
	int arr_size = n;
	int arr[n];
	for(i=0;i<n;i++){
		fscanf(fworst,"%d",&arr[i]);
	}
	
	start = clock();
	mergeSort(arr, 0, arr_size - 1);
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	display(arr,n);
	printf("\nTime Complexity:\n\t%f",cpu_time);
}

void mergeSort(int arr[],int l,int r) 
{ 
	if(l<r){ 
		int m = l + (r - l) / 2; 
		mergeSort(arr,l, m); 
		mergeSort(arr,m + 1,r); 
		merge(arr,l,m,r); 
	} 
} 

void display(int ary[],int n){
	int i;
	printf("Sorted :\n\n");
	for(i=0;i<n;i++){
		printf("%d ",ary[i]);
	}
}

void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 
	int L[n1], R[n2]; 
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1 + j]; 
	i = 0; 
	j = 0;
	k = l; 
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
			arr[k] = L[i]; 
			i++; 
		} 
		else { 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 
	while (i < n1) { 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	while (j < n2) { 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
