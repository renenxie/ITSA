//
//  main.c
//  prog_9
//
//  Created by 謝仁恩 on 2024/1/9.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int input=0;
    
    while( scanf("%d",&input)!=-1 ){
        int tot=0;
        for(int i=1 ; i<=input ; i++){
            if(i%3==0)
                tot+=i;
        }
          
        printf("%d\n",tot);
    }

    return 0;
}
