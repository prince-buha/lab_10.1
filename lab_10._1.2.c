#include<stdio.h>
void labwork(){
	int n;
	printf("enter your number");
	scanf("%d",&n);
	if(n/3== 0 && n/5== 0){
		printf("This number is divisible by 3 & 5");
	}
	else{
		printf("This Number Is Not Divisible by 3 & 5");
	}
}
void main(){
	labwork();
}
