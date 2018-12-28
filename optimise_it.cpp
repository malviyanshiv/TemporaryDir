#include <iostream>
using namespace std;
int check(int arr[],int n)
{
    int c=0;
    for(int i=1;i<n-1;i++)
    if(arr[i]!=0 && arr[i]==arr[i+1])
    return 1;
    return 0;
}
int main() {
    int T;
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int c=check(arr,n);
        while(c)
        {
           
            for(int i=0;i<n-1;i++)
            {
                if(arr[i]==arr[i+1])
                {
                arr[i]=2*arr[i];
                arr[i+1]=0;
                 int count=0;
            for(int j=0;j<n;j++)
            if(arr[j]!=0)
            arr[count++]=arr[j];
            
            while(count<n)
            arr[count++]=0;
                }
            }
            
            c=check(arr,n);
            
        }
        for(int i=0;i<n;i++)
        cout << arr[i] <<" ";
    }
	return 0;
}
