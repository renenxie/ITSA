//
//  main.c
//  prog_32
//
//  Created by 謝仁恩 on 2024/1/11.
//



#include <stdio.h>
#include <string.h>

int main() {
    char sentence[101];  // 限制句子長度為100個字
    fgets(sentence, sizeof(sentence), stdin);

    int replaceCount;
    scanf("%d", &replaceCount);

    // 計算新的內容的開始位置
    int newStart = strlen(sentence) - replaceCount;

    // 替代內容
    for (int i = 0; i < replaceCount; ++i) {
        sentence[newStart + i] = getchar();
    }

    // 輸出轉換後的句子
    printf("轉換後的句子： %s", sentence);

    return 0;
}
