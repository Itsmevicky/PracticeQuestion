#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *right, *left;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void insert(Node **tree, int data)
{
    Node *temp = NULL;
    if (!(*tree))
    {
        temp = new Node(data);
        *tree = temp;
        return;
    }
    if (data < (*tree)->data)
    {
        insert(&(*tree)->left, data);
    }
    else if (data > (*tree)->data)
    {
        insert(&(*tree)->right, data);
    }
}
void printPreOrder(Node *tree)
{
    if (tree)
    {
        cout << tree->data;
        printPreOrder(tree->left);
        printPreOrder(tree->right);
    }
}
void delTree(Node *tree)
{
    if (tree)
    {
        delTree(tree->left);
        delTree(tree->right);
        free(tree);
    }
}

void printLevelOrder(Node *tree)
{
    if (tree == NULL)
        return;

    queue<Node *> q;

    q.push(tree);

    while (q.empty() == false)
    {
        Node *node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left != NULL)
            q.push(node->left);
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main()
{
    Node *root;
    Node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    insert(&root, 9);
    insert(&root, 4);
    insert(&root, 15);
    insert(&root, 6);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 2);

    /* Printing nodes of tree */
    cout << "Pre Order Display\n";
    printPreOrder(root);

    printLevelOrder(root);

    // printf("In Order Display\n");
    // print_inorder(root);

    // printf("Post Order Display\n");
    // print_postorder(root);

    /* Search node into tree */
    // tmp = search(&root, 4);
    // if (tmp)
    // {
    //     printf("Searched node=%d\n", tmp->data);
    // }
    // else
    // {
    //     printf("Data Not found in tree.\n");
    // }

    // /* Deleting all nodes of tree */
    delTree(root);
}