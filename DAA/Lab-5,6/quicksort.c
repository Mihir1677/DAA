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
	int ary[n];
	for(i=0;i<n;i++){
		fscanf(fworst,"%d",&ary[i]);
	}
	
	start = clock();
	quick_sort(ary,0,n-1);
	end = clock();
	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
	display(ary,n);
	printf("\nTime Complexity:\n\t%f",cpu_time);
}

void quick_sort(int a[],int lb,int ub)
{
	 int i,j,pivot,temp;
	 
	if(lb<ub)
	{
		pivot = lb;
		i = lb;
		j = ub;
		
		while(i<j)
		{
			while(a[i]<=a[pivot] && i<ub)
			{
				i++;
			}
			while(a[j]>a[pivot])
			{
				j--;
			}
			if (i<j)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		temp = a[pivot];
		a[pivot] = a[j];
		a[j]= temp; 
		
	quick_sort(a,lb,j-1);
	quick_sort(a,j+1,ub);
	}	
}

void display(int ary[],int n){
	int i;
	printf("Sorted :\n\n");
	for(i=0;i<n;i++){
		printf("%d ",ary[i]);
	}
}
//#include <stdio.h>
//#include <time.h>
//void main(){
//FILE *fbest,*favg,*fworst;
//	fbest = fopen("Best_Case_Data.txt","r");
//	favg = fopen("Average_Case_Data.txt","r");
//	fworst = fopen("Worst_Case_Data.txt","r");
//	
//	double cpu_time = 0.0;
//	clock_t start,end;
//	
//	int n = 100000;
//	int i;
//	int ary[n];
//	for(i=0;i<n;i++){
//		fscanf(favg,"%d",&ary[i]);
//	}
//	
//	start = clock();
//	quickSort(ary,n);
//	end = clock();
//	cpu_time = (double)(end-start)/CLOCKS_PER_SEC;
//	
//	display(ary,n);
//	printf("\nTime Complexity:\n\t%f",cpu_time);
//}
//
//void quickSort(int ary[], int n){
//	pivot(ary,n);
////	quickSort(ary[]);
//}
//
//void pivot(int ary[],int n){
//	int p = ary[0];
//	int k = 0;
//	int l = ary[n];
//	while(ary[k]>p || k>=n){	
//		k++;
//	}
//	while(ary[l]<=p){
//		l--;
//	}
//		
//	while(k<l){
//		swap(ary,k,l);
//		while(ary[k]>p){
//			k++;
//		}
//		while(ary[l]<=p){
//			l--;	
//		}
//	}
//	swap(ary,0,n);
//}
//
//void swap(int ary[], int i, int j){
//	int temp = ary[i];
//	ary[i] = ary[j];
//	ary[j] = temp;
//}
//
//void display(int ary[],int n){
//	int i;
//	printf("Sorted :\n\n");
//	for(i=0;i<n;i++){
//		printf("%d ",ary[i]);
//	}
//}
