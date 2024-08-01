#include<stdio.h>
#define n 5
int ary[n],top=-1;
 
void main(){
	int check = 1,var,temp,i;
	while(check!=0){
		printf("\n\nEnter 1 to PUSH\nEnter 2 to POP\nEnter 3 to PEEP\nEnter 4 to Display\nEnter 5 to CHANGE\nEnter 0 to exit: ");
		scanf("%d",&check);
		if(check==1){
			printf("Enter value to PUSH: ");
			scanf("%d",&var);
			push(var);
		}
		else if(check==2){
			temp = pop();
			printf("\n\tElement popped: %d",temp);
		}
		else if(check==3){
			printf("\nEnter index to PEEP it: ");
			scanf("%d",&i);
			temp = peep(i);
			printf("\n\tPEEP Element: %d",temp);
		}
		else if(check==4){
			printf("Elements:\n");
			display();
		}
		else if(check==5){
			printf("\nEnter index for change: ");
			scanf("%d",&i);
			printf("\nEnter new value: ");
			scanf("%d",&var);
			change(i,var);
		}
		else{
			break;
		}
	}
}

void push(int var){
	if(top>4){
		printf("\t\t-- Stack Overflow --");
	}
	else{
		top++;
		ary[top] = var;
		printf("\nValue added");
	}
}

int pop(){
	if(top<=-1){
		printf("\t\t-- Stack Underflow --");
		return 0;
	}
	else{
		int temp = ary[top];
		ary[top]=0;
		top--;
		return temp;
	}
}

int peep(int i){
	if(top-i+1<=-1){
		printf("\t\t-- Stack Underflow -- ");
		return 0;
	}
	else{
		return ary[top-i+1];
	}
}

void display(){
	int i;
	for(i=0;i<=top;i++){
		printf(" %d \t",ary[i]);
	}
}

void change(int i,int var){
	if(top-1+1<=-1){
		printf("\t\t--Stack Underflow --");
	}
	else{
		ary[top-i+1] = var;
		printf("\tElement Changed");
	}
}
