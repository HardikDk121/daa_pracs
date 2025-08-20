#include <stdio.h>
void quick_sort(int array[], int low, int high) {}
int main() {
  int arr[5] = {40, 50, 10, 90, 60};
  printf("Merge sort ");
  printf("\narray before sorting: ");
  for (int i = 0; i < 5; i++) {
    printf(" %d ", arr[i]);
  }
  quick_sort(arr, 0, 4);
  printf("\narray after sorting: ");
  for (int i = 0; i < 5; i++) {
    printf(" %d ", arr[i]);
  }
  return 0;
}
