//Take an array of 10 elements randomly unsorted. 
//Implement the sorting which checks adjustment two elements and swaps them if needed and perform this sorting for one external loop iteration. 
//Then take that intermidiate array and pass it to a sorting function which performes worst when the array is sorted.

#include<stdio.h>
int partition(int arr[], int low, int high){
	int pivot=arr[high];
	int i = (low-1);
	for(int j = low; j<high; j++){
		if(arr[j]<=pivot){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp=arr[i+1];
	arr[i+1]=arr[high];
	arr[high]=temp;
	return (i+1);
}
void quicksort(int arr[], int low, int high){
	if(low<high){
		int pi = partition(arr, low , high);
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
void bubblesort(int array[],int size){
	for(int step=0;step<size-1;step++){
		for(int i=0;i<size-step-1;i++){
			if(array[i]>array[i+1]){
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
		printf("\n Internal array : \n");
		for(int i = 0;i<size;i++){
			printf(" %d", array[i]);
		}
		printf("\n");
		
		quicksort(array,0,size-1);
		break;
	}
}


int main() {
    int array[11] = {4 , 7 , 5 , 9 , 1 , 0, 3 , 8 , 2 , 5, 6};
    int size = 11;
    printf("Unsorted Array : \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    bubblesort(array, size);
    printf("\nFinal Sorted Array (After Quicksort):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}













