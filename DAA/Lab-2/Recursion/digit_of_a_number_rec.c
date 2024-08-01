#include<stdio.h>
void main(){
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	int ans = digits(n,0);
	printf("%d",ans);
}

int digits(int n,int count){
	if(n!=0){
		return digits(n/10,count+1);
	}
	return count;	
}
