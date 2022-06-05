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
private:
    vector<int> maxarr, minarr;

public:
    void toDo(int i)
    {
        if (i == 1)
        {
            int n, t = maxarr.size();
            cout << "Enter the element to be added in max heap:";
            cin >> n;
            maxarr.push_back(n);
            for (int j = t / 2; j >= 0; j--)
            {
                maxHeapify(maxarr, t, j);
            }
            for (int j = t / 2 - 1; j >= 0; j--)
            {
                maxHeapify(maxarr, t, j);
            }
            cout << "Added";
            cin.get();
            cin.get();
        }
        else if (i == 2)
        {
            int n;
            cout << "Enter the element to be added in min heap:";
            cin >> n;
            minarr.push_back(n);
            minHeapify(minarr, minarr.size(), 0);
            cout << "Added";
            cin.get();
            cin.get();
        }
        else if (i == 3)
        {
            if (maxarr.size() == 0)
            {
                cout << "No element to be deleted from heap";
                cin.get();
                cin.get();
                return;
            }
            int n=maxarr.size();
            int temp = maxarr[n];
            maxarr[n] = maxarr[0];
            maxarr[0] = temp;
            if (maxarr.size() == 1)
            {
                maxarr.pop_back();
                cout << "Deleted";
                cin.get();
                cin.get();
                return;
            }
            maxHeapify(maxarr, n, 0);
            maxarr.pop_back();
            cout << "Deleted";
            cin.get();
            cin.get();
        }
        else if (i == 4)
        {
            if (minarr.size() == 0)
            {
                cout << "No element to be deleted from heap";
                cin.get();
                cin.get();
                return;
            }
            minarr.erase(minarr.begin());
            if (minarr.size() == 0)
            {
                cout << "Deleted";
                cin.get();
                cin.get();
                return;
            }
            minHeapify(minarr, minarr.size(), 0);
            cout << "Deleted";
            cin.get();
            cin.get();
        }
        else if (i == 5)
        {
            if (maxarr.size() == 0)
            {
                cout << "Heap is empty!!";
                return;
            }
            displayHeap(maxarr);
        }
        else if (i == 6)
        {
            if (minarr.size() == 0)
            {
                cout << "Heap is empty!!";
                return;
            }
            displayHeap(minarr);
        }
    }
    void displayHeap(vector<int> arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cin.get();
        cin.get();
    }
    void maxHeapify(vector<int> &arr, int n, int i)
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

    void minHeapify(vector<int> &arr, int n, int i)
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