#ifndef DSAUNIFIED_LINKEDLIST_H
#define DSAUNIFIED_LINKEDLIST_H

#include <iostream>
using namespace std;

// struct snode
// {
//     int data;
//     struct snode *next;
// };

// struct dnode
// {
//     int data;
//     struct dnode *next;
//     struct dnode *prev;
// };

class LinkedList
{
    snode *f, *r;
    dnode *df, *dr;
    int d_n;

public:
    LinkedList()
    {
        f = r = NULL;
        df = dr = NULL;
        d_n = 0;
    }

    void s_insert()
    {
        snode *p = NULL;
        int ele;
        int pos;
        int choice1;
        p = new snode;
        if (p == NULL)
            printf("\nMemory is full.");
        else
        {
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            p->next = NULL;
            if (f == NULL)
            {
                f = r = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }
            else
            {
            g12:
                cout << endl
                     << "Where you want to add the element:";
                cout << endl
                     << "1. Front\n2. Back\n3. At a specified position" << endl;
                snode *q = NULL;
                cin >> choice1;
                switch (choice1)
                {
                case 1:
                    p->next = f;
                    f = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 2:
                    r->next = p;
                    r = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 3:
                    cout << endl
                         << "Enter the position at which you want to enter the element:";
                    cin >> pos;
                    if (pos > d_n || pos < 0)
                    {
                        cout << endl
                             << "You entered wrong position. Enter again.";
                        goto g12;
                    }
                    q = f;
                    for (int i = 0; i < pos - 1; i++)
                    {
                        q = q->next;
                    }
                    p->next = q->next;
                    q->next = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                default:
                    cout << endl
                         << "You entered something wrong.";
                    goto g12;
                    break;
                }
            }
        }
        cin.get();
        cin.get();
    }

    void s_delete()
    {
        snode *p = NULL;
        int pos;
        int choice1;
        if (f == NULL)
        {
            cout << endl
                 << "List is empty, no element to delete.";
            cin.get();
            cin.get();
            return;
        }
        if (f == r)
        {
            p = f;
            f = r = NULL;
            cout << endl
                 << p->data << " Deleted successfully.";
            delete p;
            d_n--;
        }

        {
        g13:
            cout << endl
                 << "From which position you want to delete the element:";
            cout << endl
                 << "1. Front\n2. Back\n3. At a specified position" << endl;
            snode *q = NULL;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
                p = f;
                f = f->next;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 2:
                q = f;
                for (int i = 0; i < d_n - 1; i++)
                {
                    q = q->next;
                }
                p = r;
                r = q;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 3:
                cout << endl
                     << "Enter the position of the element to be deleted:";
                cin >> pos;
                if (pos > d_n || pos < 0)
                {
                    cout << endl
                         << "You entered wrong position. Enter again.";
                    goto g13;
                }
                q = f;
                for (int i = 0; i < pos - 1; i++)
                {
                    q = q->next;
                }
                p = q->next;
                q->next = (q->next)->next;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            default:
                cout << endl
                     << "You entered something wrong.";
                goto g13;
            }
        }
        cin.get();
        cin.get();
    }

    void s_display()
    {
        cout << endl
             << "Elements in list are:";
        snode *p = f;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        cout << "NULL";
        cin.get();
        cin.get();
    }

    void s_peek()
    {
        int pos;
        cout << "At which position you want to peek:";
        cin >> pos;
        if (f == NULL)
        {
            cout << endl
                 << "List is empty, no element to be peeked.";
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
            snode *p = f;
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

    void d_insert()
    {
        dnode *p = NULL;
        int ele;
        int pos;
        int choice1;
        p = new dnode;
        if (p == NULL)
            printf("\nMemory is full.");
        else
        {
            cout << endl
                 << "Enter element to be added:";
            cin >> ele;
            p->data = ele;
            p->next = NULL;
            p->prev = NULL;
            if (df == NULL)
            {
                df = dr = p;
                cout << endl
                     << "Added successfully.";
                d_n++;
            }

            {
            g14:
                cout << endl
                     << "Where you want to add the element:";
                cout << endl
                     << "1. Front\n2. Back\n3. At a specified position" << endl;
                dnode *q = NULL;
                cin >> choice1;
                switch (choice1)
                {
                case 1:
                    p->next = df;
                    df->prev = p;
                    df = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 2:
                    dr->next = p;
                    p->prev = dr;
                    dr = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                case 3:
                    cout << endl
                         << "Enter the position at which you want to enter the element:";
                    cin >> pos;
                    if (pos > d_n || pos < 0)
                    {
                        cout << endl
                             << "You entered wrong position. Enter again.";
                        goto g14;
                    }
                    q = df;
                    for (int i = 0; i < pos; i++)
                    {
                        q = q->next;
                    }
                    p->next = q;
                    p->prev = q->prev;
                    (q->prev)->next = p;
                    q->prev = p;
                    cout << endl
                         << "Added successfully.";
                    d_n++;
                    break;
                default:
                    cout << endl
                         << "You entered something wrong.";
                    goto g14;
                }
            }
        }
        cin.get();
        cin.get();
    }

    void d_delete()
    {
        dnode *p = NULL;
        int pos;
        int choice1;
        if (df == NULL)
        {
            cout << endl
                 << "List is empty, no element to delete.";
            cin.get();
            cin.get();
            return;
        }
        if (df == dr)
        {
            p = df;
            df = dr = NULL;
            cout << endl
                 << p->data << " Deleted successfully.";
            delete p;
            d_n--;
        }

        {
        g15:
            cout << endl
                 << "From which position you want to delete the element:";
            cout << endl
                 << "1. Front\n2. Back\n3. At a specified position" << endl;
            dnode *q = NULL;
            cin >> choice1;
            switch (choice1)
            {
            case 1:
                p = df;
                df = df->next;
                df->prev = NULL;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 2:
                p = dr;
                dr = dr->prev;
                dr->next = NULL;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            case 3:
                cout << endl
                     << "Enter the position of the element to be deleted:";
                cin >> pos;
                if (pos > d_n || pos < 0)
                {
                    cout << endl
                         << "You entered wrong position. Enter again.";
                    goto g15;
                }
                q = df;
                for (int i = 0; i < pos; i++)
                {
                    q = q->next;
                }
                p = q;
                (q->prev)->next = q->next;
                (q->next)->prev = q->prev;
                cout << endl
                     << p->data << " Deleted successfully.";
                delete p;
                d_n--;
                break;
            default:
                cout << endl
                     << "You entered something wrong.";
                goto g15;
            }
        }
        cin.get();
        cin.get();
    }

    void d_display()
    {
        cout << endl
             << "Elements in list from front are:";
        dnode *p = df;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->next;
        }
        cout << "NULL";
        cout << endl
             << "Elements in list from rear are:";
        p = dr;
        while (p != NULL)
        {
            cout << p->data << " -> ";
            p = p->prev;
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
                 << "List is empty, no element to be peeked.";
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
            dnode *p = df;
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
};
#endif