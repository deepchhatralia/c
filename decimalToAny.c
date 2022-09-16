#include <stdio.h>

int main() {
    int decimal,base,count = 0;
    char ans[100];
    
    printf("Enter decimal : ");
    scanf("%d",&decimal);
    printf("Enter base : ");
    scanf("%d",&base);
    
    while(decimal != 0){
        ans[count++] = decimal % base;
        decimal = decimal / base;
    }
    
    for(int i = count-1 ; i >= 0 ; i--){
        printf("%d",ans[i]);
    }

    return 0;
}
