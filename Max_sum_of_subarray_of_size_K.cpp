#include<bits/stdc++.h> 
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0, j=0;
        long int m=INT_MIN, sum=0;
        while(j<N)
        {
            sum=sum+Arr[j];
            if(j-i+1 < K)
            j++;
            else if(j-i+1 == K)
            {
                m=max(m,sum);
                sum = sum-Arr[i];
                j++;
                i++;
            }
        }
        return m;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 