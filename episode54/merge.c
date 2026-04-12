#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
  int i = left, j = mid + 1, k = 0;
  int temp[right - left + 1];

  while (i <= mid && j <= right) {
    if (arr[i] <= arr[j])
      temp[k++] = arr[i++];
    else
      temp[k++] = arr[j++];
  }
  while (i <= mid) temp[k++] = arr[i++];
  while (j <= right) temp[k++] = arr[j++];

  for (int i = 0; i < k; i++)
    arr[left + i] = temp[i];
}

void merge_sort(int arr[], int left, int right) {
  if (left >= right) return;
  int mid = (left + right) / 2;
  merge_sort(arr, left, mid);
  merge_sort(arr, mid + 1, right);
  merge(arr, left, mid, right);
}

void print_arr(int arr[], int n) {
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int nums[] = {38, 27, 43, 3, 9, 82, 10};
  int n = sizeof(nums) / sizeof(nums[0]);

  printf("Before: ");
  print_arr(nums, n);

  merge_sort(nums, 0, n - 1);

  printf("After:  ");
  print_arr(nums, n);

  return 0;
}
