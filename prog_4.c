//
//  main.c
//  prog_4
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int start_time[2]={0};
    int leave_time[2]={0};
    scanf("%d %d",&start_time[0] , &start_time[1]);
    scanf("%d %d",&leave_time[0] , &leave_time[1]);
    int tot_min=0;
    int tot_half_hour=0;
    int cost=0;
    tot_min = (leave_time[0]*60 + leave_time[1])-(start_time[0]*60 + start_time[1]);
    tot_half_hour = tot_min/30;
    //printf("tot_half_hour %d\n",tot_half_hour);
    
   if(tot_half_hour<=4)
       cost+=tot_half_hour*30;
   else if (tot_half_hour>4 && tot_half_hour<=8){
       cost += 4*30;
       tot_half_hour = tot_half_hour-4;
       cost += tot_half_hour*40;
    
   }
   else{
       cost+=4*30;
       cost+=4*40;
       tot_half_hour = tot_half_hour -8;
       //printf("tot_half %d\n",tot_half_hour);
       cost+=tot_half_hour*60;
  
   }
    printf("%d\n",cost);
    return 0;
}
