#include <iostream>
using namespace std;
int findsum(int array[], int start, int end)
{
    int sum = 0;
    for (int i = start; i <= end; i++)
    {
        sum = sum + array[i];
    }
    return sum;
}
int findprivat(int arraay[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    for (int i = 0; i < end; i++)
    {
        int leftSum = findsum(arraay, start, mid - 1);
        int rightSum = findsum(arraay, mid + 1, end);
        cout << leftSum << rightSum << endl;
        if (leftSum == rightSum)
        {
            index = mid;
            return index;
        }
        else if (leftSum > rightSum)
        {
            mid = mid - 1;
        }
        else
        {
            mid = mid + 1;
        }
    }
    return index;
}
int main()
{
    int array[3] = {2, 1, -1};
    cout << findprivat(array, 3);
}