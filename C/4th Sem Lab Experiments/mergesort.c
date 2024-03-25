#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // Temporary arrays
  int leftArr[n1], rightArr[n2];

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = arr[mid + 1 + j];

  // Merge back to original array
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (leftArr[i] <= rightArr[j]) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  // Copy remaining elements
  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);  // Sort first half
    mergeSort(arr, mid + 1, right); // Sort second half
    merge(arr, left, mid, right);   // Merge sorted halves
  }
}

void printArray(int A[], int size) {
  for (int i = 0; i < size; i++)
    printf("%d ", A[i]);
  printf("\n");
}

int main() {
  int arr[] = {6, 5, 3, 1, 8, 7, 2, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Given array is \n");
  printArray(arr, n);

  mergeSort(arr, 0, n - 1);

  printf("Sorted array is \n");
  printArray(arr, n);

  return 0;
}