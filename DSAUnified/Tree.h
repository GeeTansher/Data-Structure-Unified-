#ifndef DSAUNIFIED_TREE_H
#define DSAUNIFIED_TREE_H

#include <iostream>
using namespace std;

struct tree
{
    struct tree *left;
    int data;
    struct tree *right;
};

class Tree
{
    tree *root;

public:
    void doOperation(int n)
    {
        switch (n)
        {
        case 1:
            int num;
            cout << "Enter the number to be inserted:";
            cin >> num;
            insert(&(root), num);
            break;
        case 3:
            display();
            break;
        }
    }

    Tree()
    {
        root = NULL;
    }
    void insert(tree **root, int num)
    {
        tree *p = new tree;
        if (p == NULL)
        {
            cout << "Memory full...";
        }
        else
        {
            p->data = num;
            if (*root == NULL)
            {
                p->left = NULL;
                p->right = NULL;
                *root = p;
            }
            else
            {
                if (p->data > (*root)->data)
                {
                    insert(&((*root)->right), num);
                }
                else
                {
                    insert(&((*root)->left), num);
                }
            }
        }
    }
    void display()
    {
        int ch;
    g13:
        cout << "In which order you want to print:" << endl
             << "1. PreOrder" << endl
             << "2. InOrder" << endl
             << "3. PostOrder" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << endl
                 << "Tree in PreOrder is:";
            preorder(root);
            break;
        case 2:
            cout << endl
                 << "Tree in InOrder is:";
            inorder(root);
            break;
        case 3:
            cout << endl
                 << "Tree in PostOrder is:";
            postorder(root);
            break;
        default:
            cout << "Entered something wrong...Please Re-Enter:";
            system("cls");
            goto g13;
        }
    }
    void preorder(tree *root)
    {
        if (root != NULL)
        {
            cout << root->data << " ";
            preorder(root->left);
            preorder(root->right);
        }
        else
            return;
    }
    void inorder(tree *root)
    {
        if (root != NULL)
        {
            inorder(root->left);
            cout << root->data << " ";
            inorder(root->right);
        }
        else
            return;
    }
    void postorder(tree *root)
    {
        if (root != NULL)
        {
            postorder(root->left);
            postorder(root->right);
            cout << root->data << " ";
        }
        else
            return;
    }
};
#endif // DSAUNIFIED_TREE_CLASS_H