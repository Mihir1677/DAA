#include <stdio.h>
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	int ans = factorial(n);
	printf("Answer = %d",ans);
}

int factorial(int i){
	if(i>0){
		return i * (factorial(i-1));
	}
	else{
		return 1;
	}
}
