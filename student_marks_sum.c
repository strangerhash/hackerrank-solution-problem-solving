int marks_summation(int* marks, int number_of_students, char gender) {
    int i,sum=0;
        if(gender=='g')
       {
        for(i=0;i<number_of_students;i++)
        {
            if(i%2!=0)
            {
                sum=sum+marks[i];
            }
        }
    }
    else if(gender=='b')
    {for(i=0;i<number_of_students;i++)
       {if(i%2==0)
         {
    
        
            sum=sum+marks[i];
        }
       }
    }   
    
    return sum;
}
