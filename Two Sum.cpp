#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back
vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<num.size()-1;i++){
            for(int j=1;j<num.size();j++){
                if(num[i]+num[j]==target) return {i,j};
            }
        }
    }

#define cs cout<<"Case "<<tc<<": "

int main(){
    vector<int> nums = [2,7,11,15];
    int target =9;
    vector<int> s=twoSum(&nums,target);
    for(int i=0;i<s.size();i++) cout<<s[i]<<" ";
}
