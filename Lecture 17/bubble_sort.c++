#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1,
                  2,
                  65,
                  3};
    int size = 4;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}