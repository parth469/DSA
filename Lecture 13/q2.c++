#include <iostream>
using namespace std;
int findFirst(int array[], int size, int value)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    if (array[end] < value || array[start] > value)
    {
        return index;
    }
    while (start <= end)
    {
        if (array[mid] == value)
        {
            index = mid;
            end = mid - 1;
        }
        else if (array[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}

int findLast(int array[], int size, int value)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    if (array[end] < value || array[start] > value)
    {
        return index;
    }
    while (start <= end)
    {
        if (array[mid] == value)
        {
            index = mid;
            start = mid + 1;
        }
        else if (array[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return index;
}
int main()
{
    int array[8] = {0, 0, 1, 2, 2, 2, 2, 2};

    int num;
    cout << "Enter number You want Find repert :";
    cin >> num;
    cout << "Total Time Number repert is -> " << findLast(array, 8, num) - findFirst(array, 8, num) + 1;
}