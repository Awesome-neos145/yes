//////////////////////////////////////
//
// yes main program
//
// 2026 by Ian Mathews / awes145
//
//////////////////////////////////////

// this is so fucking useless
// just use the built in command
// ig if you use windows it's acceptable

#include "y_def.h"

int main(int argc, char *argv[])
{
    #ifdef CHOOSEINPUT
        if (argc > 1)
        {
            while (1)
            {
                printf("%s\n", argv[1]);
            }
        }
        while (1)
            printf("y\n");
    #else
    while (1)
        printf("y\n");
    #endif
    return 0;
}