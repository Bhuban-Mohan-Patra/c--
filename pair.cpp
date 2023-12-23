#include <bits/stdc++.h>
using namespace std;

int main() {
    pair <int , int> p = {2,4};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,char> a;
    a.first = 2;
    a.first = 56;
    a.second = 'c';
    cout<<a.first<<" "<<a.second<<endl;
   pair<int ,pair<int,int>> t={3,{4,6}};
   cout<<t.first<<" "<<t.second.first<<" "<<t.second.second<<endl;
   pair<int,int>arr[] = { {3,4},{6,67}};
   cout<<arr[1].second<<endl;

    return 0;
}