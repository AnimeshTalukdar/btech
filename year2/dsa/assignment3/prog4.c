#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int array[], int n) {
int i, key, j;
for (i = 1; i < n; i++) {
key = array[i];
j = i - 1;

/* Move elements of array[0..i-1], that are
greater than key, to one position ahead
of their current position */
while (j >= 0 && array[j] > key) {
array[j + 1] = array[j];
j = j - 1;
}
array[j + 1] = key;

// print array after each pass
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

// print array after each pass
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
// Display output after each pass
for (int k = 0; k < n; k++) {
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

int partition (int arr[], int low, int high) {
int pivot = arr[high];    // pivot
int i = (low - 1);  // Index of smaller element
int temp;
for (int j = low; j <= high- 1; j++) {
// If current element is smaller than or
// equal to pivot
if (arr[j] <= pivot) {
i++;    // increment index of smaller element
// swap arr[i] and arr[j]
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
// swap arr[i + 1] and arr[high]
temp = arr[i + 1];
arr[i + 1] = arr[high];
arr[high] = temp;
printArray(arr, high+1); // print array after each partition
return (i + 1);
}

void quickSort(int arr[], int low, int high) {
if (low < high) {
/* pi is partitioning index, arr[p] is now
at right place */
int pi = partition(arr, low, high);
// Separately sort elements before
// partition and after partition
quickSort(arr, low, pi - 1);
quickSort(arr, pi + 1, high);
}
}



void merge(int arr[], int l, int m, int r) {
int i, j, k;
int n1 = m - l + 1;
int n2 = r - m;

/* create temp arrays */
int L[n1], R[n2];

/* Copy data to temp arrays L[] and R[] */
for (i = 0; i < n1; i++)
L[i] = arr[l + i];
for (j = 0; j < n2; j++)
R[j] = arr[m + 1+ j];

/* Merge the temp arrays back into arr[l..r]*/
i = 0; // Initial index of first subarray
j = 0; // Initial index of second subarray
k = l; // Initial index of merged subarray
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

/* Copy the remaining elements of L[], if there
are any */
while (i < n1) {
arr[k] = L[i];
i++;
k++;
}

/* Copy the remaining elements of R[], if there
are any */
while (j < n2) {
arr[k] = R[j];
j++;
k++;
}
printArray(arr, r+1); // print array after each merge step
}


/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) {
if (l < r) {
// Same as (l+r)/2, but avoids overflow for
// large l and h
int m = l+(r-l)/2;

// Sort first and second halves
mergeSort(arr, l, m);
mergeSort(arr, m+1, r);

merge(arr, l, m, r);
}
}





// To heapify a subtree rooted with node i which is
// an index in arr[]. n is size of heap
void heapify(int arr[], int n, int i) {
int largest = i;  // Initialize largest as root
int l = 2*i + 1;  // left = 2*i + 1
int r = 2*i + 2;  // right = 2*i + 2

// If left child is larger than root
if (l < n && arr[l] > arr[largest])
largest = l;

// If right child is larger than largest so far
if (r < n && arr[r] > arr[largest])
largest = r;

// If largest is not root
if (largest != i) {
int swap = arr[i];
arr[i] = arr[largest];
arr[largest] = swap;

// Recursively heapify the affected sub-tree
heapify(arr, n, largest);
}
}


// main function to do heap sort
void heapSort(int arr[], int n) {
int i;

// Build heap (rearrange array)
for (i = n / 2 - 1; i >= 0; i--)
heapify(arr, n, i);

// One by one extract an element from heap
for (i = n - 1; i >= 0; i--) {
// Move current root to end
int temp = arr[0];
arr[0] = arr[i];
arr[i] = temp;

// call max heapify on the reduced heap
heapify(arr, i, 0);
printArray(arr, n); //print array after each pass
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

switch (choice)
{
case 1:
insertion_sort(arr,n);
printf("Insertion sort :\n");
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 2:
selection_sort(arr,n);
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 3:
bubbleSort(arr, n);
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 4:
quickSort(arr, 0, n-1);
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 5:
mergeSort(arr,0,n-1);
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 6:
heapSort(arr,n);
printArray(arr,n);
for(i=0;i<n;i++)
arr[i]=arr1[i];
break;

case 7:
printf("Exitting....");
exit(1);
break;

default:
break;
}
}

return 0;
}
