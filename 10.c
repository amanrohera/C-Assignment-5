#include<stdio.h>
void main(){
	int n,arr[10],sum=0,i;
	for(i=0;i<5;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=4;i>=0;i--){
		printf("arr[%d]=%d\n",i,arr[i]);
	}		
}