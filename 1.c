#include<stdio.h>
void main(){
	int arr[10],n,size=0,i;
	printf("Enter the size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}