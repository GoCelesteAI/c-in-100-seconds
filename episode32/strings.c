#include <stdio.h>
#include <string.h>

int main() {
  // strcat — append one string to another
  char greeting[50] = "Hello";
  strcat(greeting, " World");
  printf("strcat:  %s\n", greeting);

  // strncat — safer append with limit
  char buf[20] = "Hi";
  strncat(buf, " there, friend!", 6);
  printf("strncat: %s\n", buf);

  // strchr — find first occurrence of a char
  char path[] = "/home/user/docs/file.txt";
  char *dot = strchr(path, '.');
  printf("strchr:  %s\n", dot);

  // strstr — find a substring
  char sentence[] = "The quick brown fox";
  char *found = strstr(sentence, "brown");
  printf("strstr:  %s\n", found);

  // combined: build a greeting
  char name[50] = "C";
  char message[100] = "Welcome, ";
  strcat(message, name);
  strcat(message, " programmer!");
  printf("\n%s\n", message);

  return 0;
}
