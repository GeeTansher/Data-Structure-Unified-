#ifndef DSAUNIFIED_QUEUE_H
#define DSAUNIFIED_QUEUE_H

#include <iostream>
using namespace std;

struct snode
{
    int data;
    struct snode *next;
};

struct dnode
{
    int data;
    struct dnode *next;
    struct dnode *prev;
};

class Queue
{
    snode *df, *dr;
    int f, r, n;
    int cf, cr;
    int *arr, *ar;
    int d_n;

public:
    Queue(int n = 0)
    {
        df = dr = NULL;
        f = r = -1;
        cf = cr = -1;
        d_n = 0;
        this->n = n;
        arr = new int[n];
        ar = new int[n];
    }

    void s_enqueue()
    {
        int ele;
        cout << endl
             << "Enter element to be added:";
        cin >> ele;
        if (r == n)
        {
            cout << endl
                 << "There is no space left in queue.";
            cin.get();
            cin.get();
            return;
        }
        if (f == -1)
        {
            f = r = 0;
            arr[r] = ele;
            r++;
            cout << endl
                 << "Added successfully.";
        }

        {
            arr[r] = ele;
            r++;
            cout << endl
                 << "Added successfully.";
        }
        cin.get();
        cin.get();
    }

    void s_dequeue()
    {
        if (f == -1)
        {
            cout << endl
                 << "Queue is empty, no element to be dequeued.";
            cin.get();
            cin.get();
            return;
        }
        if (f == r)
        {
            cout << endl
                 << arr[f] << " Dequeued";
            f = r = -1;
        }

        {
            cout << endl
                 << "Dequeued";
            f++;
        }
        cin.get();
        cin.get();
    }

    void s_display()
    {
        if (f == -1)
        {
            cout << endl
                 << "Queue is empty, no element to be displayed.";
            cin.get();
            cin.get();
            return;
        }
        cout << endl
             << "Elements in queue are:";
        for (int i = f; i < r; i++)
        {
            cout << "  " << arr[i];
        }
        cin.get();
        cin.get();
    }

    void s_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (f == -1)
        {
            cout << endl
                 << "Queue is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > (r - f) || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }
        cout << endl
             << "Element at position " << pos << " is:" << arr[f + pos];
        cin.get();
        cin.get();
    }

    void d_enqueue()
    {
        snode *p = NULL;
        int ele;
        p = new snode;
        if (p == NULL)
            printf("\nMemory is full.");

        {
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            p->next = NULL;
            if (df == NULL)
            {
                df = dr = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }

            {
                dr->next = p;
                dr = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }
        }
        cin.get();
        cin.get();
    }

    void d_dequeue()
    {
        if (df == NULL)
        {
            cout << endl
                 << "Queue is empty, no element to be dequeued.";
            cin.get();
            cin.get();
            return;
        }
        if (df == dr)
        {
            snode *p = df;
            df = dr = NULL;
            cout << endl
                 << p->data << " Dequeued successfully.";
            delete p;
            d_n--;
        }

        {
            snode *p = df;
            df = df->next;
            cout << endl
                 << p->data << " Dequeued successfully.";
            delete p;
            d_n--;
        }
        cin.get();
        cin.get();
    }

    void d_display()
    {
        cout << endl
             << "Elements in queue are:";
        snode *p = df;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        cout << "NULL";
        cin.get();
        cin.get();
    }

    void d_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (df == NULL)
        {
            cout << endl
                 << "Queue is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > d_n || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }

        {
            int i = 0;
            snode *p = df;
            while (i < pos)
            {
                p = p->next;
                i++;
            }
            cout << endl
                 << "Element at the postion " << pos << " in queue is:" << p->data;
            cin.get();
            cin.get();
        }
    }

    void c_enqueue()
    {
        int ele;
        cout << endl
             << "Enter element to be added:";
        cin >> ele;
        if ((cf == 0 && cr == n - 1) || (cr == (cf - 1) % (n - 1)))
        {
            cout << endl
                 << "There is no space left in queue.";
            cin.get();
            cin.get();
            return;
        }

        if (cf == -1)
        {
            cf = cr = 0;
            ar[cr] = ele;
            cout << endl
                 << "Added successfully.";
        }

        if (cr == n - 1 && cf != 0)
        {
            cr = 0;
            ar[cr] = ele;
            cout << endl
                 << "Added successfully.";
        }

        {
            cr++;
            ar[cr] = ele;
            cout << endl
                 << "Added successfully.";
        }
        cin.get();
        cin.get();
    }

    void c_dequeue()
    {
        if (cf == -1)
        {
            cout << endl
                 << "Queue is empty, no element to be dequeued.";
            cin.get();
            cin.get();
            return;
        }

        int ele = ar[cf];
        cout << endl
             << ar[cf] << " Dequeued successfully.";
        ar[cf] = -1;
        if (cf == cr)
        {
            cf = -1;
            cr = -1;
        }
        if (cf == n - 1)
            cf = 0;

        cf++;
        cin.get();
        cin.get();
    }

    void c_display()
    {
        cout << endl
             << "Elements in queue are:";
        if (cf == -1)
        {
            cout << "NULL";
            cin.get();
            cin.get();
            return;
        }
        if (cr >= cf)
        {
            for (int i = cf; i <= cr; i++)
                cout << ar[i] << " -> ";
        }

        {
            for (int i = cf; i < n; i++)
                cout << ar[i] << " -> ";

            for (int i = 0; i <= cr; i++)
                cout << ar[i] << " -> ";
        }
        cout << "NULL";
        cin.get();
        cin.get();
    }
};

#endif // DSAUNIFIED_QUEUE_CLASS_H