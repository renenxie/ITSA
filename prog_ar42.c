//
//  main.c
//  prog_ar42
//
//  Created by 謝仁恩 on 2024/1/11.
//

/* Einglish -> Array */
/* https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=29748 */

#include <stdio.h>
#include <stdlib.h>
/* Qsort */
int compare(const void *a, const void *b) {
    return (*(int *)a > *(int *)b) - (*(int *)a < *(int *)b);
}

int main(){
    int number[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &number[i]);
    }

    qsort(number, 10, sizeof(int), compare);

    printf("Largest number = %d\n", number[9]);
    printf("Smallest number = %d\n", number[0]);

    return 0;
}
