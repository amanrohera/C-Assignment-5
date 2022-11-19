#include<stdio.h>
void main(){
	int n,size,arr[10],ele,i,flag=0;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	printf("Enter the number want to search");
	scanf("%d",&ele);
	for(i=0;i<size;i++){
		if(arr[i]==ele){
		flag=1;
		}
	}
	if(flag==1){
		printf("Element found");
		
	}
	else{
		printf("Element is not found");
	}
		
	}
	
		
