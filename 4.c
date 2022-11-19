#include<stdio.h>
void main(){
	int n,size,arr[10],i;
	printf("Enter the size");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]%2==1){
			printf("%d\n",arr[i]);
		}
	}
		
}