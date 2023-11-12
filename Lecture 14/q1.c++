#include <iostream>
using namespace std;
int findPivateElemets(int array[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (array[mid] >= array[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    int array[6] = {1, 7, 3, 6, 5, 6};
    int pivatElements = findPivateElemets(array, 6);
    cout << "Pivate Elemets is " << pivatElements;
}