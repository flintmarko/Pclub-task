#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
using vi = vector<int>;
using vb = vector<bool>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvb = vector<vb>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vs = vector<string>;
using vc = vector<char>;
#define pb push_back
const int mod=1e9+7;
const int N=1e5+5;
map<string,int> cnt;
set<string> vocab;
string s;
string g(string str){
    sort(str.begin(),str.end());
    return str;
}
vll dp(N);
int length,m_length;
ll solve(int index){
    int i;
    if(index==length) return 1;
    string present="";
    ll &ans=dp[index];
    if(ans!=-1)return ans;
    ans=0;
    int limit=min(length,index+m_length+1);
    for(i=index;i<limit;i++){
        present+=s[i];
        sort(present.begin(),present.end());
        if(cnt[present]){
            ans+=(cnt[present]*solve(i+1))%mod;
            if(ans>=mod)ans-=mod;
        }
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    string word;
    while(t--){
        int n,q;
        cin>>n>>q;
        cnt.clear(),vocab.clear();
        m_length=0;
        for(int i=0;i<n;i++){
            cin>>word;
            m_length=max(m_length,(int)word.length());
            if(vocab.find(word)==vocab.end()){
                vocab.insert(word);
                cnt[g(word)]++;
            }
        }
        
        while(q--){
            cin>>s;
            length=s.size();
            for(int i=0;i<=length;i++)dp[i]=-1;
            cout<<solve(0)<<" ";
        }
        cout<<endl;
    }
    return 0;
}