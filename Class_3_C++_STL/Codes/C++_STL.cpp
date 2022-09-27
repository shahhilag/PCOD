#include<bits/stdc++.h>
using namespace std;

//Pairs
void explainPair()
{
    pair<int,int> p={1,5};
    cout<<p.first<<" "<<p.second;  // Output: 1 5

    cout<<endl;

    pair<int,pair<int,int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second; //Output: 1 3 4

    cout<<endl;

    pair<int,int> arr[] = {{11,12}, {13,14}, {15,16}};
    cout<<arr[1].first<<" "<<arr[1].second;                     // Output: 13 14
}

// store elements
// does not require size
// dynamic in nature

//Vector
void explainVector()
{
    vector<int> v; //empty container
    v.push_back(1);
    v.emplace_back(2);

    cout<<v[0]<<" "<<v[1]<<"\n";

    vector<pair<int,int>> vec;

    vec.push_back({5,6});
    vec.emplace_back(3,4);

    for(auto it:vec)
    {
        cout<<it.first<<" "<<it.second<<"\n";
    }

    vector<int> v1(5,10);  // Size = 5 and all values filled with 10

    vector<int> v2(v1); //Copy container

    vector<int> v3 = {11,22,33,44,55,66,77};

    vector<int>:: iterator it = v3.end();  // Points to the first address of container
                                             // v3.end() points after last index
    cout<<*(it)<<"\n";

    ++it;

    cout<<*(it)<<"\n";

    cout<<v3.back()<<"\n";                  // print last element of the vector

    cout<<v3.size()<<"\n";

    v3.erase(v3.begin());

    v3.erase(v3.begin(), v3.begin()+2);

    v3.insert(v3.begin()+1,10);             //(address,value of element)
    v3.insert(v3.begin(),2,23);             //(address,no of elements, value of element)
    v3.pop_back();
    v3.clear();
    cout<<v3.size()<<"\n";
}

//List
void explainList()
{
    // We can add treat this as a vector only
    // But one difference is there that you can add element in front
    list<int> l1;
    l1.push_back(2);    //2
    l1.emplace_back(5); //2 5
    l1.push_front(1);   //1 2 4

    // Rest function are same as vector
}


//Dequeue
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    cout<<dq.front()<<"\n";
    cout<<dq.back()<<"\n";

    // Rest functions same as vector
}


//Stack
void explainStack()
{
    // push(), pop(), top()  All is O(1)

    stack<int> st;
    st.push(1);    // 1
    st.push(2);    // 2 1
    st.push(3);    // 3 2 1
    st.emplace(5); // 5 3 2 1

    cout<<st.top()<<"\n";

    cout<<st.size()<<"\n";
}


//Queue
void explainQueue()
{
    // push(), back(), front()  All is O(1)

    queue<int> q;
    q.push(1);    // 1
    q.push(2);    // 1 2
    q.push(3);    // 1 2 3
    q.emplace(5); // 1 2 3 5

    cout<<q.front()<<"\n"; // 1

    cout<<q.back()<<"\n";  // 5

    q.back()+=6;

    cout<<q.back()<<"\n";  // 11

    cout<<q.size()<<"\n";  // 4
}


//Priority Queue
void explainPriorityQueue()
{
    // Max heap (Push(log n), Top( O(1)), Pop (log n))
    priority_queue<int> pq;
    pq.push(3); //3
    pq.push(5); //5 3
    pq.push(4); //5 4 3

    cout<<pq.top()<<"\n";   // Output: 5
}


//Set
void explainSet()
{
    //Unique and Sorted (tree)
    //Every operation takes log n time

    set<int> s;
    s.insert(1);    //  1
    s.insert(5);    //  1 5
    s.emplace(4);   //  1 4 5
    s.insert(2);    //  1 2 4 5

    auto it = s.find(4);   //return iterator(address) which points to 3
    auto it1 = s.find(6);   //return iterator which points to end i.e s.end()

    s.erase(5);    // 1 2 4 (log n)
}


//MultiSet
void explainMultiSet()
{
    //Sorted (tree)
    //Every operation takes log n time

    multiset<int> s;
    s.insert(1);    //  1
    s.insert(1);    //  1 1
    s.emplace(2);   //  1 1 2

    s.erase(1);

    s.find(2);
}


//Map
void explainMap()
{
    // Can access all the elements in O(1)

    unordered_map<int,string> mp;

    mp[15] = "ABC";
    mp[11] = "XYZ";
    mp[12] = "PQR";

    cout<<mp[12]<<"\n";   // Output: PQR

    mp.find(12);     // return address of key 12.
}

int main()
{
    explainPair();

    //Container
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainMultiSet();

    vector<int> v ={1,7,3,2,5,6};
    sort(v.begin(),v.end(),greater<int>());  // Sort in decreasing order 7 6 5 3 2 1
    reverse(v.begin(),v.end());              // Reverse vector
    return 0;
}
