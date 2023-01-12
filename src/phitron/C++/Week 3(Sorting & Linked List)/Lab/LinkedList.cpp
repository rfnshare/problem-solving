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
    }
    // search single value
    void searchDistinctValue(int value)
    {
    }
    // search all value based on input
    void SearchAllValue(int value)
    {
    }
};
int main()
{
    LinkedList l;
    l.InsertAtHead(10);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.Traverse();
    l.searchDistinctValue(30);
    l.SearchAllValue(30);
}