// * First and Last Position of an Element In Sorted Array 
// ? Info -> if you find array elements match then store that index and find for next or for first

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
    cout << "Enter number You want To find first and last :";
    cin >> num;
    cout << findFirst(array, 8, num) << "  " << findLast(array, 8, num);
}