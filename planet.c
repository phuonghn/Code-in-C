//
//  planet.c
//  
//
//  Created by Phuong Nguyen on 1/21/15.
//
//

#include "planet.h"
#include <stdio.h>
#include <math.h>
float distance( float x1, float y1, float x2, float y2);
{
    float x1 =0;
    float x2=0;
    float y1=0;
    float y2=0;
    float distance=0
    
    printf("Enter x1 and y1");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 and y2");
    scanf("%d %d", &y1, &y2);
    distance = sqrt( (x2-x1)+ (y2-y1));
    return distance;
    
}

int main(){
    printf("%f\n", distance(0,0,100,0));
    return 0;
}
