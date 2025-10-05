#include <stdio.h>
#include <time.h>
#include <unistd.h>  

int main() {
    while(1) {
        
        time_t now = time(NULL);
        struct tm *t = localtime(&now);

        int hour = t->tm_hour;
        int min  = t->tm_min;
        int sec  = t->tm_sec;

        
        printf("Time: %d:%d:%d\n", hour, min, sec);

        
        if(hour == 12 && min == 0 && sec == 0) {
            printf("It's noon!\n");
        }

        sleep(1); 
    }

    return 0;
}

