//
//  Q2.c
//  Tutorial 2
//
//  Created by Joseph, Andrew on 9/4/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include "Q2.h"
#include "Simple.h"
#include "Counter.h"
int question2(int argc) {
int question2=5;
    int loop2=0;
    while (loop2 < 1) {
puts("Which command should you use to print a non-integer?\n A puts\n B printf\n");
//this is the same thing as the last one
question2=getchar();
question2=getchar();
switch(question2)
{
    case 'A':
    case 'a':;
        puts("Correct");
    question2=1;
        loop2++;
        break;
    case 'B':
    case 'b':;
        puts("Incorrect");
        loop2++;
        break;
    default:
        puts("That's not even one of the options");
        break;
        
};
    }
    return question2;
    
}
