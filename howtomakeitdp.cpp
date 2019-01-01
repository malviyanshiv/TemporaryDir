int fun(string str1,string str2,int l1,int l2)
{
    if(l1==0)
    return l2;
    else if(l2==0)
    return l1;
    else if(str1[l1-1]==str2[l2-1])
    return 1+fun(str1,str2,l1-1,l2-1);
    else return 1+min(fun(str1,str2,l1,l2-1),fun(str1,str2,l1-1,l2));
}

// Modified using dp
vector< vector<int> > dp(1000, vector<int>(1000, -1));

int fun(string str1,string str2,int l1,int l2)
{
    if(l1==0)
    return l2;
    else if(l2==0)
    return l1;
    else if( dp[l1][l2] != -1 )
    return dp[l1][l2];
    else if(str1[l1-1]==str2[l2-1])
    return (dp[l1][l2] = 1+fun(str1,str2,l1-1,l2-1));
    else return (dp[l1][l2] = 1+min(fun(str1,str2,l1,l2-1),fun(str1,str2,l1-1,l2)));
}


int funDP(string str1,string str2,int l1,int l2)
{
    int arr[l1+1][l2+1];
    for(int i=0;i<=l2;i++)
    arr[i][0]=i;
    for(int i=0;i<=l1;i++)
    arr[0][i]=i;
    arr[0][0]=0;
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        if(str1[i-1]==str2[j-1])
        arr[i][j]=arr[i-1][j-1]+1;
        else arr[i][j]=1+min(arr[i-1][j],arr[i][j-1]);
    }
    for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return arr[l1][l2];
}
