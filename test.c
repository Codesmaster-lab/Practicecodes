#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<math.h>
/*int main()
{
   int num;
   num=pow(2,20);
   FILE *fptr;

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","a+");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: %d",num);
   //scanf("%d",&num);
  while(num--)
  {
   int o;
   o=rand();
   fprintf(fptr,"%d\n",o);
  
  }
   fclose(fptr);
   return 0;
}*/

int main()
{
  FILE *fp = fopen("program.txt", "r");
  int ch = getc(fp);
  putchar(ch);
  //while (ch != EOF) 
  //{
    /* display contents of file on screen */ 
 //   putchar(ch); 
  
 //   ch = getc(fp);
  //}
    
  if (feof(fp))
     printf("\n End of file reached.");
  else 
     printf("\n Something went wrong.");
  fclose(fp);
      
  getchar();
  return 0;
}