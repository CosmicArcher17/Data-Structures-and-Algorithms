#include <iostream>
#include<vector>
#include<cctype>
#include<queue>
#include<set>
using namespace std;
int lcs(string s1, string s2,int x,int y, vector<vector<int>>&dp){
    if(x==0||y==0) return 0;
    else if(s1[x-1]==s2[y-1]) return dp[x-1][y-1]=1+lcs(s1,s2,x-1,y-1,dp);
    else return dp[x-1][y-1]=max(lcs(s1,s2,x-1,y,dp),lcs(s1,s2,x,y-1,dp));
    return dp[x-1][y-1];
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int x=s1.length();
    int y=s2.length();

    vector<vector<int>>dp(x, vector<int>(y,-1));
    int llcs=lcs(s1,s2,x,y,dp);
    cout<<llcs;
    return 0;
}
