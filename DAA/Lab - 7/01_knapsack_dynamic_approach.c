#include<stdio.h>

int main(){
	int n,i,weight,W;
	printf("How many objects you want to enter? : ");
	scanf("%d",&n);
	int aryvalue[n];
	int aryweight[n];
	int v[n][n];
	printf("\nEnter values");
	for(i=0;i<n;i++){
		printf("Enter value %d",i);
		scanf("%d",&aryvalue[i]);
	}
	printf("\nEnter weights: ");
	for(i=0;i<n;i++){
		printf("Enter weight %d",i);
		scanf("%d",&aryweight[i]);
	}
	printf("\nEnter weight carrying capacity: ");
	scanf("%d",&W);
	Fractional_Knapsack(aryvalue,aryweight,v,n,W);
	printdata(v,n);
}

void Fractional_Knapsack(int aryvalue[], int aryweight[], int v[][], int n, int W){
	int i,j,weight=0;
	
	for(i=0;i<n;i++){
		v[i][0] = 0;
	}
	
	for(j=0;i<n;j++){
		if(j==0){
			continue;
		}
		if(j<aryweight[j]){
			v[j][j] = v[j-1][j];
		}
		if(j>=aryweight[j]){
			v[j][j] = max(v[j-1][j],v[j-1][j-aryweight[j]]+aryvalue[j]);
		}
	}
}

int max(int a, int b){
	return (a>b)? a :b;
}

void printdata(int v[][],int n){
	int i;
	printf("\n\nPrint\n")
	for(i=0;i<n;i++){
		printf("%d",v[i][0]);
	}
}
