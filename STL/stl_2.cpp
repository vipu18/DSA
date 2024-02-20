#include <iostream>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <iterator>
#include <utility>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
using namespace std;

int main()
/* {
    //given n elements get the number of unique elements
    set <int> st;
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    for(int i=0; i < n; i++)
    {
        int x;
        cout << "enter element: ";
        cin >> x;
        st.insert(x);
    }
    cout << st.size();
    return 0;
} */

/* {
    // erase by value (name.erase(value))
    set<int> st = {1, 2, 3, 4, 5};
    //st.erase(2);
    //st.erase(st.begin()); // removes 1st element
    //st.erase(st.begin(), st.end()); //to erase all elements
    //st.erase(st.begin(), next(st.begin(), 2)); // erases 1st 2 elements
    st.emplace(10);
    for (auto it: st)
    {
        cout << it << endl;
    }
    return 0;
} */

//Unordered Set
/* {
    unordered_set <int> st;
    st.insert(10);
    st.insert(12);
    for (auto it = st.begin(); it!= st.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
} */

//multiset
/* {
    multiset <int> ms;
    ms.emplace(1);
    ms.emplace(3);
    ms.emplace(2);
    ms.emplace(9);
    for (auto it=ms.begin(); it!= ms.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
} */


/* {
    multiset <int> ms = {1, 3, 4, 5, 6};
    //ms.erase(3); //to erase a element
    //auto it = ms.find (1); //to point a element
    for (auto it=ms.begin(); it!= ms.end(); it++)
    {
        cout << *it << " ";
    }
        cout << endl;
    //ms.erase(ms.begin(), ms.end()); //erases some elements
    //ms.erase(ms.find(1)); // erase a element
    ms.erase(ms.find(1), ms.find(4)); //error
    //ms.clear(); // clear all elements
    for (auto it=ms.begin(); it!= ms.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
} */

//map
/* {
    map<string, int>mp;
    mp["a"] = 1;
    mp["b"] = 4;
    mp["c"] = 9;
    mp["d"] = 6;
    mp.emplace ("e", 8);
    auto it = mp.find ("a");
    if (mp.empty())
    {
        cout << "empty" << endl;
    }
    mp.count("b");
    cout << "Key\tElement\n";
    for (auto it = mp.begin(); it!= mp.end(); it++)
    {
        cout << it->first <<'\t'<< it->second <<'\n';
    }

    return 0;
} */


/* {
    map<string, int>mp;
    mp.emplace("b", 9);
    mp.emplace("a", 10);
    mp.emplace("c", 2);
    //mp.erase("a"); //erases a element
    //mp.erase(mp.begin()); //erases 1st element
    //mp.clear(); //clears all element
    // mp.erase (mp.begin(), next(mp.begin(), 2)); //eraes 1st 2 elements  
    cout << "Key\t Element\n";
    for(auto it =mp.begin(); it!= mp.end(); it++)
    {
        cout<< it->first << "\t" << it->second << "\n";
    }
    return 0;
} */

//unordered_map
/* {
    unordered_map <char,int> ump;
    // ump["b", 6];
    // ump["a", 9];
    // ump["c", 5];
    ump['a'] = 1;
    ump['d'] = 7;
    ump['c'] = 2;
    cout << "key\tValue\n";
    for (auto it = ump.begin(); it!= ump.end(); it++)
    {
        cout << it->first << '\t' << it->second << '\n';
    }
    return 0;
} */

//pair
/* {
    pair <int, int> pr1= {1,2};
    cout << pr1.first;
    cout << pr1.second;
    pair <pair <int, int>,int> pr2 = {{1,2}, 2};
    cout << pr2.first.second << pr2.first.first << pr2.second;
    pair <pair <int, int>, pair <int, int>> pr3 = {{1,2}, {2,4}};
    cout << pr3.first.second << pr3.first.first << pr3.second.first <<pr3.second.second ;
    vector <pair<int, int>>vec;
    set <pair<int, int>> st;
    map <pair <int, int>, int> mpp;
    return 0;
} */

//Stack => it is last in first out data structure
/* {
    stack <int> st;
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(9);
    cout <<"no of elements are: "<< st.size() <<endl;
    cout << st.top() << endl; //prints last element
    st.pop(); //deletes last element
    cout << st.top() << endl;
    bool flag = st.empty();
    while (!st.empty())
    {
        st.pop();
    }
    cout << "empty" << st.top();
    if (!st.empty())
    {
        cout << st.top();
    }
    return 0;
} */

//print the stack
/* {
    stack <int> st;
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(9);
    while(!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
} */

//queue -> 1st in 1st out operation
/* {
    queue <int> q;
    q.push(1);
    q.push(3);
    q.push(5);
    // cout << q.front(); //to print 1st element
    // q.pop();    //to remove 1st element
    // cout << q.front();
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
} */

//priority_queue -> stores in sorted order (6, 5, 2, 1) or desecnding order
/* {
    priority_queue <int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);
    cout<< pq.top() << endl;
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    
} */

//minimum priority queue using priority queue
/* {
    priority_queue <int> pq;
    pq.push (-1);
    pq.push (-5);
    pq.push (-2);
    pq.push (-6);
    cout << -1 * pq.top() <<endl;
    while (!pq.empty())
    {
        cout << -1 * pq.top () << endl;
        pq.pop();
    }    
    return 0;
} */

//minimum_priority queue
/* {
    priority_queue <int, vector <int>, greater <int>> pq;
    pq.push(1);
    pq.push(4);
    pq.push(2);
    pq.push(9);
    while (!pq.empty())
    {
     cout << pq.top() << " ";
     pq.pop();   
    }
    return 0;
} */

//dequeue
/* {
    operations: push_front(), push_back(), pop_front(), pop_back(), begin, end, size, clear
    empty, at 
} */

//list
//all operation as dequeue but has one more remove
/* {
    list <int> ls;
    ls.push_front(1);
    ls.push_front(3);
    ls.push_front(7);
    ls.push_front(6);
    ls.remove(1);
    for (auto it = ls.begin(); it != ls.end(); it++) 
    {
        std::cout << *it << " \t";
    }
    return 0;
} */

//given n number of elments, print the element that occus max no of times
/* {
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    int m=0;
    for (int i= 0; i<n; i++)
    {
        int x;
        cout << "enter your elements: ";
        cin >> x;
        map <int, int> mpp;
        mpp[x]++;
        if (mpp[x]> mpp[m])
        {
           int maxi=x;
        }
        cout << x << endl;
    }
    return 0;
} */

//print all number in sorted order
{
    int n;
    cout << "Enter no of elements: ";
    cin >> n;
    multiset <int> ms;
    for (int i = 0; i<n; i++)
    {
        int x;
        cout << "Enter your element: ";
        cin >> x;
        ms.insert(x);
    }

    for (auto it = ms.begin(); it!= ms.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}