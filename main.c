//
//  main.c
//  Triangle lab
//
//  Created by Joseph, Andrew on 9/13/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
    int a;
    int b;
  
    printf("Enter a number for the first side\n");
    scanf("%d", &a);
    printf("Enter a number for the second side\n");
    scanf("%d", &b);
    double c = (a*a) + (b*b);
    double d = sqrt(c);
    printf("here is your answer\n");
    printf("%f\n", d);
    return 0;
}
