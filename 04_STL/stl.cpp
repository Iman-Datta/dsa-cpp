#include <iostream>
#include <utility>
#include<vector>
#include <list>
#include <deque> // Double Ended Queue
#include <stack>
#include <queue>
#include <set>
#include <map>


using namespace std;

void explainPair(){
    // Simple pair
    pair<int, int> p1 = {10, 20};
    cout << "p1 first element: " << p1.first << endl;
    cout << "p1 second element: " << p1.second << endl;

    cout << endl;

    // Nested pair
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "p2 first element: " << p2.first << endl;
    cout << "p2 second pair first element: " << p2.second.first << endl;
    cout << "p2 second pair second element: " << p2.second.second << endl;

    // Array of pairs
    pair<int, int> arr[3] = {{1, 2}, {3, 4}, {5, 6}};

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

void explainVector()
{
    cout << "===== BASIC VECTOR OPERATIONS =====\n";

    vector<int> v;

    // Insertion
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);

    cout << "Elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    cout << "Size  : " << v.size() << endl;
    cout << "Front : " << v.front() << endl;
    cout << "Back  : " << v.back() << endl;

    cout << "\n===== VECTOR OF PAIRS =====\n";

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    vp.push_back({5, 6});
    vp.emplace_back(7, 8);

    for (auto p : vp)
        cout << p.first << " " << p.second << endl;


    cout << "\n===== INSERT & ERASE =====\n";

    v.pop_back();                 // removes 30
    v.insert(v.begin() + 1, 99);  // single element
    v.insert(v.begin() + 2, 2, 5);// insert 2 copies of 5

    v.erase(v.begin());                    // erase first
    v.erase(v.begin() + 1, v.begin() + 3); // erase range

    cout << "After modifications: ";
    for (int x : v) cout << x << " ";
    cout << endl;


    cout << "\n===== VECTOR CONSTRUCTORS =====\n";

    vector<int> vA(5, 100);   // size + value
    vector<int> vB(5);        // size only (0)
    vector<int> vC(vB);       // copy constructor

    cout << "vA: "; for (int x : vA) cout << x << " "; cout << endl;
    cout << "vB: "; for (int x : vB) cout << x << " "; cout << endl;
    cout << "vC: "; for (int x : vC) cout << x << " "; cout << endl;


    cout << "\n===== ITERATORS =====\n";

    vector<int>::iterator it = vA.begin();
    cout << "Begin element: " << *it << endl;

    it++;
    cout << "After it++   : " << *it << endl;

    vector<int>::reverse_iterator rit = vA.rbegin();
    cout << "Last element : " << *rit << endl;


    cout << "\n===== TRAVERSAL STYLES =====\n";

    cout << "Iterator loop: ";
    for (vector<int>::iterator it = vA.begin(); it != vA.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Auto iterator: ";
    for (auto it = vA.begin(); it != vA.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Range-based  : ";
    for (auto x : vA)
        cout << x << " ";
    cout << endl;


    cout << "\n===== CLEAR & EMPTY =====\n";

    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    if (v.empty())
        cout << "Vector is empty (safe state)\n";
}

void explainList()
{
    cout << "===== STL LIST =====\n";

    list<int> l;

    // Insertion at back
    l.push_back(10);
    l.emplace_back(20);

    // Insertion at front
    l.push_front(5);
    l.emplace_front(1);

    cout << "Elements in list: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Front & back access
    cout << "Front element: " << l.front() << endl;
    cout << "Back element : " << l.back() << endl;

    // Removing elements
    l.pop_front();
    l.pop_back();

    cout << "After pop_front & pop_back: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // Size
    cout << "Size of list: " << l.size() << endl;
}

void explainDeque()
{
    cout << "===== STL DEQUE =====\n";

    deque<int> dq;

    // Insertion at back
    dq.push_back(10);
    dq.emplace_back(20);

    // Insertion at front
    dq.push_front(5);
    dq.emplace_front(1);

    cout << "Elements in deque: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Front & back access
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element : " << dq.back() << endl;

    // Removal
    dq.pop_front();
    dq.pop_back();

    cout << "After pop_front & pop_back: ";
    for (int x : dq)
        cout << x << " ";
    cout << endl;

    // Size
    cout << "Size of deque: " << dq.size() << endl;
}

void explainStack()
{
    cout << "===== STL STACK =====\n";

    stack<int> st;

    // Push elements
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl;

    // Pop element
    st.pop();

    cout << "Top after pop: " << st.top() << endl;

    // Size
    cout << "Size of stack: " << st.size() << endl;

    // Empty check
    if (st.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";
}

void explainQueue()
{
    cout << "===== STL QUEUE =====\n";

    queue<int> q;

    // Enqueue (insert at rear)
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Rear element : " << q.back() << endl;

    // Dequeue (remove from front)
    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    // Size
    cout << "Size of queue: " << q.size() << endl;

    // Empty check
    if (q.empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";
}

void explainSet()
{
    cout << "===== STL SET =====\n";

    set<int> s;

    // Insertion
    s.insert(30); // auto-sorted
    s.insert(10);
    s.insert(20);
    s.insert(20);   // duplicate (ignored)

    cout << "Elements in set: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;

    // Size
    cout << "Size of set: " << s.size() << endl;

    // Search
    if (s.find(20) != s.end())
        cout << "20 is present in set\n";
    else
        cout << "20 is not present in set\n";

    // Count (0 or 1 in set)
    cout << "Count of 20: " << s.count(20) << endl;

    // Erase
    s.erase(10);

    cout << "After erasing 10: ";
    for (int x : s)
        cout << x << " ";
    cout << endl;

    // Empty check
    if (s.empty())
        cout << "Set is empty\n";
    else
        cout << "Set is not empty\n";
}

void explainMap()
{
    cout << "===== STL MAP =====\n";

    map<int,int> m; // key : value (unique keys, sorted)

    // Complex key example
    map<pair<int,int>, double> m2;

    // Insertion
    m[1] = 2;
    m.emplace(3, 1);
    m.insert({2, 4});

    cout << "Map elements:\n";
    for (auto it : m)
        cout << it.first << " " << it.second << endl;

    // Access
    cout << "Value at key 1: " << m[1] << endl;

    // ⚠ creates new key which value is 0
    cout << "Value at key 5 (creates entry): " << m[5] << endl;

    cout << "Size of map: " << m.size() << endl;

    // Find (SAFE)
    auto it = m.find(3);
    if (it != m.end())
        cout << "Key 3 value: " << it->second << endl;
    else
        cout << "Key 3 not found\n";

    // Find missing key (SAFE)
    it = m.find(6);
    if (it != m.end())
        cout << "Key 6 value: " << it->second << endl;
    else
        cout << "Key 6 not found\n";

    // Count
    cout << "Count of key 3: " << m.count(3) << endl;

    // Erase
    m.erase(1);

    cout << "After erasing key 1:\n";
    for (auto p : m)
        cout << p.first << " -> " << p.second << endl;
}


int main()
{
    int choice;

    do
    {
        cout << "\n===== STL MENU =====\n";
        cout << "1. Explain Pair\n";
        cout << "2. Explain Vector\n";
        cout << "3. Explain List\n";
        cout << "4. Explain Deque\n";
        cout << "5. Explain Stack\n";
        cout << "6. Explain Queue\n";
        cout << "7. Explain Set\n";
        cout << "8. Explain Map\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            explainPair();
            break;

        case 2:
            explainVector();
            break;
        
        case 3:
            explainList();
            break;

        case 4:
            explainDeque();
            break;

        case 5:
            explainStack();
            break;

        case 6:
            explainQueue();
            break;
        
        case 7:
            explainSet();
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}