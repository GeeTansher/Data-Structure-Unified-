#ifndef DSAUNIFIED_SORTING_H
#define DSAUNIFIED_SORTING_H

#include <iostream>
using namespace std;

class Sorting
{
public:
    void selection(int arr[], int l, int r)
    {
        int ele, min = l;
        for (int i = l; i < r; i++)
        {
            for (int j = i + 1; j < r; j++)
            {
                if (arr[j] < arr[min])
                {
                    min = j;
                }
            }
            ele = arr[i];
            arr[i] = arr[min];
            arr[min] = ele;
        }
        for (int i = l; i < r; i++)
        {
            cout << arr[i] << " ";
        }
        cin.get();
        cin.get();
    }

    void bubble(int arr[], int l, int r)
    {
        int ele;
        for (int i = l; i < r; i++)
        {
            for (int j = i + 1; j < r; j++)
            {
                if (arr[j] < arr[i])
                {
                    ele = arr[j];
                    arr[j] = arr[i];
                    arr[i] = ele;
                }
            }
        }
        for (int i = l; i < r; i++)
        {
            cout << arr[i] << " ";
        }
        cin.get();
        cin.get();
    }

    void insertion(int arr[], int l, int r)
    {
        int key, j;
        for (int i = l + 1; i < r; i++)
        {
            key = arr[i];
            for (j = i - 1; j >= 0 && arr[j] > key; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = key;
        }
        for (int i = l; i < r; i++)
        {
            cout << arr[i] << " ";
        }
        cin.get();
        cin.get();
    }

    void printArray(int arr[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cin.get();
        cin.get();
    }
    void swap(int *x, int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    int partitionLast(int arr[], int l, int h)
    {
        int pivot = arr[h];
        int i = l - 1;
        for (int j = l; j <= h - 1; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[h]);
        return i + 1;
    }

    void quick(int arr[], int l, int h)
    {
        if (l < h)
        {
            int p = partitionLast(arr, l, h);
            quick(arr, l, p - 1);
            quick(arr, p + 1, h);
        }
    }

    void merging(int arr[], int l, int mid, int h)
    {
        int n = h - l + 1;
        int *temp = new int[n];
        int i = l, j = mid + 1, k = 0;
        while (i <= mid && j <= h)
        {
            if (arr[i] < arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }
        while (i <= mid)
            temp[k++] = arr[i++];
        while (j <= h)
            temp[k++] = arr[j++];
        for (i = l, k = 0; i <= h; i++, k++)
            arr[i] = temp[k];
    }
    void merge(int arr[], int l, int h)
    {
        if (l < h)
        {
            int mid = (l + h) / 2;
            merge(arr, l, mid);
            merge(arr, mid + 1, h);
            merging(arr, l, mid, h);
        }
    }
};
#endif // DSAUNIFIED_SORTING_CLASS_H