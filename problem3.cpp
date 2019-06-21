#include<bits/stdc++.h>

using namespace std;


int findMinSum(int n)
{
  long long res = 0,i,j;
  int assigned = 1;

  bool visited[n];

  memset(visited,false,sizeof(visited));

  for(i = 2;i <= n;i++)
  {
    if(visited[i] == false)
    {
      j = i;
      while(j <= n)
      {
        visited[j] = true;

        j += i;
      }
      res += assigned;
      assigned++;
    }
  }
  return res;
}

int main()
{
  int n;

  cin>>n;

  cout<<findMinSum(n);
}
