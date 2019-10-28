//
//  Pow.cpp
//  Algorithms
//
//  Created by Nemanja Ignjatovic on 10/27/19.
//  Copyright © 2019 Nemanja Ignjatovic. All rights reserved.
//

#include <stdio.h>
#define multiply(a, b) (a * b)

/*
 using recursive calls
 Time complexity: O(log exponent) -> O(log N).
 exponent is divided by half on each recursive call
 Space complexity : O(log N)
 */


double powRecursion(double base, long long exponent) {
    if (base == 0)
        return 0;
    if (exponent == 0)
        return 1;
    if (exponent == 1)
        return base;
    if (exponent < 0)
    {
        base = 1.0/base;
        exponent = -exponent;
    }
    double previous = powRecursion(base,exponent/2);
    if (exponent % 2 == 0)
        return previous * previous;
    else
        return previous * previous * base;
}

/*
 using for loop
 Time complexity: O(log exponent) -> O(log N).
 exponent is divided by half on each iteration
 Space complexity : O(1) - constant
 */

double powWhile(int base, int exponent)
{
    int pow = 1;
    while (exponent) //exponent greater then 0
    {
        if ( exponent == 1 )
        {
            pow = pow * base;
            --exponent;
        }
        base = base*base;
        exponent = exponent/2;
    }
    return pow;
}

/*
 user input example
 */
void pow()
{
    double base, exponent;
    
    /* Input base and exponent from user */
    printf("Enter base: ");
    scanf("%lf", &base);
    printf("Enter exponent: ");
    scanf("%lf", &exponent);
    //    double power = powLoop(base, exponent);
    double power = powRecursion(base, exponent);
    printf("%f ^ %f = %f \n", base, exponent, power);
    
}
