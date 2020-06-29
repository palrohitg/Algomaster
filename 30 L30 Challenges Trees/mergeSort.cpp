#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insert_head(node*&head, int data)
{
    node*n = new node(data);
    n->next = head;
    head = n;
}

void insert_last(node*&head, int data)
{   if (head == NULL)
    {
        insert_head(head, data);
    }

    else {
        node*temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }
}
void build_l(node*&head, int n)
{
    int data;

    int j = 1;
    while (j <= n)
    {
        cin >> data;
        insert_last(head, data);
        j += 1;
    }
}
void print_l(node*head)
{
    while (head != NULL)
    {
        cout << head->data << ",";
        head = head->next;
    }
}
node* merge_li(node*&head, node*&head1)
{

    //Base Case
    if (head == NULL)
    {
        return head1;
    }
    else if (head1 == NULL)
    {
        return head;
    }
    node*c;
    // Rec Case
    if (head->data < head1->data)
    {
        c = head;
        c->next = merge_li(head->next, head1);
    }
    else
    {
        c = head1;
        c->next = merge_li(head, head1->next);
    }
    return c;
}
void print_li(node*head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // node*head = NULL;
    // node*head1 = NULL;
    // // int t;
    // // cin >> t;
    // // int n1, n2;
    // // for (int i = 0; i < t; i++)
    // // {
    // //     cin >> n1 >> n2;
    // //     build_l(head, n1);
    // //     build_l(head, n2);
    // //     // node*head = merge_li(head, head1);
    // //     // print_li(head);



    // // }
    build_l(head, 3);
    print_li(head);

    return 0;
}
