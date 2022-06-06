#ifndef DSAUNIFIED_HEAP_H
#define DSAUNIFIED_HEAP_H

#include <iostream>
using namespace std;
/*
create heap after adding every one element - can we do by vector????
*/
class Heap
{
private:
    int *maxArr, *minArr;
    int n = 0, m = 0;

public:
    void toDo(int i)
    {
        if (i == 1)
        {
            if (n != 0)
            {
                delete[] maxArr;
            }
            cout << "Enter the no of elements in array:";
            cin >> n;
            maxArr = new int[n];
            for (int i = 0; i < n; i++)
            {
                cin >> maxArr[i];
            }
            for (int j = n / 2; j >= 0; j--)
            {
                maxHeapify(maxArr, n, j);
            }
            cout << "Max Heap created";
            cin.get();
            cin.get();
        }
        else if (i == 2)
        {
            if (m != 0)
            {
                delete[] minArr;
            }
            cout << "Enter the no of elements in array:";
            cin >> m;
            minArr = new int[m + 1];
            for (int i = 0; i < m; i++)
            {
                cin >> minArr[i];
            }
            // maxarr.push_back(n);
            for (int j = m / 2; j >= 0; j--)
            {
                minHeapify(minArr, m, j);
            }
            cout << "Min Heap created";
            cin.get();
            cin.get();
        }
        else if (i == 3)
        {
            if (n == 0)
            {
                cout << "No element to be deleted from heap";
                cin.get();
                cin.get();
                return;
            }
            swap(maxArr[n - 1], maxArr[0]);
            if (n == 1)
            {
                n--;
                cout << "Deleted";
                cin.get();
                cin.get();
                return;
            }
            maxHeapify(maxArr, n - 1, 0);
            n--;
            cout << "Deleted";
            cin.get();
            cin.get();
        }
        else if (i == 4)
        {
            if (m == 0)
            {
                cout << "No element to be deleted from heap";
                cin.get();
                cin.get();
                return;
            }
            swap(minArr[n - 1], minArr[0]);
            if (m == 1)
            {
                m--;
                cout << "Deleted";
                cin.get();
                cin.get();
                return;
            }
            minHeapify(minArr, m - 1, 0);
            m--;
            cout << "Deleted";
            cin.get();
            cin.get();
        }
        else if (i == 5)
        {
            if (n == 0)
            {
                cout << "Heap is empty!!";
                cin.get();
                cin.get();
                return;
            }
            displayHeap(maxArr, n);
        }
        else if (i == 6)
        {
            if (m == 0)
            {
                cout << "Heap is empty!!";
                cin.get();
                cin.get();
                return;
            }
            displayHeap(minArr, m);
        }
    }
    void displayHeap(int *arr, int k)
    {
        for (int i = 0; i < k; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cin.get();
        cin.get();
    }
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