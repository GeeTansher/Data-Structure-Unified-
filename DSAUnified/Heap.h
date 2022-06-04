#ifndef DSAUNIFIED_HEAP_H
#define DSAUNIFIED_HEAP_H

#include <iostream>
using namespace std;
/*
delete heap
create heap after adding every one element
*/
class Heap
{
public:
    void maxHeapify(int *arr, int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && arr[left] > arr[largest])
            largest = left;
        if (right < n && arr[right] > arr[largest])
            largest = right;

        if (largest != i)
        {
            int temp = arr[largest];
            arr[largest] = arr[i];
            arr[i] = temp;
            maxHeapify(arr, n, largest);
        }
    }

    void minHeapify(int *arr, int n, int i)
    {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && arr[left] < arr[smallest])
            smallest = left;
        if (right < n && arr[right] < arr[smallest])
            smallest = right;

        if (smallest != i)
        {
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
            minHeapify(arr, n, smallest);
        }
    }
};
#endif // DSAUNIFIED_HEAP_CLASS_H