#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char* N_endptr;
    char* N_str = readline();
    int N = strtol(N_str, &N_endptr, 10);

    if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }

       
    if((N%2) != 0){                    /*Odd Number*/
        printf("Weird");
    }
    else{                               /*Even Numer */

        if(N >= 2 && N <= 5){
            printf("Not Weird");
        }
        else if(N >= 6 && N <= 20){
            printf("Weird");
        }
        else{
            printf("Not Weird");
        }

    }
    return 0;
}
