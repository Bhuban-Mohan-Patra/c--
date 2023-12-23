#include<bits/stdc++.h>
   using namespace std;

   int mian(){
   // similar with vector (deque = vector, list = vector + front operation)
   // push/pop_back, insert, swap , erase etc    +   front operation
   
   list<int> ls;
   ls.push_front(34);         //O(n)
   ls.push_front(6);
   ls.push_front(567);
   ls.push_front(8654);
   ls.push_front(309);
   ls.pop_front();
   
   for(auto i:ls)
    cout<<i<<" ";

   return 0;
   }