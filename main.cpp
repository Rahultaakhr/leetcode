#include <iostream>
using namespace std;


int binarySearch(int arr[], int n, int k)
{
    int s = 0;
    int e =n-1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        int square=arr[mid]*arr[mid];
        if (square == k) return mid;

        else if (k>square)
        {
            s = mid + 1;
        }
        else
        {
            e = mid-1;
        }
        mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[10] = {2,4,6,8,12,16,20,28,36,42};
   
    int n = 10;
    int key = 64;
   int ans=binarySearch(arr, n , key);
   cout<<"Answer is "<< ans<< endl;


}