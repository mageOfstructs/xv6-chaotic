#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
  // int *t1 = malloc(4096);
  // memset(t1, 42, 4096);
  // for (int i = 0; i < 4096 / sizeof(int); i++) {
  //   t1[i] = 42;
  // }
  int t1 = 42;
  printf(1, "PID: %d\n", getpid());
  int *t2 = malloc(sizeof(int));
  t2[0] = ~42;
  printf(1, "Write 2 done\n");
  printf(1, "%d\n", t1);
  printf(1, "%d\n", t2[0]);
  scramble(&t1, t2);
  printf(1, "After scrambling:\n");
  printf(1, "%d\n", t1);
  printf(1, "%d\n", *t2);
  free(t2);
  exit();
}
