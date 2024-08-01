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
		fscanf(fworst,"%d",&arr[i]);
	}
	start = clock();
	heapSort(arr, N);
	end = clock();
	printf("Sorted array is\n");
	printArray(arr, N);
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	printf("\nTime Complexity:\n\t%f",cpu_time);
}
void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void heapify(int arr[], int N, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	if (left<N &&arr[left]>arr[largest])
		largest = left;
	if (right<N&& arr[right]>arr[largest])
		largest = right;
	if (largest!=i) {
		swap(&arr[i], &arr[largest]);
		heapify(arr, N, largest);
	}
}
void heapSort(int arr[], int N)
{
	int i;
	for (i=N/2-1;i>=0;i--)
		heapify(arr, N, i);
	for (i=N-1;i>=0;i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}
void printArray(int arr[], int N)
{
	int i;
	for (i=0;i<N;i++)
		printf("%d ", arr[i]);
	printf("\n");
}
//void main(){
//	FILE *fbest,*favg,*fworst;
//	fbest = fopen("Best_Case_Data.txt","r");
//	favg = fopen("Average_Case_Data.txt","r");
//	fworst = fopen("Worst_Case_Data.txt","r");
//	double cpu_time = 0.0;
//	clock_t start,end;
//	
//	int n = 100000;
//	int i;
//	int ary[n];
//	for(i=0;i<n;i++){
//		fscanf(fworst,"%d",&ary[i]);
//	}
//	Heap_Sort(ary,n);
//}
//
//void Heap_Sort(int ary[],int n){
//	int i,temp,heap_size[n];
//	for(i=0;i<=n;i!=2){
//		temp = ary[i];
//		ary[i] = ary[1];
//		ary[1] = temp;
//		heap_size[ary] = heap_size[ary] - 1;
//	}
//}
//void Max_Heapify(){
//	
//}
