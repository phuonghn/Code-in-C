//
//  main.c
//  Train
//
//  Created by Phuong Nguyen on 1/14/15.
//  Copyright (c) 2015 Phuong Nguyen. All rights reserved.
//

#include <stdio.h>
int main()
{
    double pos_1 = 0;
    double speed_1 = 0;
    double pos_2 = 0;
    double speed_2 = 0;
    double crash_time = 0;
    double crash_position = 0;
    
    printf("Please enter the starting position of train 1:");
    scanf("%lf",&pos_1);
    printf("Please enter the speed of train 1:");
    scanf("%lf",&speed_1);
    printf("Please enter the starting position of train 2:");
    scanf("%lf",&pos_2);
    printf("Please enter the speed of train 2:");
    scanf("%lf",&speed_2);
    printf("\n");
    
    crash_time = (pos_2 - pos_1)/(speed_2 + speed_1);
    crash_position = pos_1 + (speed_1 * crash_time);
    
    printf("The two trains will collide in %.2lf hours %.2lf miles down the track.", crash_time, crash_position);
    return 0;
    
}
