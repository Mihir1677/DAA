#include<stdio.h>
void main(){
	int size,size2;
	printf("Enter size of matrix(n*n): ");
	scanf("%d",&size);
	int ary [size][size]; 
	int i,j,max;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("Enter element: ");
			scanf("%d",&ary[i][j]);
			if(i==0 && j==0){
				max = ary[i][j];
			}
			else if(max<ary[i][j]){
				max = ary[i][j];
			}
		}
	}
	printf("Maximum  Element = %d",max);
}
