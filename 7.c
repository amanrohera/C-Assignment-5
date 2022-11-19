#include<stdio.h>
void main(){
	int n,size,arr1[10],arr[10],i;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		arr1[i]=arr[i];
		printf("arr1[%d]=%d\n",i,arr[i]);
	
	}
		
}