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
