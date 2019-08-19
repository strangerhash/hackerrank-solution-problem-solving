void staircase(int n) {
    int i,j;
                     
                           for(i=1;i<=n;++i)
                           {
                                for(j=1;j<=n;++j)
                                {
                                    if(j<=(n-i))
                                   printf(" ");
                                    else 
                                    
                                     printf("#");
                                }
                           
                           printf("\n");
                       }

}
   
