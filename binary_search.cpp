#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key);

int main()
{
    int n;
    cout << "enter n :" << endl;
    cin >> n;

    int arr[n];
    cout << "array of " << n << "elements is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter key :" << endl;
    cin >> key;
    cout << binarySearch(arr, n, key);

    return 0;
}
int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        { // when middle element = key
            return key;
        }
        else if (arr[mid] > key)
        { // when middle element is greater than key
            e = mid - 1;
        }
        else
        {
            s = mid + 1; // when middle element is less than key
        }
    }
    return -1; // if element not found
}