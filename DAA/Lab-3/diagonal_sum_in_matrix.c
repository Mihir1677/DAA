#include<stdio.h>
void main(){
	int size,size2;
	printf("Enter size of matrix(n*m): ");
	scanf("%d",&size);
	int ary [size][size]; 
	int i,j;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter element: ");
			scanf("%d",&ary[i][j]);
		}
	}
	int sum=0;
	i=0,j=0;
	while(i!=size && j!=size){
		sum = sum + ary[i][j];
		i++;
		j++;
	}
	printf("Sum of diagonal elements = %d",sum);
}
