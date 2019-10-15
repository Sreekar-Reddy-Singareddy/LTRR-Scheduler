#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"

int main () {
  printf(1,"PID: %d - Inside ticks.c\n", getpid());
  int tickets = 270;
  settickets(tickets);
  if (fork() == 0){
    printf(1,"Im Child PID = %d\n", getpid());
  }
  else {
    printf(1, "Im Paren PID = %d\n", getpid());
    wait();
  }
  exit();
}
