//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<set>
// "compilerPath": "C:/Program Files (x86)/Microsoft Visual Studio/2017/Community/VC/Tools/MSVC/14.14.26428/bin/Hostx64/x64/cl.exe",
using namespace std;
void permute(string s1,int l,int r,set<string> &set)
{
    if(l==r)
    {
        set.insert(s1);
    }
    else
    {
        int i;
        for(i=l;i<=r;i++)
        {
            swap(s1[l],s1[i]);
            permute(s1,l+1,r,set);
            swap(s1[l],s1[i]);
        }
    }
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
	 string str;
	 cin>>str;
	 
     int n = str.length();
	 set<string> set;
	 permute(str,0,n-1,set);
	 for(auto i = set.begin();i!=set.end();i++)
	 {
	     cout<<*i<<" ";
	 }
	 cout<<endl;
    }
	return 0;
}