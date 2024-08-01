#include <stdio.h>
void main(){
	int x,y;
	printf("Enter Base: ");
	scanf("%d",&x);
	printf("Enter Power: ");
	scanf("%d",&y);
	int ans = power(x,y);
	printf("Answer = %d",ans);
}

int power(int x,int y){
	if(y>0){
		return x*power(x,y-1);
	}
	else{
		return 1;
	}
}
