//
//  main.c
//  prog_16
//
//  Created by 謝仁恩 on 2024/1/11.
//
/*
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char c;
    char first_line[500];
    char second_line[2000];
    int i=0 , j=0;
    //輸入
    while((c=getchar())!='\n'){
        first_line[i] = c;
        i++;
    }
    int first_num = i;
    while((c=getchar())!='\n'){
        second_line[j] = c;
        j++;
    }
    int second_num = j;
    int count=0;
    int first_strat_pointer=0;
    int second_start_pointer=0;
    
    //printf("first_num %d\n",first_num);
    //printf("sec_num %d\n",second_num);
     
    for(int i=0 ; i<second_num - first_num + 1 ; i++){
        
        //printf("sec_pointer %d\n",second_start_pointer);
        for(int j= second_start_pointer ; j<second_start_pointer+first_num ; j++){
            if(first_line[first_strat_pointer]!=second_line[j]){
                first_strat_pointer=0;
                break;
            }
            //printf("first_pointer %d\n",first_strat_pointer);
            if(first_strat_pointer == first_num-1){
                //printf("****count++****\n");
                count++;
                first_strat_pointer=0;
                break;
            }
            first_strat_pointer++;
        }
        second_start_pointer++;
        
    }
    printf("%d\n",count);
    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000], subset[150];
    char *ptr;
    int amount = 0;

    scanf("%s", subset);
    scanf("%s", str);

    ptr = strstr(str, subset);

    while(ptr != NULL){
        amount++;
        ptr = strstr(ptr + 1, subset);
    }

    printf("%d\n", amount);

    return 0;
}
