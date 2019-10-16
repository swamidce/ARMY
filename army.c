#include <stdio.h>

int main() {
   int t,ng,nm;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d",&ng,&nm); 
      int ngArr,nmArr,ngLarge=-1,nmLarge=-1;
      for(int i=0;i<ng;++i)
      {
         scanf("%d",&ngArr);
         if(ngArr>ngLarge)
            ngLarge=ngArr;
      }      
      for(int i=0;i<nm;++i)
      {   
         scanf("%d",&nmArr);   
         if(nmArr>nmLarge)
            nmLarge=nmArr;
      }   
      if(ngLarge>=nmLarge)
         printf("Godzilla\n");
      else
         printf("MechaGodzilla\n");
      
   }
   return 0;
}
