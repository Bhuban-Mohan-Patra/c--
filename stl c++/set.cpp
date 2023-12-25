
#include <bits/stdc++.h>
using namespace std;

int main() {
   
 // unique and sorted
 set<int> st;
 st.insert(1);
 st.insert(4);
 st.insert(65);
 st.insert(1);
 st.insert(9);
 
 // all in O(log n)
 
 auto i= st.find(1);   
     cout<<*i<<endl;
 auto k = st.find(898);         // when element is not present in set then it returns end()
    cout<<*k<<endl;   
 
 auto j= st.count(9);       //return boolean
    cout<<j<<endl;
 
 for(auto it : st)
    cout<<it<< " ";


 
// erase is same work as vector and also we can give value instead of iterator to erase


// multi set =================================================================4
// sorted but not unique
// multiset<int> ms;
// if we do erase by giving element then it erase all same elements but for iterator only one 



// unordered set =================================================================
// unique but not sorted               hash table  random order
// unordered_set<int> us;
// only upper and lower bound are not working  and for other    O(1)


    return 0;
}