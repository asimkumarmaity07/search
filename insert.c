//Implement insertion sort
#include<stdio.h>
void insertsort(int array[],int size){
	for(int step=1;step<size;step++){
		int key=array[step];
		int j=step-1;
		while(j>=0 && key<array[j]){
			array[j+1]=array[j];
			--j;
		}
		array[j+1]=key;
	}
}
int main(){
	int arr[]={7,4,9,2,3,5,1,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	insertsort(arr,size);
	printf("sorted array :\n ");
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}