#include <bits/stdc++.h>
#define int long long 
#define ll long long
#define pb push_back
#define fr first
#define sc second
#define mp make_pair
#define all(a) a.begin(),a.end()
#define rep(i,a,n) for(int i=a;i<n;i++)
#define N 1000000000000
 
using namespace std;
int depth[105]={0};
 
signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
//Input no n
int n;
cin>>n;
vector<int>v(n);
int cnt[n+2]={0}; //cnt will store the count of each of the n-1 elements.
for(int i=0;i<n-1;i++) {cin>>v[i];cnt[v[i]]++;}//getting the n-1 elements and increasing their respective count
for(int i=1;i<=n;i++){
	if(cnt[i]==0) {cout<<i<<endl;break;}//cnt[i]==0 represents the number i wasnt present among the n-1 entered nos. 
}
//program outputs the missing number

// Example Test Case
// Input
// 5
// 4 3 1 2
// Output
// 5
}
 