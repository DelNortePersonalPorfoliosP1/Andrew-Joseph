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
#include "pythagoras.h"
#include "temperature.h"
int main(int argc, const char * argv[])
{
    int reload=1;
    while (reload>0)
    {
        
        printf("Pick which lab you want\n A for quiz\n B for time lab\n C for pythagoras lab\n D for temperature lab\n");
        int choice;
        while((choice=getchar()) !='\n' && choice != EOF) // checks for the answer you put in
            switch(choice)
        {
            case 'A':
            case 'a':;
                quizmain();
                reload--;
                break;
            case 'B':
            case 'b':;
                timer();
                reload--;
                break;
            case 'C':
            case 'c':;
                triangle();
                reload--;
                break;
            case 'D':
            case 'd':;
                temp(4);
                reload--;
                break;
                default:
                printf("thats not an option, please pick again\n");
                
                
                
                
        }
        if ((!(reload>0)))
        {
            printf("Pick another?\n Y for yes\n N for no\n");
            int stonk;
            while((stonk=getchar()) !='\n' && stonk != EOF)
                switch(stonk)
            {
                case 'Y':
                case 'y':;
                    reload++;
                    break;
                case 'N':
                case 'n':;
                    
                    break;
                    
            }
        }
    }
    return 0;
}
