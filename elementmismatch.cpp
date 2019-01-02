/*
https://practice.geeksforgeeks.org/problems/common-elements/0
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
	    int s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    int arr1[s1],arr2[s2],arr3[s3];
	    
	    for(int i=0;i<s1;i++)
	    cin>>arr1[i];
	    
	    for(int i=0;i<s2;i++)
	    cin>>arr2[i];
	    
	    for(int i=0;i<s3;i++)
	    cin>>arr3[i];
	    
	    vector<int>::iterator itr;
	    vector<int > v(s1+s2);
	    itr=set_intersection(arr1,arr1+s1,arr2,arr2+s2,v.begin());
	    int size=itr-v.begin();
	    vector<int> v2(size+s3);
	    itr=set_intersection(arr3,arr3+s3,v.begin(),v.end(),v2.begin());
	    int val=itr-v2.begin();
	    if(val==0)
	    cout<<"-1";
	    else
	    {
	    for(itr=v2.begin();itr!=v2.end();itr++)
	     if(*itr!=0)
	      cout<<*itr<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
