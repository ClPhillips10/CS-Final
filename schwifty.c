#include <stdio.h>
#include <string.h>
#include <ctype.h>

void left(char word[]);
void right(char word[]);
void inc(char word[]);
void dec(char word[]);

int main(argc, char *argv[]) {
   FILE *fp = fopen("example.txt", "r");
   if (fp == NULL) {
      perror("Error opening file");
      return -1;
   }
   return 0;
}

void left(char word[]) {
   
}

void right(char word[]) {
   
}

void inc(char word[]) {
   
}

void dec(char word[]) {
   
}
