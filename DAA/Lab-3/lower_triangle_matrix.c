#include<stdio.h>
void main(){
	int size,size2;
	printf("Enter size of matrix(n*n): ");
	scanf("%d",&size);
	int ary [size][size]; 
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter element: ");
			scanf("%d",&ary[i][j]);
		}
	}
	printf("\nLower Triangle: \n");
	for(i=0;i<size;i++){
		for(j=0;j<=i;j++){
			printf(" %d ",ary[i][j]);
		}
		printf("\n");
	}	
}
