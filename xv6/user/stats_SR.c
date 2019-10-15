#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"
#include "syscall.h"
#include "traps.h"
#include "pstat.h"

int main (void) {
  struct pstat * stats = malloc(sizeof(struct pstat));
  printf(1,"Inside stats_SR.c main()\n");
  getpinfo(stats);
  int i=0;
  int size = 64;
  for (; i < size; i++){
    if (stats->pid[i] == 0) break;
    printf(1,"I: %d -- Use: %d; Tickets: %d; PID: %d Ticks: %d\n", i, stats->inuse[i], stats->tickets[i], stats->pid[i], stats->ticks[i]);
  }
  exit();
}
