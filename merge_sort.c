#include <stdio.h>
void combine(int array[], int low, int mid, int high);
void merge_sort(int array[], int low, int high) {
  int mid = (low + high) / 2;
  if (low < high) {
    merge_sort(array, low, mid);
    merge_sort(array, mid + 1, high);
    combine(array, low, mid, high);
  }
}
void combine(int array[], int low, int mid, int high) {
  int k = low, i = low, j = mid + 1;
  int temp[100];
  while (i <= mid && j <= high) {
    if (array[i] < array[j]) {
      temp[k] = array[i];
      i++;
    } else {
      temp[k] = array[j];
      j++;
    }
    k++;
  }
  while (i <= mid) {
    temp[k] = array[i];
    k++;
    i++;
  }
  while (j <= high) {
    temp[k] = array[j];
    k++;
    j++;
  }
  for (int i = low; i <= high; i++) {
    array[i] = temp[i];
  }
}
int main() {
  int arr[5] = {40, 50, 10, 90, 60};
  printf("Merge sort ");
  printf("\narray before sorting: ");
  for (int i = 0; i < 5; i++) {
    printf(" %d ", arr[i]);
  }
  merge_sort(arr, 0, 4);
  printf("\narray after sorting: ");
  for (int i = 0; i < 5; i++) {
    printf(" %d ", arr[i]);
  }
  return 0;
}
