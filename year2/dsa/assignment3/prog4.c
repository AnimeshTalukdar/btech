#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int array[], int n) {
int i, key, j,k;
for (i = 1; i < n; i++) {
key = array[i];
j = i - 1;


while (j >= 0 && array[j] > key) {
array[j + 1] = array[j];
j = j - 1;
}
array[j + 1] = key;

int k;
for (k = 0; k < n; k++) {
printf("%d ", array[k]);
}
printf("\n");
}
}

void selection_sort(int array[], int n) {
int i, j, min_idx, temp;
for (i = 0; i < n-1; i++) {
min_idx = i;
for (j = i+1; j < n; j++) {
if (array[j] < array[min_idx]) {
min_idx = j;
}
}
temp = array[min_idx];
array[min_idx] = array[i];
array[i] = temp;

int k;
for (k = 0; k < n; k++) {
printf("%d ", array[k]);
}
printf("\n");
}
}

void bubbleSort(int arr[], int n)
{
int i, j, temp;
for (i = 0; i < n-1; i++) {
for (j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j+1]) {
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
int k;
for (k = 0; k < n; k++) {
printf("%d ", arr[k]);
}
printf("\n");
}
}



void printArray(int arr[], int size) {
int i;
for (i=0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}

int partition (int arr[], int low, int high,int n) {
int pivot = arr[high];   
int i = (low - 1);  
int temp,j;
for (j = low; j <= high- 1; j++) {

if (arr[j] <= pivot) {
i++;    

temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
temp = arr[i + 1];
arr[i + 1] = arr[high];
arr[high] = temp;
printArray(arr, n);
return (i + 1);
}

void quickSort(int arr[], int low, int high,int n) {
if (low < high) {
int pi = partition(arr, low, high,n);
quickSort(arr, low, pi - 1,n);
quickSort(arr, pi + 1, high,n);
}
}



void merge(int arr[], int l, int m, int r,int arr1[],int nk) {
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;

int L[n1], R[n2];

for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];

i = 0; 
j = 0; 
k = l; 
while (i < n1 && j < n2) {
if (L[i] <= R[j]) {
arr[k] = L[i];
i++;
} else {
arr[k] = R[j];
j++;
}
k++;
}

while (i < n1) {
arr[k] = L[i];
i++;
k++;
}

while (j < n2) {
arr[k] = R[j];
j++;
k++;
}
printArray(arr1,nk); 
}


void mergeSort(int arr[], int l, int r,int arr1[],int nk) {
if (l < r) {

int m = l+(r-l)/2;


mergeSort(arr, l, m,arr1, nk);
mergeSort(arr, m+1, r,arr1,nk);

merge(arr, l, m, r,arr1,nk);
}
}




void heapify(int arr[], int n, int i) {
int largest = i;  
int l = 2*i + 1;  
int r = 2*i + 2;  


if (l < n && arr[l] > arr[largest])
largest = l;


if (r < n && arr[r] > arr[largest])
largest = r;


if (largest != i) {
int swap = arr[i];
arr[i] = arr[largest];
arr[largest] = swap;


heapify(arr, n, largest);
}
}



void heapSort(int arr[], int n) {
int i;


for (i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);


for (i = n - 1; i >= 0; i--) {
int temp = arr[0];
arr[0] = arr[i];
arr[i] = temp;

heapify(arr, i, 0);
printArray(arr, n); 
}
}





int main(){
int n,i,choice;
printf("Enter the number of elements.\n");
scanf("%d",&n);
int arr[n];
printf("Enter the elements.\n");
for ( i = 0; i < n; i++)
{
scanf("%d",&arr[i]);
}
int arr1[n];
for(i=0;i<n;i++)
arr1[i]=arr[i];
while(1)
{
printf("\n1.Insertion sort.\n");
printf("2.Selection sort.\n");
printf("3.Bubble sort.\n");
printf("4.Quick sort.\n");
printf("5.Merge sort.\n");
printf("6.Heap sort.\n");
printf("7.Quit.\n");
printf("\nEnter your choice.\n");
scanf("%d",&choice);
if(choice!=7){
printf("\nInitial Array:\n");
printArray(arr,n);
}
switch (choice)
{
case 1:
printf("\nInsertion Sort:\n");
insertion_sort(arr,n);
printf("Sorted Array :\n");
printArray(arr,n);
//printArray(arr1,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 2:
printf("\nSelection Sort:\n");
selection_sort(arr,n);
printf("Sorted Array:\n");
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 3:
printf("\nBubble Sort:\n");
bubbleSort(arr, n);
printf("Sorted Array :\n");
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 4:
printf("\nQuick Sort:\n");
quickSort(arr, 0, n-1,n);
printf("Sorted Array :\n");
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 5:
printf("\nMerge Sort:\n");
mergeSort(arr,0,n-1,arr,n);
printf("Sorted Array :\n");
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 6:
printf("\nHeap Sort:\n");
heapSort(arr,n);
printf("Sorted Array :\n");
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 7:
printf("Exitting....\n");
exit(0);
break;

default:
printf("Wrong Input......\n");
break;
}
}

return 0;
}
