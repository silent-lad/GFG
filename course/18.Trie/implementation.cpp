#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct TrieNode
{
    TrieNode *child[26];
    bool isEnd;
    TrieNode()
    {
        isEnd = false;
        for (ll i = 0; i < 26; i++)
        {
            child[i] = NULL;
        }
    }
};

void insert(TrieNode *root, string s)
{
    TrieNode *temp = root;
    for (ll i = 0; i < s.length(); i++)
    {

        if (temp->child[s[i] - 'a'] == NULL)
        {
            temp->child[s[i] - 'a'] = new TrieNode();
        }

        temp = temp->child[s[i] - 'a'];
    }
    temp->isEnd = true;
}

bool search(TrieNode *root, string s)
{
    TrieNode *temp = root;
    for (ll i = 0; i < s.length(); i++)
    {
        if (temp->child[s[i] - 'a'] == NULL)
        {
            return false;
        }
        else
        {
            temp = temp->child[s[i] - 'a'];
        }
    }
    return temp->isEnd;
}

void deleteWord(TrieNode *root, string s)
{
    TrieNode *temp = root;
    for (ll i = 0; i < s.length(); i++)
    {
        temp = temp->child[s[i] - 'a'];
    }
    ll flag = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (temp->child[i] != NULL)
        {
            flag++;
        }
    }
    if (!flag)
    {
        root->child[s[0] - 'a'] == NULL;
    }
    else
    {
        temp->isEnd = false;
    }
}

int main()
{
}