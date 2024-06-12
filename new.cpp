#include <iostream>
using namespace std;


int pivot(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  int mid = start + (end - start) / 2;
  while (start < end) {
    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
  }
  return start;
}
int binarySearch(int arr[], int s, int e, int key) {
  int start = s;
  int end = e;
  int mid = start + (end - start) / 2;
  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int n=5;
    int k=5;
    int pivotEle = pivot(arr, n);
    cout<< pivotEle;
//   if (k >= arr[pivotEle] && k <= arr[n - 1]) {
//     return binarySearch(arr, pivotEle, n - 1, k);
//   } else {
//     return binarySearch(arr, 0, pivotEle - 1, k);
//   }
}


