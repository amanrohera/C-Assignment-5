#include<stdio.h>
void main(){
	int n,size,arr[10],sum=0,i;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		sum=sum+arr[i];
	}
	printf("The avg is%d",sum);
		
}