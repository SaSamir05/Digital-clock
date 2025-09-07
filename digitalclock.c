#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main(){
  int hours, minutes, seconds;
  hours = minutes = seconds = 0;
  while(1){
    system("cls"); //for windows use "cls", for linux use   "clear"
    printf("%02d : %02d : %02d\n", hours, minutes, seconds);

    fflush(stdout);
    sleep(1);
    seconds++;
    if(seconds == 60){
      seconds = 0;
      minutes++;
    }
    if(minutes == 60){
      minutes = 0;
      hours++;
    }
    if(hours == 24){
      hours = 0;
      minutes = 0;
      seconds = 0;  
    }
    sleep(1);

  }
  return 0;
   
}
