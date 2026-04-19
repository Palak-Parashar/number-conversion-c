#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void dectobin() {
    int binary[32];
    int i =0;
    int n;
    printf("enter decimal number ");
    scanf("%d",&n);
    for(i=0; n>0; i++) {
        binary[i]=n%2;
        n= n/2;
    }
    printf("binary number is ");
    for (i = i-1; i>=0; i--) {
        printf("%d",binary[i]);
    }
}
void bintodec() {
    char binary[32];
    int decimal = 0; int i= 0;
    printf("enter binary number ");
    scanf("%s",binary);
    for (i=0; binary[i] != '\0'; i++) {
        decimal = decimal*2 + binary[i] - '0';
    }
    printf(" decimal number is %d",decimal);
}
void dectooct() {
    int octal[32];
    int i =0;
    int n;
    printf("enter decimal number");
    scanf("%d",&n);
    for(i=0; n>0; i++) {
        octal[i] = n%8;
        n= n/8;
    }
    printf("octal number is ");
    for(i=i-1; i>=0; i--) {
        printf("%d",octal[i]);
    }
}
void dectohex() {
    char hex[32];
    int n;
    int i= 0;
    int rem;
    printf("enter decimal number ");
    scanf("%d",&n);
    while(n>0) { 
        rem= n%16;
        if(rem<10) {
            hex[i++] = rem + '0';
        }
        else {
            hex[i++] = rem - 10 + 'A';
        }
        n = n/16;
    }
    printf("hexadecimal number is ");
    for(int j = i-1; j>=0; j--) {
        printf("%c",hex[j]);
    }
}
void octtodec() {
    char octal[32];
    int decimal = 0; int i=0;
    printf("enter octal number ");
    scanf("%s", octal);
    for(i=0; octal[i] !='\0'; i++) {
        decimal = decimal*8 + octal[i] - '0';
    }
    printf("decimal number is %d",decimal);
}
void octtobin () {
    int decimal =0 , i= 0 , binary[32];
    char octal[32]; int j=0;
    printf("enter octal number ");
    scanf("%s",octal);
    for(i=0; octal[i] !='\0'; i++) {
        decimal = decimal*8 + octal[i] - '0';
    }
    printf("binary number is ");
    while (decimal>0) { 
        binary[j++] = decimal%2;
        decimal = decimal/2;
        for(i=j-1; i>=0; i--) { 
        printf("%d",binary[i]);
    }
}
}
void bintooct() {
    int decimal =0; int i=0; int octal[32];
    char binary[32]; int j=0;
    printf("enter binary number ");
    scanf("%s",binary);
    for(i=0; binary[i] != '\0'; i++) {
        decimal = decimal*2 +binary[i] -'0';
    }
    while (decimal>0) {
        octal[j++] = decimal%8;
        decimal = decimal/8;
    }
    for(i=j-1; i>=0; i--) {
        printf("%d",octal[i]);
    }
}
int main() {
    int choice;
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("3. Decimal to Octal\n");
    printf("4. Octal to Decimal\n");
    printf("5. Decimal to Hexadecimal\n");
    printf("6. Octal to Binary\n");
    printf("7. Binary to Octal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        dectobin();
        break;
        case 2:
        bintodec();
        break;
        case 3:
        dectooct();
        break;
        case 4:
        octtodec();
        break;
        case 5:
        dectohex();
        break;
        case 6:
        octtobin();
        break;
        case 7:
        bintooct();
        break;
        default:
        printf("invalid choice");
}
}
