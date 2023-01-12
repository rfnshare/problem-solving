#include <bits/stdc++.h>
using namespace std;
/*
Create Linked List Structure
New Node Insertion In Head
Linked List Traverse
Value Search in linked list (linear search)
*/
class node
{
public:
    int data;
    node *nxt;
};
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    // creates a new node
    node *CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }
    // add a value front of linked list
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        // if head!=NULL
        a->nxt = head;
        head = a;
    }
    // print linked list
    void Traverse()
    {
        node *a = head;

        while (a != NULL)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
    }
    // search single value
    int searchDistinctValue(int value)
    {
        node *a = head;
        int indx = 0;
        while (a != NULL)
        {
            if (value == a->data)
            {
                return indx;
            }
            a = a->nxt;
            indx++;
        }
        return -1;
    }
    // search all value based on input
    void SearchAllValue(int value)
    {
        node *a = head;
        int indx = 0;
        while (a != NULL)
        {
            if (value == a->data)
            {
                cout << "Index: " << indx << "->" << a->data << endl;
            }
            a = a->nxt;
            indx++;
        }
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    // l.Traverse();
    // cout<<l.searchDistinctValue(10)<<endl;
    l.SearchAllValue(30);
}