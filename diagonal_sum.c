int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int i,sum=0,sux=0,j,y,k;
   
     for(i=0;i<arr_rows;i++)
        {
        sum=sum+arr[i][i];
        }
    for(i=0;i<arr_rows;i++)
         for(j=0;j<arr_columns;j++)
         {
             if(i+j==(arr_rows-1))
                sux=sux+arr[i][j];
         }
    y=sum-sux;
    y=abs(y);
    return y;
}
