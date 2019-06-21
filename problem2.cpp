#include<bits/stdc++.h>

using namespace std;




int main()
{
    long long n,m,i,t,a,b;
    priority_queue <long long int, vector<long long int>, greater<long long int> > arr;

   cin>>n;
   cin>>m;

   for(i = 0;i < m;i++)
   {
     cin>>t;
     arr.push(t);
   }

   for(i = 1;i <= m-n;i++)
   {
      a = arr.top();
      arr.pop();
      b = arr.top();
      arr.pop();
      arr.push(a+b);
   }

   cout<<arr.top();

}
