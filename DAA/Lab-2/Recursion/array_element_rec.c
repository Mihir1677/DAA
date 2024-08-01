#include <stdio.h>

void main(){
	int n;
	int i;
	printf("Enter size of the array: ");
	scanf("%d",&n);
	int ary[n];
	for(i=0;i<n;i++){
		printf("Enter element: ");
		scanf("%d",&ary[i]);
	}
	elements(ary,n,0);
}

int elements(int ary[],int n,int i){
	if(i<n){
		printf("%d ",ary[i]);
		return elements(ary,n,i+1);
	}
	else{
		return 0;
	}
}
