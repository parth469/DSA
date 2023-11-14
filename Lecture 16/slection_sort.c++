#include <iostream>
using namespace std;
int main()
{
    int array[6] = {35, 75, 12, 8, 24, 7};
    int size = 6;
    for (int i = 0; i < size - 1; i++)
    {
        int minIdex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[minIdex] > array[j])
            {
                minIdex = j;
            }
        }
        swap(array[i], array[minIdex]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}