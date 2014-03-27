#include<stdio.h>
int main(){
   
   int p,m;  
   printf("Enter number of processes:");
   scanf("%d",&p);
   printf("Enter number of Memory blocks:");
   scanf("%d",&m);
   
   int parr[p],marr[m],i;
   for(i=0;i<p;i++)
   {
     printf("Enter size of process %d:",i+1);
     scanf("%d",&parr[i]);      
   }
   for(i=0;i<m;i++)
   {
     printf("Enter size of memory %d:",i+1);
     scanf("%d",&marr[i]);      
   }
   int j=0;
   for(i=0;i<p;i++){
      printf("search %d %d",i,j);
       for(;;j=(j+1)%m){
         if(marr[j]>=parr[i]){
              marr[j]-=parr[i];
              printf("Allocating process %d to memory %d\n Size remaining in it after allocation %d\n\n",i+1,j+1,marr[j]);   
              printf("%d %d\n\n",j,(j+1)%m);
              
              break;            
         }  
         
        
     }    
      if(j==m)
         {printf("Not enough memory for process %d",i);break;}        
   }
  getch();  
}
