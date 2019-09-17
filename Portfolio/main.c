//
//  main.c
//  Tutorial 2
//
//  Created by Joseph, Andrew on 9/3/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//
#include <stdio.h>
#include "quiz.h"
#include "time.h"
int main(int argc, const char * argv[])
{   printf("Pick which lab you want\n A for quiz\n B for pythagoras lab\n C for time lab\n D for temperature lab\n");
    int choice;
    choice = getchar(); // checks for the answer you put in
    switch(choice)
    {
        case 'A':
        case 'a':;
             quizmain();
            break;
        case 'B':
        case 'b':;
            timer();
            break;
        
    }
    return 0;
}
