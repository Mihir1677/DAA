#include<stdio.h>
#define n 5
int ary[n],f=-1,r=-1;
 
void main(){
	int check = 1,var,temp,i;
	while(check!=0){
		printf("\n\nEnter 1 to Enqueue\nEnter 2 to Dequeue\nEnter 3 to Display: ");
		scanf("%d",&check);
		if(check==1){
			printf("Enter value to Enqueue: ");
			scanf("%d",&var);
			enqueue(var);
		}
		else if(check==2){
			temp = dequeue();
			printf("\n\tElement : %d",temp);
		}
		else if(check==3){
			display();
		}
		else{
			break;
		}
	}
}

void enqueue(int var){
	if(r>=n){
		printf("\t\t-- Queue Overflow --");
	}
	else{
		r++;
		ary[r] = var;
		
		if(f==-1){
			f = 0;
		}
	}
}

int dequeue(){
	int temp;
	if(f<=-1){
		printf("\t\t-- Queue Underflow --");
		return 0;
	}
	else{
		temp = ary[f];
		f++;
		if(f==r){
			f=-1;
			r=-1;
		}	
	}
	return temp;
}

void display(){
	int i;
	for(i=0;i<=r;i++){
		printf(" %d \t",ary[i]);
	}
}
