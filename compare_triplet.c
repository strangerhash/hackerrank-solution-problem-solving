int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
{
    int al=0,bob=0,i;
    for(i=0;i<a_count;i++)
    {
        if(a[i]>b[i])
            al=al+1;
        if(b[i]>a[i])
            bob=bob+1;
    }
    *result_count = 2;
    static int result[2];
    result[0]=al;
    result[1]=bob;
    return(result);
}
