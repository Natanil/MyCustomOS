#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
   int* rtime=(int *)1;
   int* wtime=(int *)2;
   printf(0,"test ----  %d",getPerformanceData(wtime,rtime));
   exit();

}