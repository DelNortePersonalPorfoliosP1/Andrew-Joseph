//
//  main.c
//  Tutorial 2
//
//  Created by Joseph, Andrew on 9/3/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include <stdio.h>
#include "Simple.h"
#include "Q2.h"


int main(int argc, const char * argv[]) {
    int score = 0;

printf("Welcome to the Simple I/O Quiz!");
 
    if (simpleio1(5) == 1){ //this tests the return value and plays the function
        score++; //if they got it right this adds to the score counter
    }

    if (question2(5) ==1){
        score++;
    }
    printf("%d out of 2\n", score);
    printf("%d percent\n",score*100/2 );


    
return 0;
}


          
