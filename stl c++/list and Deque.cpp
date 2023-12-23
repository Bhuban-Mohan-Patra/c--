
   // similar with vector (deque = vector, list = vector + front operation)
   // push/pop_back, insert, swap , erase etc    +   front operation
   
   list<int> ls;
   ls.push_front(34);
   ls.push_front(6);
   ls.push_front(567);
   ls.push_front(8654);
   ls.push_front(309);
   ls.pop_front();
   
   for(auto i:ls)
    cout<<i<<" ";