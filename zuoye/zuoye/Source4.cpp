#include <stdio.h>  
#include <stdlib.h>  

int main() {

    int num, i;
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        if (num > 1 && i % 2 != 0 && i != 1)
            printf("%d ", i);
        else if (i == 2)
            printf("%d ", i);
        else if (num == 1)
            printf("不存在符合的質數");
    }
    return 0;
}