/*作成者:*/
/*課題名:課題09_1*/
//1回目
//2回目


#include<stdio.h>
int fibonacci(int);

void main(void){
	int i,k;
	printf("フィボナッチ数列の何番目の値を求めますか(0以上):");
	scanf("%d",&i);
	while(i<0){
		printf("0以上の数値を入力してください:");
		scanf("%d",&i);
	}
	k=fibonacci(i);
	printf("フィボナッチ数列F(%d)の値は%dです\n",i,k);
}
int fibonacci(int i){
	if(i<=0){
		return 0;
	}else if(i==1){
		return 1;
	}else{
		return(fibonacci(i-2)+fibonacci(i-1));
	}
}