#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node
{
    int data;
    Node *next;
    Node *random;
    Node(int x)
    {
        data = x;
        next = NULL;
        random = NULL;
    }
};

Node *clone(Node *head)
{
    Node *copyHead;

    Node *temp = head;
    while (temp->next != NULL)
    {
        Node *copyNode = new Node(temp->data);

        copyNode->next = temp->next;
        temp->next = copyNode;
        temp = copyNode->next;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp->next->random = temp->random->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(13);
    Node *fourth = new Node(14);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;

    Node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}