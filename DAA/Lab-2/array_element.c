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
	printf("\nElements:\n");
	for(i=0;i<n;i++){
		printf("%d ",ary[i]);
	}
}
