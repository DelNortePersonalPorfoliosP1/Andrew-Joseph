//
//  Simple.c
//  Tutorial 2
//
//  Created by Joseph, Andrew on 9/3/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include "Simple.h"
#include "Counter.h"
int simpleio1(int argc) {
    int question=0;
    int loop = 0;
    while (loop < 1) {
    puts("What is the sign for integers?\n Put the sign that goes after the percent sign.\n A d\n B i\n C c\n D A and B\n");
   
    question = getchar(); // checks for the answer you put in
    switch(question)
    {
        case 'A':
        case 'a':;
            puts("Incorrect");
            loop++; //this loops the function in case you put something that isnt an answer
            break;
        case 'B':
        case 'b':;
            puts("Incorrect");
            loop++;
            break;
        case 'C':
        case 'c':;
            puts("Incorrect");
            loop++;
            break;
        case 'D':
        case 'd':;
            puts("Corect");
          question=1; //this sets the the 1 or 0 value so we can print the score
            loop++;
            break;
        default:
            puts("That's not even one of the options");
            break;
    };
    
    };
 
    return question; //this returns a value of 1 or 0 in our code
   
}
