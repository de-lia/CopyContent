#include <stdio.h>
#include <stdlib.h>


int main() {
   char ch;
   FILE *source, *target;
   
   char source_file[]="file1.txt";
   char target_file[]="file2.txt";
   
   source = fopen(source_file, "r");
   if (source == NULL) {
      printf("File is empty.");
   }
   
   target = fopen(target_file, "w");
   if (target == NULL) {
      fclose(source);
      printf("Press any key to exit");
      exit(0);
   }
   while ((ch = fgetc(source)) != EOF)
      fputc(ch, target);
   printf("Copy complete.");
   fclose(source);
   fclose(target);
   
   return 0;
}
