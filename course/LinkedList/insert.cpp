#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(int x, Node *head)
{
    Node *newNode = new Node(x);
    newNode->next = head;
    return newNode;
}

void insertEnd(int x, Node *head)
{
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(x);
    temp->next = newNode;
}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(11);
    Node *second = new Node(12);

    head->next = first;
    first->next = second;

    head = insertBegin(9, head);
    insertEnd(13, head);
    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << temp->data << endl;
}