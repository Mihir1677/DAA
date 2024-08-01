# include<stdio.h>
int main(){
	int n,N,i;
	printf("How many coins you want to enter?: ");
	scanf("%d",&N);
	int ary[N];
	int s[N];
	for(i=0;i<N;i++){
		printf("Enter coin: ");
		scanf("%d",&ary[i]);
	}
	printf("Enter change va+lue: ");
	scanf("%d",&n);
	bubblesort(ary,N);
	int counter = make_A_Change(ary,s,N,n);
	if(counter==0){
		return 0;
	}
	printf("Coins with denominations needed: ");
	for(i=0;i<counter;i++){ 
		printf("%d ",s[i]);
	}
	return 0;
}

int make_A_Change(int ary[],int s[],int N,int n){
	int x=-1,i,counter=0;
	int sum = 0;
	while(sum != n){
		printf("called\n");
		for(i=0;i<N;i++){
			if(sum+ary[i] <= n){
				x = ary[i];
			}
		}
		if(x == -1){
			printf("No solution found!");
			return 0;
		}
		else{
		s[counter] = x;
		counter++; 
		sum = sum + x;
		x = -1;
		}
	}
	return counter;
}

void bubblesort(int ary[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ary[j+1]<ary[j]){
				temp = ary[j];
				ary[j] = ary[j+1];
				ary[j+1] = temp;
			}
		}
	}
}

