#include<stdio.h>
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	int count;
	if(n==0){
			count++;
	}
	else{
	while(n!=0){
		n = n/10;
		count++;
	}
}
	printf("Total digits of given number: %d",count);
}
