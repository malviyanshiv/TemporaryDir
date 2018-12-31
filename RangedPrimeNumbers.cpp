/*link of question

https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/hell-1/
*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    std::cin >> q;
   // cin>>MAX_N;
    int MAX_N=1000002; 
    int root_max_n=1000;
    bool prime_arr[MAX_N];// to point out which element is prime 
    for(int i=0;i<MAX_N;i++)
    prime_arr[i]=true;
    
    
    prime_arr[0]=false;
    prime_arr[1]=false;
    
    for(int i=2;i<=root_max_n;i++)
    {
        if(prime_arr[i]==true)
        {
            for(int j=i*i;j<=MAX_N;j+=i)
            prime_arr[j]=false;
        }
    }
    
    int cout_prime_arr[MAX_N];  // this array will hold the counts of prime numbers till ith number
    int c=0;
    cout_prime_arr[0]=cout_prime_arr[1]=0;
    for(int i=0;i<MAX_N;i++)
    {
        if(prime_arr[i])
        c++;
        cout_prime_arr[i]=c;
    }
    // for(int i=0;i<=MAX_N;i++)
    // cout<<prime_arr[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<MAX_N;i++)
    // cout<<cout_prime_arr[i]<<" ";
    //for(int i=)
    for(int t=1;t<=q;t++)
    {
        int n,m;
        cin>>n>>m;
        cout<<abs(cout_prime_arr[m]-cout_prime_arr[n-1])<<endl;
    }
	return 0;
}
