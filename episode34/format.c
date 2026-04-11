#include <stdio.h>

int main() {
  // sprintf — format into a buffer
  char msg[100];
  sprintf(msg, "Hello, %s! You are %d.", "Alice", 30);
  printf("sprintf:  %s\n", msg);

  // sprintf — build a filename
  char path[100];
  int id = 7;
  sprintf(path, "/tmp/file_%03d.txt", id);
  printf("path:     %s\n", path);

  // snprintf — safe version with limit
  char small[15];
  int n = snprintf(small, sizeof(small), "This is a very long string");
  printf("snprintf: %s\n", small);
  printf("needed:   %d chars\n", n);

  // snprintf — build a log line
  char log[50];
  snprintf(log, sizeof(log), "[%s] %s: %d", "INFO", "temperature", 42);
  printf("log:      %s\n", log);

  // sprintf vs snprintf
  char safe[20];
  char unsafe[20];
  sprintf(unsafe, "Score: %d/%d", 95, 100);
  snprintf(safe, sizeof(safe), "Score: %d/%d", 95, 100);
  printf("\nunsafe:   %s\n", unsafe);
  printf("safe:     %s\n", safe);

  return 0;
}
