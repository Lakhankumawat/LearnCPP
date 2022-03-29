#include <bits/stdc++.h>
using namespace std;

class LRUCache //Class Cache 
{
public:
    class node // Property of Nodes
    {
    public:
        int key;
        int val;
        node *next;
        node *prev;
        node(int _key, int _val)
        {
            key = _key;
            val = _val;
        }
    };

    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);

    int cap;
    unordered_map<int, node *> m;

    LRUCache(int capacity) //Constructor pf LRUCache class
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void addnode(node *newnode)
    {
        node *temp = head->next;
        newnode->next = temp;
        newnode->prev = head;
        head->next = newnode;
        temp->prev = newnode;
    }

    void deletenode(node *delnode)
    {
        node *delprev = delnode->prev;
        node *delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }

    int get(int key_) // get function in LRU cache 
    {
        if (m.find(key_) != m.end()) //if key found 
        {
            node *resnode = m[key_];
            int res = resnode->val;
            m.erase(key_);
            deletenode(resnode);
            addnode(resnode);
            m[key_] = head->next;
            return res;
        }

        return -1; // if key not found 
    }

    void put(int key_, int value) //insert into cache 
    {
        if (m.find(key_) != m.end())// key is pre-existed
        {
            node *existingnode = m[key_];
            m.erase(key_);
            deletenode(existingnode);
        }
        if (m.size() == cap)//Cache overflow 
        {
            m.erase(tail->prev->key);
            deletenode(tail->prev);
        }

        addnode(new node(key_, value)); // if cache is not overflown add element-key
        m[key_] = head->next;
    }
};

int main()
{
    LRUCache LRU(2); // LRU Cache of Size 2
    LRU.put(1, 1);   // put function on Cache
    LRU.put(2, 2);   // put function on Cache
    cout << "value for key 1 in cache ->" << LRU.get(1) << endl;
    LRU.put(3, 3); // put function on Cache
    cout << "value for key 2 in cache ->" << LRU.get(2) << endl;
    LRU.put(4, 4); // put function on Cache
    cout << "value for key 3 in cache ->" << LRU.get(3) << endl;
}

/* Output ->
value for key 1 in cache ->1
value for key 2 in cache ->-1
value for key 3 in cache ->3
*/ 