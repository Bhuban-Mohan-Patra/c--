#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(4);                                      //O(1)
    v.push_back(7);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);
    v.push_back(3);
    v.pop_back();
    
    // cout<<v.size()<<endl;                  //O(1)
    
    // cout<<v[2]<<" "<<v.at(1)<<endl;
    
    // cout<<v.front()<<" "<<v.back()<<endl;                   //O(1)
    
    
    //erase function ------------------------------------------------
    // v.erase(v.begin()+1);
    // v.erase(v.begin()+1,v.begin()+3);      //O(n)
    // v.erase(v.begin()+1,v.end()-2);
    
    //insert function --------------------------------------------------
    // v.insert(v.begin(),455);
    // v.insert(v.begin()+1,3,100);         //O(n)
    
    //swap function ----------------------------------------------------
    // vector<int> v1 ={3,5,7};
    // v.swap(v1);                         // swapping the internal pointers to the memory used by the vectors, rather than copying the entire contents           //O(1)
    //     for(auto i : v1)
    //         cout<<i<<" ";
    //     cout<<endl;
    
    
    cout<<v.empty()<<endl;   // return in boolean     //O(1)
    
    v.clear();        // remove all elements            //O(1)
    cout<<v.size()<<endl;
    
    // for(vector<int>::iterator it = v.begin();it!=v.end();it++)
        // cout<<*it<<" ";
    // for(auto it= v.begin();it!=v.end();it++)
    //     cout<<*(it)<<" ";
    for(auto i:v)
        cout<<i<<" ";

    return 0;
}