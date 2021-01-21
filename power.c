#include<stdio.h>
#include<conio.h>
#include<math.h>
 void main(){
	int n,e,i,power=1;
		printf("Enter First Number :");
		scanf("%d",&n);
		printf("Enter Second Number :");
		scanf("%d",&e);
			for(i=1;i<=e;i++){
				power=power*n;
				printf("\n Power Of The Number is %d power %d=%d ", n,e,power);
			}
				
 }			
