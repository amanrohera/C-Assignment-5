#include<stdio.h>
void main(){
	int n,size,arr1[10],arr2[10],arr[10],sum=0,i;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		printf("Enter the number for second array");
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<size;i++){
		arr2[i]=arr[i]+arr1[i];
	}
	for(i=0;i<size;i++){
		printf("The arr[%d] is %d\n",i,arr2[i]);
	}
}