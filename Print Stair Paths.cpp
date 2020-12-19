#include<bits/stdc++.h>
using namespace std;
vector<string> printPaths(int n)
{
  if(n<0){
    vector<string> v1;
    return v1;
  }
  if(n==0){
    vector<string> v1;
    v1.push_back("");
    return v1;
  }
  vector<string> p1=printPaths(n-1);
  vector<string> p2=printPaths(n-2);
  vector<string> p3=printPaths(n-3);
  vector<string> ans;
    for(string s:p1)
    ans.push_back("1"+s);
    for(string s:p2)
    ans.push_back("2"+s);
    for(string s:p3)
    ans.push_back("3"+s);
    return ans;
}
int main()
{
  int n;
  cin>>n;
  vector<string> ans=printPaths(n);
  for(string s:ans)
  cout<<s<<endl;
}
