#include <stdio.h>
#include <math.h>

int charToInt(char c){
    return c - '0';
}

int main() {
    int decimal = 0, count = -1;
    double c = 0.0, base;
    int x = 0;
    char any[100];
    
    printf("Enter any number : ");
    scanf("%s",&any);
    printf("Enter base : ");
    scanf("%lf",&base);
    
    for(int i = 0 ; i <= 100 ; i++){
        if(any[i] == '\0') break;
        count++;
    }
    
    for(int i = count ; i >= 0 ; i--){
        x = charToInt(any[i]);
        if(x != 0)
            decimal += x * (int) pow(base,c);
        c++;
        
    }
    printf("%d",decimal);
    
    

    return 0;
}
