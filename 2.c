#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x[5],i;
	printf("請輸入五個數字:");
	scanf("%d %d %d %d %d",&x[0],&x[1],&x[2],&x[3],&x[4]);
	bbs(x);
	for(i=0;i<5;i++){
		printf("%d ",x[i]);
	}
	return 0;
}
int bbs(int x[]){
	int i,j,n;
	for(i=1;i<5;i++){
		for(j=0;j<(5-i);j++){
			if(x[j]>x[j+1]){
				n=x[j];
				x[j]=x[j+1];
				x[j+1]=n;
			}
		}
	}
}
