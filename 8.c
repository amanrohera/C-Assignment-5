#include<stdio.h>
void main(){
	int n,size,arr[10],avg=0,i;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		avg=avg+arr[i];
	}
	printf("The avg is%d",avg/size);
		
}