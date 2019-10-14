#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"

int main () {
  int i=0;
  for (; i<8; i++) {
    if (fork() == 0){
     
    }
    else {
      wait();
    }
    }
  return 0;
}
