#include<stdio.h>
void main(){
	int size,size2;
	printf("Enter size n of matrix(n*m): ");
	scanf("%d",&size);
	printf("Enter size m of matrix(n*m): ");
	scanf("%d",&size2);
	int ary [size2][size]; 
	int i,j;
	for(i=0;i<size2;i++){
		for(j=0;j<size;j++){
			printf("Enter element: ");
			scanf("%d",&ary[i][j]);
		}
	}
	printf("\nTranspose: \n");
	for(i=0;i<size2;i++){
		for(j=0;j<size;j++){
			printf(" %d ",ary[i][j]);
		}
		printf("\n");
	}
}
