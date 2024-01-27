#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "

vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        for(int mask=0;mask <(1<<n);mask++){
        //int sum = 0;
        vector<int> subset;
        for(int i=0;i<n;i++){
            if((mask>>i)&1) {
                subset.pb(nums[i]);
            }
        }
        ans.pb(subset);
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<int>> sets= subsets(arr);
    int cas=1;
    for(auto v:sets){
        cout<<cas<<": ";
        for(auto x: v){
            cout<<x<<" ";
        }
        cout<<endl;
        cas++;
    }
    return 0;
}
