int max_of_four(int a,int b,int c,int d)
{   int  ans;
     int e = a > b ? a : b;
    int f = c > d ? c : d;
    ans=e>f?e:f;
    return ans;
    
}
