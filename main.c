#include <stdio.h>

int main(void) {
    int sec;
    printf("metti sec");
    scanf("%d",&sec);
    int ore =sec/3600;
    printf("ore è:%d",ore);
    int minuti = sec/60;
    printf("minuti è:%d",minuti);
    int secondi=sec%60;
    printf("secondi è:%d",secondi);
    return 0;
}
