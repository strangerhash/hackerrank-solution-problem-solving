
int main() 
{char ch,s[30],sen[50];
 int size;
 scanf("%c",&ch);
 printf("%c\n",ch);
 scanf("%s",&s);
 printf("%s\n",s);
 scanf(" %[^\n]%*c",&sen);
 printf("%s",sen);
 
/* fgets(sen,100,stdin);;
 size = strlen(sen);
 sen[size-1]='\0';
 printf("%s",sen);
 scanf("%[^\n]%*c",sen);
 printf("%s",sen);
 */
 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
