#include<bits/stdc++.h>

using namespace std;

int main()
{
  string a;
  long long sum = 0,i;
  long long  count = 0;

  cin>>a;

  while(a.size() > 1)
  {
    sum = 0;
    for(i = 0;i < a.size();i++)
    {
      sum += a[i]-48;
    }
    a = to_string(sum);
    // cout<<a<<"\n";
    count++;
  }
  cout<<count;
}
