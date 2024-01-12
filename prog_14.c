//
//  main.c
//  prog_14
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c;
    
    while(1){
        char input[100]={0};
        int input_num =0;
        
        if((c = getchar())==-1)
            break;
        else{
            input[input_num]=c;
            input_num++;
        }
        while(( c = getchar() )!='\n'){
            input[input_num] = c;
            input_num++;
        }
        
        char reverse_input[100]={0};
        //反轉
        int j;
        for(j=0 ; j<input_num ; j++){
            reverse_input[input_num-j-1] = input[j];
        }
        //確認
        for(j=0 ; j<input_num ; j++){
            if(reverse_input[j]!=input[j]){
                printf("NO\n");
                break;
            }
        }
        if(j==input_num)
            printf("YES\n");
    }
    return 0;
}
