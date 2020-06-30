#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct data{
	int id,en,ch;
	float a;
}x,st[150];
int main(int argc, char *argv[]) {
	int i,j;
	float n;
	srand(time(NULL));
	for(i=0;i<150;i++){
		st[i].id=i+1;
		st[i].en=(rand()%11)+90;
		st[i].ch=(rand()%11)+90;
		st[i].a=(st[i].en+st[i].ch)/2.0;
		printf("學號:%d 英文:%d 國文:%d 平均:%.1f\n",st[i].id,st[i].en,st[i].ch,st[i].a);
	}
	bbs();
	printf("-------排序後-------\n");
	show();
	printf("\n");
	do{
		printf("輸入查詢平均:");
		scanf("%f",&n);
		if(n==0)
		break;
		for(j=0;j<150;j++){
			if(st[j].a>n){
				printf("學號:%d 英文:%d 國文:%d 平均:%.1f\n",st[j].id,st[j].en,st[j].ch,st[j].a);
			}
		}
	}while(n!=0);
	return 0;
}
int bbs(){
	int i,j;
	for(i=1;i<150;i++){
		for(j=0;j<(150-i);j++){
			if(st[j].a<st[j+1].a){
				x=st[j];
				st[j]=st[j+1];
				st[j+1]=x;
			}
			else if(st[j].a==st[j+1].a){
				if(st[j].ch<st[j+1].ch){
					x=st[j];
					st[j]=st[j+1];
					st[j+1]=x;	
				}
			}
		}
	}
}
int show(){
	int i;
	for(i=0;i<150;i++){
		printf("學號:%d 英文:%d 國文:%d 平均:%.1f\n",st[i].id,st[i].en,st[i].ch,st[i].a);
	}
}

