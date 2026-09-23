 //Implement selection sort
#include<stdio.h>
void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;
    int swap=1;
    for (i = 0; i < size - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
                swap++;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        if(swap==0)
        break;
    }
}
int main(){
	int arr[]={7,4,9,2,3,5,1,6};
	int size=sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr,size);
	printf("sorted array :\n ");
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}