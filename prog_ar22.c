//
//  main.c
//  prog_ar22
//
//  Created by 謝仁恩 on 2024/1/11.
//
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=24181 */
/* English -> Array */
#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];

    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++){
        printf("%c", str[i]-3 );
    }

    printf("\n");

    return 0;
}
