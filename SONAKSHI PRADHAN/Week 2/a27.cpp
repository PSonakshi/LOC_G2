#include <iostream>

using namespace std;
void bubble_sort(int* arr, size_t len)
{
    int temp;
    for (int i = 0; i < len; i++)
        {
            for (int j = 0; j + 1 < len - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
}

int main()
{
    int arr[] = {0, 98, 761, 100, -982, -72};
    size_t len = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr, len);
    cout<<"The sorted array is: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}