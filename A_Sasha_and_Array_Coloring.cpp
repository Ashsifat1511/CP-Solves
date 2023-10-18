#include<bits/stdc++.h>

using namespace std;

#define all(x) x.begin(),x.end()
#define forn for(int i = 0; i < n; i++)

const int N = 1e6+7;

typedef  long long int ll;

#define pb push_back

#define cs cout<<"Case "<<tc<<": "
int a[100],b[4];
	
void mergeArrays(int A[], int m, int B[], int n) {
    int i = m - 1; // Index for elements in array A
    int j = n - 1; // Index for elements in array B
    int k = m + n - 1; // Index for merged array A

    // Merge the elements of B into A in sorted order
    while (i >= 0 && j >= 0) {
        if (A[i] > B[j]) {
            A[k] = A[i];
            i--;
        } else {
            A[k] = B[j];
            j--;
        }
        k--;
    }

    // Copy the remaining elements of B into A if any
    while (j >= 0) {
        A[k] = B[j];
        j--;
        k--;
    }
}


int main(){
	for(int i=0;i<4;i++) cin>>a[i];
	for(int i=0;i<4;i++) cin>>b[i];
	mergeArrays(a,4,b,4);
	for(int i=0;i<8;i++) cout<<a[i]<<" ";
	return 0;
}
