#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
   
   printf(0,"The ppid is : %d \n",getppid());
   printf(0,"and pid is : %d \n",getpid());
   exit();

}