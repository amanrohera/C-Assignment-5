#include<stdio.h>
void main(){
	int n,size,arr[10],i,count=0;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]%2==1){
			count=count+1;
		}
	}
	printf("Total number of odd numbers are:%d",count);
		
}