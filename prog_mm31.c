//
//  main.c
//  proj_mm31
//
//  Created by 謝仁恩 on 2024/1/11.
//

/* English -> MAthematics */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1832 */

#include <stdio.h>

int main(){
    int amount, number, total;

    scanf("%d", &amount);

    for(int i = 0; i < amount; i++){
        scanf("%d", &number);
        total = 1;

        for(int j = 1; j <= number; j++){
            total *= j;
        }

        printf("%d\n", total);
    }

    return 0;
}
