#include <stdio.h>
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	int ans = sum(n);
	printf("Answer = %d",ans);
}

int sum(int i){
	if(i>0){
		return i + (sum(i-1));
	}
	else{
		return 0;
	}
}
