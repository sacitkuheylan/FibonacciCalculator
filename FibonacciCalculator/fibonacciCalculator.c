//
//  main.c
//  FibonacciCalculator
//
//  Created by Sacit Küheylan on 9.10.2020.
//

#include <stdio.h>
#include "math.h"


void calcFibonacci(int n) {
    for(int i = 1; i < n; i++) {
        printf("%.0f\n", (pow(((1+sqrt(5.0))/2.0),i) - pow(((1-sqrt(5.0))/2.0),i))/sqrt(5.0));
    }
}

int main(int argc, const char * argv[]) {
    int n = 0;
    printf("Enter Sequence Limit: ");
    scanf("%d", &n);
    calcFibonacci(n);
}

