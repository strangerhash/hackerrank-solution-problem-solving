int main() {
	
    int n,x,sum;
    scanf("%d", &n);
    while(n>0)
    { x=n%10;
     sum=sum+x;
     n=n/10;}
    
    printf("%d",sum);
    
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}
