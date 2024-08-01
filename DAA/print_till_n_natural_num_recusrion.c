#include <stdio.h>
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printnum(n);
}

int printnum(int i){
	if(i>0){
		printf("%d ",i);
		return (printnum(i-1));
	}
	else{
		return 0;
	}
}
