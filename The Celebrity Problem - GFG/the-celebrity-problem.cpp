//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here
        int m=M.size();
         vector<vector<int>> matrix(n,vector<int>(m, 0));
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(M[i][j]==1){
                     matrix[j][i]=1;
                 }
             }
         }
         for(int i=0;i<n;i++){
             bool flag=true;
             for(int j=0;j<m;j++){
                 if(i!=j&&matrix[i][j]==0){
                    flag=false;
                 }
             }
             if(flag==true){
                 bool flg=true;
                for(int k=0;k<m;k++){
                    if(M[i][k]==1){
                        flg=false;
                    }
                }
                if(flg==true){
                     return i;
                }
                 
             }
         }
         return -1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends