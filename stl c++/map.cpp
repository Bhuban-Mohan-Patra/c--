#include <bits/stdc++.h>
using namespace std;

int main() {
    // unique key value pair        key is any data type and sorted order
   
  map<int,int> map;
  map[1]=2;
  map.insert({2,6});
  map.insert({3,46});
  
  for(auto it:map)
    cout<<it.first<<" "<<it.second<<endl;
    
  cout<<map[1]<<" "<<map[2]<<" "<<map[3]<<endl;  // only returns values  if not exist then zero
  auto i = map.find(3);    // return iterator where it present  same as set find for key
  cout<<i->second;   // no dot use ->
  
// lowerbound and upper bound
//erase swap size empty
    

    //multimap
    //unordered map
    return 0;
}