#include <bits/stdc++.h>
#include "Tree.h"
#include "Queue.h"
#include "Sorting.h"
#include "LinkedList.h"
#include "Stack.h"

using namespace std;
/*

Remaining functions in tree
graph
other sorting algos
can also add searching algorithms
can add additional operations in Linked list , Stack and Queue.

*/

int main()
{
    int choice1, choice2, choice3;
    Queue sq(100), dq, cq(10);
    Stack ss(100), ds;
    LinkedList sl, dl;
    Sorting s;
    Tree t;
    int *ar;
    int a;
    while (1)
    {
    g:

        system("cls");
        cout << "......Welcome to the All Data Structure and Algorithms Implementation Hub......";
        cout << endl
             << "What do you want to do?";
        cout << endl
             << "1. Implementing Queue" << endl
             << "2. Implementing Stack" << endl
             << "3. Implementing Linked List" << endl
             << "4. Doing some sorting" << endl
             << "5. Implementing Binary Search Tree" << endl
             << "6. Exit" << endl;

        cin >> choice1;

        switch (choice1)
        {
        case 1:
        g1:

            system("cls");
            cout << ".......QUEUE HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Static Queue Implementation" << endl
                 << "2. Dynamic Queue Implementation" << endl
                 << "3. Circular Queue Implementation" << endl
                 << "4. Go Back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
            g2:
                system("cls");
                cout << ".......STATIC QUEUE HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Enqueue" << endl
                     << "2. Dequeue" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    sq.s_enqueue();
                    goto g2;
                case 2:
                    sq.s_dequeue();
                    goto g2;
                case 3:
                    sq.s_display();
                    goto g2;
                case 4:
                    sq.s_peek();
                    goto g2;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g1;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g2;
                }
            case 2:
            g3:
                system("cls");
                cout << ".......DYNAMIC QUEUE HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Enqueue" << endl
                     << "2. Dequeue" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    dq.d_enqueue();
                    goto g3;
                case 2:
                    dq.d_dequeue();
                    goto g3;
                case 3:
                    dq.d_display();
                    goto g3;
                case 4:
                    dq.d_peek();
                    goto g3;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g1;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g3;
                }
                break;
            case 3:
            g4:
                system("cls");
                cout << ".......CIRCULAR QUEUE HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Enqueue" << endl
                     << "2. Dequeue" << endl
                     << "3. Display" << endl
                     << "4. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    cq.c_enqueue();
                    goto g4;
                case 2:
                    cq.c_dequeue();
                    goto g4;
                case 3:
                    cq.c_display();
                    goto g4;
                case 4:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g1;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g4;
                }
                break;
            case 4:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g1;
            }
            break;
        case 2:
        g5:

            system("cls");
            cout << ".......STACK HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Static Stack Implementation" << endl
                 << "2. Dynamic Stack Implementation" << endl
                 << "3. Go Back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
            g6:

                system("cls");
                cout << ".......STATIC STACK HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Push" << endl
                     << "2. Pop" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    ss.s_push();
                    goto g6;
                case 2:
                    ss.s_pop();
                    goto g6;
                case 3:
                    ss.s_display();
                    goto g6;
                case 4:
                    ss.s_peek();
                    goto g6;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g5;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g6;
                }
            case 2:
            g7:

                system("cls");
                cout << ".......DYNAMIC STACK HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Push" << endl
                     << "2. Pop" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    ss.d_push();
                    goto g7;
                case 2:
                    ss.d_pop();
                    goto g7;
                case 3:
                    ss.d_display();
                    goto g7;
                case 4:
                    ss.d_peek();
                    goto g7;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g5;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g7;
                }
                break;
            case 3:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g5;
            }
            break;
        case 3:
        g8:
            system("cls");
            cout << ".......LINKED LIST HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Implement singly Linked List" << endl
                 << "2. Implement Doubly Linked List" << endl
                 << "3. Go Back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
            g9:

                system("cls");
                cout << ".......SINGLY LINKED LIST HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Insert" << endl
                     << "2. Delete" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    sl.s_insert();
                    goto g9;
                case 2:
                    sl.s_delete();
                    goto g9;
                case 3:
                    sl.s_display();
                    goto g9;
                case 4:
                    sl.s_peek();
                    goto g9;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g8;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g9;
                }
            case 2:
            g10:

                system("cls");
                cout << ".......DOUBLY LINKED LIST HUB.........";
                cout << endl
                     << "What do you want to do?";
                cout << endl
                     << "1. Insert" << endl
                     << "2. Delete" << endl
                     << "3. Display" << endl
                     << "4. Peek" << endl
                     << "5. Go back" << endl;

                cin >> choice3;

                switch (choice3)
                {
                case 1:
                    dl.d_insert();
                    goto g10;
                case 2:
                    dl.d_delete();
                    goto g10;
                case 3:
                    dl.d_display();
                    goto g10;
                case 4:
                    dl.d_peek();
                    goto g10;
                case 5:
                    cout << endl
                         << "Going back....";
                    // sleep(2);
                    goto g8;
                default:
                    cout << "Entered something wrong...\nPlease re-enter...";
                    cin.get();
                    cin.get();
                    goto g10;
                }
                break;
            case 3:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g8;
            }
            break;
        case 4:
        g11:
            system("cls");
            cout << ".......SORTING ALGORITHMS HUB.........";
            cout << endl
                 << "Enter the number of elements in the array:";
            cin >> a;
            ar = new int[a];
            cout << endl
                 << "Enter the elements of the array:" << endl;
            for (int i = 0; i < a; i++)
            {
                cin >> ar[i];
            }
            cout << endl
                 << "By which algorithm you want to sort your array?";
            cout << endl
                 << "1. Selection sort" << endl
                 << "2. Bubble sort" << endl
                 << "3. Insertion sort" << endl
                 << "4. Quick sort" << endl
                 << "5. Merge sort" << endl
                 << "6. Go Back" << endl;
            cin >> choice2;

            switch (choice2)
            {
            case 1:
                cout << endl
                     << "After sorting your array by Selection sort." << endl;
                s.selection(ar, 0, a);
                goto g;
            case 2:
                cout << endl
                     << "After sorting your array by Bubble sort." << endl;
                s.bubble(ar, 0, a);
                goto g;
            case 3:
                cout << endl
                     << "After sorting your array by Insertion sort." << endl;
                s.insertion(ar, 0, a);
                goto g;
            case 4:
                cout << endl
                     << "After sorting your array by Quick sort." << endl;
                if (a > 1)
                {
                    s.quick(ar, 0, a - 1);
                    s.printArray(ar, a);
                }

                {
                    cout << *ar;
                    cin.get();
                    cin.get();
                }
                goto g;
            case 5:
                cout << endl
                     << "After sorting your array by Merge sort." << endl;
                s.merge(ar, 0, a - 1);
                s.printArray(ar, a);
                goto g;
            case 6:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g11;
            }
            break;
        case 5:
        g12:

            system("cls");
            cout << ".......BST HUB.........";
            cout << endl
                 << "What do you want to do?";
            cout << endl
                 << "1. Insert a node" << endl
                 << "2. Delete a node" << endl
                 << "3. Display" << endl
                 << "4. Count Total Nodes" << endl
                 << "5. Count Total Leaf Nodes" << endl
                 << "6. Count Nodes with only left child" << endl
                 << "7. Count Nodes with both childs" << endl
                 << "8. Maximum node" << endl
                 << "9. Minimum node" << endl
                 << "10. Search a node and return its parent" << endl
                 << "11. Go back" << endl;

            cin >> choice2;

            switch (choice2)
            {
            case 1:
                t.doOperation(1);
                cout << endl
                     << "Node Inserted";
                cin.get();
                cin.get();
                goto g12;
            case 2:

            case 3:
                t.doOperation(3);
                cin.get();
                cin.get();
                goto g12;
            case 11:
                cout << endl
                     << "Going back....";
                // sleep(2);
                goto g;
            default:
                cout << "Entered something wrong...\nPlease re-enter...";
                cin.get();
                cin.get();
                goto g12;
            }
            break;
        case 6:
            cout << endl
                 << "Thank you for Visiting ....";
            // sleep(2);
            exit(0);
            break;
        default:
            cout << "Entered something wrong...\nPlease re-enter...";
            cin.get();
            cin.get();
            goto g;
        }
    }
    return 0;
}