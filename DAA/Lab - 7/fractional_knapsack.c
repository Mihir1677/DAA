#include<stdio.h>

int main(){
	int n,i,weight;
	printf("How many objects you want to enter? : ");
	scanf("%d",&n);
	int ary[n][n];
	float profit[n];
	printf("\nEnter values");
	for(i=0;i<n;i++){
		printf("Enter value %d",i);
		scanf("%d",&ary[i][0]);
	}
	printf("\nEnter weights: ");
	for(i=0;i<n;i++){
		printf("Enter weight %d",i);
		scanf("%d",&ary[0][i]);
	}
	printf("\nEnter weight carrying capacity: ");
	scanf("%d",&W);
	
}

void Fractional_Knapsack(int ary[][], float profit, int n, int W){
	int i,weight=0;
	for(i=0;i<n;i++){
		profit[i] = 0;
	}
	
}
