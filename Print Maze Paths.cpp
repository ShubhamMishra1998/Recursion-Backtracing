#include<bits/stdc++.h>
using namespace std;
vector<string> getMazePaths(int r,int c,int n,int m)
{
  if(r==n&&c==m)
  {
    vector<string> v1;
    v1.push_back("");
    return v1;
  }
  vector<string> hPath,vPath,ans;
  if(c<m)
  hPath=getMazePaths(r,c+1,n,m);
  if(r<n)
  vPath=getMazePaths(r+1,c,n,m);
  for(string s:hPath)
  ans.push_back("h"+s);
  for(string s:vPath)
  ans.push_back("v"+s);
  return ans;
}
int main()
{
  int n,m;
  cin>>n>>m;
  vector<string> ans=getMazePaths(1,1,n,m);
  for(string s:ans)
  cout<<s<<endl;
}
