//
//  main.c
//  prog_8
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int input=0;
    while(scanf("%d",&input) != -1){
        
        int j=0;
        for(j=2 ; j<input ; j++){

            if(input%j==0){
                printf("NO\n");
                break;;
            }
        
        }
        if(j==input)
            printf("YES\n");
        
    }
    
    return 0;
}
