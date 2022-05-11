#ifndef DSAUNIFIED_STACK_H
#define DSAUNIFIED_STACK_H

#include <iostream>
using namespace std;

class Stack
{
    snode *top1;
    int top, n;
    int *arr;
    int d_n;

public:
    Stack(int n = 0)
    {
        top1 = NULL;
        top = -1;
        d_n = 0;
        this->n = n;
        arr = new int[n];
    }

    void s_push()
    {
        int ele;
        cout << endl
             << "Enter element to be added:";
        cin >> ele;
        if (top == n)
        {
            cout << endl
                 << "There is no space left in queue.";
            cin.get();
            cin.get();
            return;
        }
        if (top == -1)
        {
            top = 0;
            arr[top] = ele;
            top++;
            cout << endl
                 << "Added successfully.";
        }

        {
            arr[top] = ele;
            top++;
            cout << endl
                 << "Added successfully.";
        }
        cin.get();
        cin.get();
    }

    void s_pop()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack is empty, no element to be pop.";
            cin.get();
            cin.get();
            return;
        }
        top--;
        cout << endl
             << "Pop";
        cin.get();
        cin.get();
    }

    void s_display()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack is empty, no element to be displayed.";
            cin.get();
            cin.get();
            return;
        }
        cout << endl
             << "Elements in stack are:";
        for (int i = top; i >= 0; i--)
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
        if (top == -1)
        {
            cout << endl
                 << "Stack is empty, no element to be peeked.";
            cin.get();
            cin.get();
            return;
        }
        if (pos > top || pos < 0)
        {
            cout << endl
                 << "Sorry at this position there is no element.";
            cin.get();
            cin.get();
            return;
        }
        cout << endl
             << "Element at position " << pos << " is:" << arr[top - pos];
        cin.get();
        cin.get();
    }

    void d_push()
    {
        snode *p = NULL;
        p = new snode;
        if (p == NULL)
            printf("\nMemory is full.");

        {
            int ele;
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            if (top1 == NULL)
            {
                p->next = NULL;
                top1 = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }

            {
                p->next = top1;
                top1 = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }
        }
        cin.get();
        cin.get();
    }

    void d_pop()
    {
        if (top1 == NULL)
        {
            cout << endl
                 << "Stack is empty, no element to be pop.";
            cin.get();
            cin.get();
            return;
        }
        snode *p = top1;
        top1 = top1->next;
        cout << endl
             << p->data << " Pop successfully.";
        delete p;
        d_n--;
        cin.get();
        cin.get();
    }

    void d_display()
    {
        cout << endl
             << "Elements in stack are:";
        snode *p = top1;
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
        if (top1 == NULL)
        {
            cout << endl
                 << "Stack is empty, no element to be peeked.";
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
            snode *p = top1;
            while (i < pos)
            {
                p = p->next;
                i++;
            }
            cout << endl
                 << "Element at the postion " << pos << " in stack is:" << p->data;
            cin.get();
            cin.get();
        }
    }
};
#endif