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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(0));
    int t=1+rand()%100;
    cout<<t<<endl;
    vector<string>v;
    while(t--){
        int n,q;
        n=1+rand()%100;
        q=1+rand()%100;
        cout<<n<<" "<<q<<endl;
        while(n>0){
            int len=1+rand()%1000;
            string s;
            while(len--){
                s.pb((char)(97+rand()%26));
            }
            cout<<s<<endl;
            n--;
                if(n<=0)break;

            int len_=1+rand()%9;
            while(len_--){
                unsigned num = chrono::system_clock::now().time_since_epoch().count();
                shuffle (s.begin(), s.end(), default_random_engine(num));
                if(n<=0)break;
                cout<<s<<endl;
                n--;
            }
            
            int l=1+rand()%100000;
            while(l--){
                unsigned num = chrono::system_clock::now().time_since_epoch().count();
                shuffle (s.begin(), s.end(), default_random_engine(num));
                v.pb(s);
            }
        }
        while(q--){
            
            cout<<v[rand()%v.size()];
            cout<<endl;
        }
        v.clear();
    }

    return 0;
}
