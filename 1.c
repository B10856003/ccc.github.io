#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	long long a;
	int i,j,x[20],y,z,num=0;
	do{
		printf("隨機輸入一串大於999的數字:");
		scanf("%lld",&a);	
	}while(a<999);
	for(i=1,j=0;a!=0;i++,j++){
		x[j]=a%10;
		a/=10;
		num+=1;
	}
	for(i=0;i<num;i++){
		if(i==1){
			y=x[i];
		}
		else if(i==(num-2)){
			z=x[i];
		}
	}
	printf("\n%dX%d=%d",z,y,z*y);
	return 0;
}
