/*
    Rezwan_4029
    AUST , CSE-25
*/

#include<stdio.h>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<map>
#include<sstream>
#include<set>
#define pb push_back
#define ms(a,v) memset(a,v,sizeof a)
using namespace std;
typedef long long ll;
#define rep(i,n) for( __typeof(n)i = 0 ; i < n ; i++)
#define For(i,n) for( __typeof(n)i = 1 ; i <= n ; i++)
#define forstl(i,n) for(__typeof(n.begin())i = n.begin();i!=n.end();i++)

int main()
{
    string s ;
    map<string,int>m;
    int n ;

    while(cin >> n >> s)
    {
        int len = s.length() ;
        m.clear();
        int mx = 0 ;
        rep(i,len)
        {
            string p = s.substr(i,n);
            m[p]++;
            mx = max( mx,m[p]);
        }
        forstl(it,m)if(mx == it->second){
            cout<< it->first << endl;
            break ;
        }
    }
}
