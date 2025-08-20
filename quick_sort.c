#include <stdio.h>

int getpivot(int a[], int low, int high);
void quicksort(int a[], int low, int high) {
  if (low < high) {
    int p = getpivot(a, low, high);
    quicksort(a, low, p - 1);
    quicksort(a, p + 1, high);
  }
}
int getpivot(int a[], int low, int high) {
  int pi = a[low];
  int i = low + 1;
  int j = high;
  int temp;

  while (1) {
    while (i <= high && a[i] <= pi) {
      i++;
    }
    while (a[j] > pi) {
      j--;
    }
    if (i < j) {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
    } else {
      break;
    }
  }
  temp = a[low];
  a[low] = a[j];
  a[j] = temp;
  return j;
}

void printarray(int a[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

int main() {
  int a[] = {20, 50, 40, 30, 10};
  int size = sizeof(a) / sizeof(a[0]);

  printf("Quick Sort\n");
  printf("Before sorting:");
  printarray(a, size);

  quicksort(a, 0, size - 1);

  printf("After sorting:");
  printarray(a, size);

  return 0;
}
