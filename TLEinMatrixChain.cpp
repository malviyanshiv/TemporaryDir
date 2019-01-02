/*https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication/0*/



#include <bits/stdc++.h>
using namespace std;
int fun(int arr[],int i,int j);
int fun2(int arr[],int ,int j);
int memo[100][100];
int maxtrixMultilplication(int arr[],int i,int j)
{
    memset(memo,-1,sizeof(memo));
    return fun(arr,i,j);
}
int fun(int arr[],int i,int j)
{
    if(i==j)
    return 0;
    if(memo[i][j]!=-1)
    return memo[i][j];
     int inf=INT_MAX;
     for(int k=i;k<j;k++)
         inf=min(inf,fun(arr,i,k)+fun(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]); //modified
    return memo[i][j] = inf;
}
int fun2(int arr[],int i,int j)
{
    if(i==j)
    return 0;
    int inf=INT_MAX;
    for(int k=i;k<j;k++)
        inf=min(inf,fun2(arr,i,k)+fun2(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
    return inf;
}
int main() {
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        std::cout << maxtrixMultilplication(arr,1,n-1) << std::endl;
    }
	return 0;
}
