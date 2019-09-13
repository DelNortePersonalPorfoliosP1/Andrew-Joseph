//
//  main.c
//  Clock
//
//  Created by Joseph, Andrew on 9/13/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    int clarification;
    printf("enter a time\n");
    scanf("%d", &a);
    int b = a/60;
    int c = b/60;
    int d = c/24;
    printf("enter a clairification\n");
    printf("s for seconds\n m for minutes\n h for hours\n d for days\n");
    clarification=getchar();
    clarification=getchar();
    switch(clarification)
    {
        case 'S':
        case 's':;
            printf("%d\n", a);
            break;
        case 'M':
        case 'm':;
            printf("%d\n", b);
            break;
        case 'H':
        case 'h':;
            printf("%d\n", c);
            break;
        case 'D':
        case 'd':;
            printf("%d\n", d);
            break;
        default:
            printf("thats not an option\n");
         
   
    }
     return 0;
    }
    
