#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
};
node *createnode(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
void inOrder(node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}
int main()
{
    node *a = createnode(10);
    node *b = createnode(5);
    node *c = createnode(15);
    node *d = createnode(3);
    node *e = createnode(20);
    a->left = b;
    a->right = c;
    b->left = d;
    c->right = e;
    inOrder(a);
    return 0;
}