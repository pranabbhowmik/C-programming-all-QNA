#include <stdio.h>
void reverce(int  arr[], int n);
void printarr(int arr[], int n);
int main()
{
    int arr[] = {5, 12, 4, 12, 45};
    reverce(arr, 5);
    printarr(arr, 5);
    return 0;
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
void reverce(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secoundval = arr[n - i - 1];
        arr[i] = secoundval;
        arr[n - i - 1] = firstval;
    }
}