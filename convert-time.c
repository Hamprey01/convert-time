#include <stdio.h>
#include <stdlib.h>

int main(){
     int sec, hour, minute, seconds;

     printf("Enter time in seconds:");
     scanf("%d", &sec);

     hour = sec/3600;
     minute = sec / 60;
     seconds = sec - hour*3600 - minute*60;

     printf("%d seconds = %d hour/s : %d minute/s : %d second/s", sec, hour, minute, seconds);

     return 0;
}
