#include <stdio.h>
void main(){
	int x,y;
	printf("Enter Base: ");
	scanf("%d",&x);
	printf("Enter Power: ");
	scanf("%d",&y);
	int ans = 1;
	int i;
	for(i=0;i<y;i++){
		ans = ans * x; 
	}
	printf("Answer = %d",ans);
}
