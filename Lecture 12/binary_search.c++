#include <iostream>
using namespace std;

int findValue(int array[], int size, int value)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (array[mid] == value)
        {
            cout << "Find Value For Index" << mid;
            return mid;
        }
        if (array[mid] > value)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout << "No value found";
    return -1;
}
int main()
{
    int value_find;
    cout << "Enter value You Want To find : ";
    cin >> value_find;
    int array1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[5] = {1, 2, 3, 4, 5};
    findValue(array1, 10, value_find);
    findValue(array2, 5, value_find);
}
