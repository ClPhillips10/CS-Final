#include <stdio.h>
#include <string.h>
#include <ctype.h>

void left(char word[]);
void right(char word[]);
void inc(char word[]);
void dec(char word[]);


int main(int argc, char* argv[]) {
   if(argc != 3){
      printf("Invalid number of arguments\n");
      return 1;
   }
   
   FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
      printf("Could not open file '%s'\n", argv[1]);
      return 1;
    }
    char word[100000];
    if(strcmp(argv[2], "RDIL") == 0){
      while(fscanf(fp, "%s", word) != EOF) {
         printf("%s\n", word);
   }
}
   //create a string to hold the order of operations using argv[2]
   
   
    for(int i = 0; i < strlen(argv[2]); i ++){
      char argument = argv[2][i];
      
   while(fscanf(fp, "%s", word) != EOF) {
      if (argument == 'L') {
         left(word);
      } else if (argument == 'R') {
         right(word);
      } else if (argument == 'I') {
         inc(word);
      } else if (argument == 'D') {
         dec(word);
      }
      fprintf("The word is: %c\n", &word);
   }
}

   fclose(fp);
   
   return 0;
   
}


void left(char word[]) {
   //printf("made it here with %s (left)\n", word);
   FILE *fp = fopen("output.txt", "w");
   for(int i = 0, j = strlen(word); i < strlen(word); i++, j --) {
      if(j == strlen(word)) {
         fprintf(fp, "%c", word[j - 1]);
      }
      else {
         fprintf(fp, "%c", word[i - 1]);
      }
   }
   printf("\n");
   fclose(fp);

   }
   


void right(char word[]) {
   
     //printf("made it here with %s\n", word);
     FILE *fp = fopen("output.txt", "w");
   for(int i = 0, j = strlen(word); i < strlen(word); i++, j --) {
      if(j == strlen(word)) {
         fprintf(fp, "%c", word[j - 1]);
      }
      else {
         fprintf(fp, "%c", word[i - 1]);
      }
   }
   printf("\n");
   fclose(fp);

   }
   


void inc(char word[]) {
   for(int i =0; i < strlen(word); i ++)
   {
      if(isalpha(word[i])) {
         printf("%c", word[i] - 1);
      }
      else{
         printf("%c", word[i]);
      }
      
   }
   printf("\n");
   
}

void dec(char word[]) {
   for(int i =0; i < strlen(word); i ++)
   {
      if(isalpha(word[i])) {
         printf("%c", word[i] - 1);
      }
      else{
         printf("%c", word[i]);
      }
      
   }
   printf("\n");
   
   }
   

