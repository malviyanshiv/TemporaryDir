/*link of question

https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/hell-1/
*/

//TLE after TestCase 53


#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    std::cin >> q;
   // cin>>MAX_N;
    int MAX_N=1000002;
    int root_max_n=1000;
    //int root_max_n=sqrt(MAX_N+1);
    bool prime_arr[MAX_N];
    for(int i=0;i<MAX_N;i++)
    prime_arr[i]=true;
    
    
    prime_arr[0]=false;
    prime_arr[1]=false;
    
    //prime_arr[2]=true;
    for(int i=2;i<=root_max_n;i++)
    {
        if(prime_arr[i]==true)
        {
            for(int j=i*i;j<=MAX_N;j+=i)
            prime_arr[j]=false;
        }
    }
    
    int cout_prime_arr[MAX_N];
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
    for(int t=1;t<=q;t++)
    {
        int n,m;
        cin>>n>>m;
        int a=min(n,m);//here max/min is use to get rid of 9 7 from 7 9 because in both cases ans will vary according
        int b=max(n,m);//to implementation
        int c=0;
        for(int i=a;i<=b;i++)
        {
            if(prime_arr[i])
            c++;
        }
	    
	    /*
	    total counting approach
	    int a=max(n,m);
	    int b=min(n,m);
	    int c=cout_prime_arr[a]-cout_prime_arr[b-1];
	    */
	    
        cout<<c<<endl;
    }
	return 0;
}
