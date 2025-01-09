#include <stdio.h>

int main()
{ int x ;
  printf("ENTER THE AGE OF CANDIDATE:");
  scanf("%d",&x);    
  if (x<18 ) 
  {
    printf("NOT ELIGIBLE FOR VOTE");

  }
    else{
        printf("ELIGIBLE FOR VOTE");  
      
    }
      
      return 0;
}
