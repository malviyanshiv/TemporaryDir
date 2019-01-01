/*
https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/bet-2/
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;

int main() {
    int max_n=1000000;
    int no_factors[max_n+1]={0};
    for(int i=1;i<=max_n;i++)
    {
        for(int j=2;j<=sqrt(i);j++)
        if(i%j==0)
        {
            if(i/j==j)
            ++no_factors[i];
            else
            no_factors[i]+=2;
        }
        no_factors[i]+=2;
    }
    // for(auto x:no_factors)
    // std::cout << x << " ";
    int T;
    std::cin >> T;
    for(int t=1;t<=T;t++)
    {
        int money;
        cin>>money;
        int max_factor=0;
        int max_index=0;
        for(int j=money;j>=2;j--)
        {
            if(no_factors[j]>max_factor)
            {
                max_factor=no_factors[j];
                max_index=j;
            }
        }
        //cout<<max_index<<" "<<max_factor<<endl;
        cout<<max_index*max_factor+(money-max_index)<<endl;
        
    }
	return 0;
}
