//
//  main.c
//  Temperature
//
//  Created by Joseph, Andrew on 9/16/19.
//  Copyright © 2019 Joseph, Andrew. All rights reserved.
//

#include <stdio.h>

int temp(int argc) {
    int ft;
    printf("Please enter a Fahrenheit temperature\n");
    scanf("%d", &ft);
    int cc=(ft-32);
    int ct=(cc/1.8);
    printf("Fahrenheit  Celcius   FtoFreze   CtoFreze\n");
    printf("    %d        %d       %d          %d\n", ft, ct, ft-32, ct);
    return 0;
}
