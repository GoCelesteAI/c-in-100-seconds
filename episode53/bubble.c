#include <stdio.h>

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int nums[] = {64, 25, 12, 22, 11};
  int n = sizeof(nums) / sizeof(nums[0]);

  printf("Before: ");
  print_arr(nums, n);

  bubble_sort(nums, n);

  printf("After:  ");
  print_arr(nums, n);

  return 0;
}
