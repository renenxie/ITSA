//
//  main.c
//  prog_2
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int  input=0;
    while(scanf("%d",&input)!=-1){
        
        double output = input*1.6;
        printf("%.1f\n" ,output );
    }
    return 0;
}
