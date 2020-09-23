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

bool searchIter(int x, Node *head)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == x)
        {
            return true;
        }
        temp = temp->next;
    }
    if (temp->data == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool searchRecur(int x, Node *head)
{
    if (head->next == NULL)
    {
        if (head->data == x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if (head->data == x)
    {
        return true;
    }
    else
    {
        return searchRecur(x, head->next);
    }
}

int main()
{
    Node *head = new Node(10);
    Node *first = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(13);

    head->next = first;
    first->next = second;
    second->next = third;
}