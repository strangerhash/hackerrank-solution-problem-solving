int* reverseArray(int a_count, int* a, int* result_count) 
{
    int i,temp;
    int b=a_count;
for(i=0;i<a_count;i++)
{   temp=a[i];
 a[i]=a[a_count-1];
 a[a_count-1]=temp;



    a_count--;}

    *result_count=b;
    
    return a;
    

}
