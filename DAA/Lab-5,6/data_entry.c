#include <stdio.h>

void main(){
	FILE *f_best,*f_avg,*f_worst;
	f_avg = fopen("Worst_Case_Data.txt","w");
	int i;
	for(i=1;i<=100000;i++){
		fprintf(f_avg,"%d\n",100000-i);
	}
}
