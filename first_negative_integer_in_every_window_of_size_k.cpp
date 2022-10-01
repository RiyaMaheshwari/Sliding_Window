#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
        deque<long long> dq;
        vector<long long> ans;
        int j=0, i=0;
        while(j<N)
        {
            if(A[j]<0)
               dq.push_back(A[j]);
            if(j-i+1 < K)
               j++;
            else if(j-i+1 == K)
               {
                   if(dq.size()==0)
                      ans.push_back(0);
                    else{
                        ans.push_back(dq.front());
                        if(A[i]==dq.front())
                        dq.pop_front();
                    }
                    i++;
                    j++;
               }
        }
        return ans;
    }