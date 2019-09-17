char* catAndMouse(int x, int y, int z)
{
   char* a;
             if(abs(x-z)<abs(y-z))
               a="Cat A";
             if(abs(x-z)>abs(y-z))
               a="Cat B";
             if(abs(x-z)==abs(y-z))
               a="Mouse C";   
    return a;
}
