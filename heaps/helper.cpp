#include <stdio.h>
 
void foo(const char *filename)
{
   FILE *file = fopen(filename, "r");
   if(file != NULL)
   {
      printf("%s: opened\n", filename);
      fclose(file);
      printf("%s: closed\n", filename);
   }
   else
   {
      perror(filename);
   }
}