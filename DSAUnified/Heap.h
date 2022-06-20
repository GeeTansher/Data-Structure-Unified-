#ifndef DSAUNIFIED_HEAP_H
#define DSAUNIFIED_HEAP_H

#include <iostream>
#include <vector>
using namespace std;
/*
create heap after adding every one element - can we do by vector????
*/
class Heap
{
private:
    // int *maxArr, *minArr;
    vector<int> maxVec, minVec;
    // int n = 0, m = 0;

public:
    void toDo(int i)
    {
        if (i == 1)
        {
            int n;
            cout << "Enter the element to be inserted:";
            cin >> n;
            maxVec.push_back(n);
            for (int j = maxVec.size() / 2; j >= 0; j--)
            {
                maxHeapify(maxVec, maxVec.size(), j);
            }
            cout << "Element inserted in Max Heap";
            cin.get();
            cin.get();
        }
        else if (i == 2)
        {
            int n;
            cout << "Enter the element to be inserted:";
            cin >> n;
            minVec.push_back(n);
            for (int j = minVec.size() / 2; j >= 0; j--)
            {
                maxHeapify(minVec, minVec.size(), j);
            }
            cout << "Element inserted in Min Heap";
            cin.get();
            cin.get();
        }
        else if (i == 3)
        {
            if (maxVec.size() == 0)
            {
                cout << "No element to be deleted from heap";
                cin.get();
                cin.get();
                return;
            }
            if (maxVec.size() == 1)
            {
                maxVec.pop_back();
                cout << "Deleted";
                cin.get();
                cin.get();
                return;
            }
            swap(maxVec[0], maxVec[maxVec.size() - 1]);
            maxVec.pop_back();
            maxHeapify(maxVec, maxVec.size(), 0);
            cout << "Deleted";
            cin.get();
            cin.get();
        }
        else if (i == 4)
        {
            if (minVec.size() == 0)
            {
                cout << "No element to be deleted from heap";
                cin.get();
                cin.get();
                return;
            }
            if (minVec.size() == 1)
            {
                minVec.pop_back();
                cout << "Deleted";
                cin.get();
                cin.get();
                return;
            }
            swap(minVec[0], minVec[minVec.size() - 1]);
            minVec.pop_back();
            minHeapify(minVec, minVec.size(), 0);
            cout << "Deleted";
            cin.get();
            cin.get();
        }
        else if (i == 5)
        {
            if (maxVec.size() == 0)
            {
                cout << "Heap is empty!!";
                cin.get();
                cin.get();
                return;
            }
            displayHeap(maxVec);
        }
        else if (i == 6)
        {
            if (minVec.size() == 0)
            {
                cout << "Heap is empty!!";
                cin.get();
                cin.get();
                return;
            }
            displayHeap(minVec);
        }
    }
    void displayHeap(vector<int> &v)
    {
        for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        cin.get();
        cin.get();
    }
    void maxHeapify(vector<int> &v, int n, int i)
    {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && v[left] > v[largest])
            largest = left;
        if (right < n && v[right] > v[largest])
            largest = right;

        if (largest != i)
        {
            swap(v[largest], v[i]);
            maxHeapify(v, n, largest);
        }
    }

    void minHeapify(vector<int> &v, int n, int i)
    {
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if (left < n && v[left] < v[smallest])
            smallest = left;
        if (right < n && v[right] < v[smallest])
            smallest = right;

        if (smallest != i)
        {
            swap(v[smallest], v[i]);
            minHeapify(v, n, smallest);
        }
    }
};
#endif // DSAUNIFIED_HEAP_CLASS_H