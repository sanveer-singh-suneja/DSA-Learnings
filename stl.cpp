// learning stl
#include <bits/stdc++.h>
using namespace std;
void explainPair() {
    pair <int , int> p = {1,3};
    cout<<p.first<<" "<<p.second;
    pair<int, pair<int,int>> p1 = {1,{3,4}};
    cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first;
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout <<arr[1].second;
}
void explainVector() {
    vector<int> v;
    // vector is container dinamic in nature
    v.push_back(1);
    v.emplace_back(2); // emplace_back is fsater than push_back
    v.emplace_back(3);
    v.emplace_back(4);

    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    // in this pair situation emplace_back automatically understand that it is pair
    // but in push back it needs curly brackets

    vector <int> v1(5,100);
    // this means 5 values will be there all 100
    vector <int>v2(v1);
    // v2 will be copy of v1
    vector <int>::iterator it = v.begin();
    // iterator points to memory not element
    it++;
    cout<<*(it)<<" ";

    it+=2;
    cout<<*(it)<<" ";
    vector<int>::iterator it1=v.end();
    // this end doesnot point to last element
    // this end points to memory location after last element
    // so I have to do i-- to reach postiton of last element
    vector<int>::reverse_iterator it2=v.rend();
    it2--;
    vector<int>::reverse_iterator it3=v.rbegin();
    // these r iterators functions same as first reverse the whole vector and then perform begin and end but not actually does
    cout<<*(it2)<<" ";
    cout<<*(it3)<<" ";
    // to print vector
    cout<<endl;
    for (vector<int>::iterator it=v.begin(); it!=v.end();it++) {
        cout<<*(it)<<" ";
    }
    // if we write auto the datatype is automatically defined
    for (auto it=v.begin();it!=v.end();it++) {
        cout<<*(it)<<" ";
    }

    for (auto it : v) {
        cout<<it<<" ";
    } // this one is important for printing vector



    v.erase((v.begin()+1));
    cout<<endl;
    v.erase(v.begin()+2, v.begin()+4);// this is {start,end}
    for (auto it : v) {
        cout<<it<<" ";
    } // this one is important for printing vector


    // insert
    vector<int> v9(2,100); // {100,100}
    v9.insert(v9.begin(),300); // {300,100,100}
    v9.insert(v9.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}
    v9.insert(v9.begin(), copy.begin(),copy.end());// {50,50,300,10,10,100,100}

    cout<<v.size();

    v.pop_back();

}
void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);

    ls.emplace_front();
    for (auto it:ls) {
        cout<<it<<" ";
        it++;
    }
}
void explainDeque() {
    //same as list and vector
}
void explainStack() {
    stack <int> st;
    st.push(1); // {1}
    st.push(2);// {2,1}
    st.push(3);// {3,2,1}
    st.push(3);// {3,3,2,1}
    st.push(5);// {5,3,3,2,1}

    cout<<st.top(); // prints 5
    st.pop(); //st looks like {3,3,2,1}
    cout<<st.top(); //3
    cout<<st.size(); //4
    cout<<st.empty();

    stack<int>st1,st2;
    st1.swap(st2);

}
void explainQueue() {
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back()+= 5;
    cout<<q.back(); // {1,2,9}

    q.pop(); // {2,9}
    cout<<q.front(); // prints 2
}
void explainPQ() {
    // this is max heap
    priority_queue<int>pq;
    pq.push(5); // {5}
    pq.push(2);// {5,2}
    pq.push(8); // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout<< pq.top(); // prints 10
    pq.pop(); // {8,5,2}
    cout<<pq.top(); // prints 8
    cout<<pq.top();

    // if we want a increasing order knows as min heap
    priority_queue<int, vector<int>, greater<int>>pq1;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); // {2,5,8,10}
    cout<<pq.top(); // prints 2
}
void explainSet() {
    // unique and sorted
    set <int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4);// {1,2,4}
    st.insert(3); // {1,2,3,4}

    auto it = st.find(3);
    // returns iterator which points to 3
    auto it1 = st.find(6);
    // if element is not in set it returns st.end()
    // means it points after the last element
    st.erase(5);
    int cnt = st.count(1);
    // if available returns 1 and if not returns 0

}
void explainMultipleset() {
    // it is sorted and not unique
    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1);// all 1s erased
    int cnt = ms.count(1);

    ms.erase(ms.find(1));// as find points to the position not element so only that particular erases
    ms.erase(ms.find(1),ms.find(1)+2);
}
void explainUset() {
    // it stores unique and randomised order
    unordered_set<int> st;
    // lowerbound and upperbound functions doesnot work
}
void explainMap() {
    map<int,int> mpp;
    map<int, pair<int,int>> mpp1;
    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    mpp[2,3]=10;
    for (auto it : mpp) {
        cout<< it.first<<" "<<it.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[5];
    auto it = mpp.find(3);
    cout<< *(it).second;
}
int main() {
    // explainVector();
    // explainList();
    // explainMultipleset();
}