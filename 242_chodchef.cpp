//  Question1 .......
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x;
    cin>>x;
    if(x%5==0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}

// Question 2.......
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a>>b;
        string ans = "";
        int len = min(n,m);
        for(int i=0;i<len;i++){
            if (a[i]==b[i])
                ans+=a[i];
            else
                break;
        }
        cout<<ans<<endl;
    }
}
// Question 3.......
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n+1,0);
        int player=1;
        int dir=1;
        for(int i=k;i>=1;i--){
            v[player]+=i;
            if(dir==1){
                if(player==n){
                    dir=-1;
                }else{
                    player++;
                }
            }else{
                if(player==1){
                    dir=1;
                }else{
                    player--;
                }
            }
        }
        int ans=0;
        for (int i=1;i<=n;i++) {
            ans = max(ans,v[i]);
        }
        cout<<ans<<endl;
    }
}
//  Question 4.........
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a==b){
            cout<<0<<endl;
        }
        else if(__gcd(a,c)==__gcd(b,c)){
            cout<<1<<endl;
        }
        else if (__gcd(a,c+1) == __gcd(b,c+1)) {
            cout<<2<<endl;
        }
        else {
            cout<<3<<endl;
        }
    }
}