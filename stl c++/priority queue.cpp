
#include <bits/stdc++.h>
using namespace std;

int main() {
 // max heap  
  priority_queue<int> pq;
  pq.push(5);                       //O(log n)
  pq.push(9);
  pq.push(8);
  
//   pq.pop();       // the pop function is a void function       O(log n)
  
  cout<<pq.top();                      //O(1)



//   min heap
priority_queue <int, vector<int>, greater<int> > mpq;
    mpq.push(5); 
    mpq.push(1); 
    mpq.push(10); 
    mpq.push(30);

cout<<mpq.top();

    return 0;
}