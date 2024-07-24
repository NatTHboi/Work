/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2

    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/
#include <stdio.h>
void hexToBinary(char hex[]) {
    printf("Binary representation: ");
    // Iterate through each character of the hexadecimal number
    for (int i = 0; hex[i] != '\0'; ++i) {
        // Convert hexadecimal digit to binary equivalent
        switch(hex[i]) {
            case '0': printf("0000"); break;
            case '1': printf("0001"); break;
            case '2': printf("0010"); break;
            case '3': printf("0011"); break;
            case '4': printf("0100"); break;
            case '5': printf("0101"); break;
            case '6': printf("0110"); break;
            case '7': printf("0111"); break;
            case '8': printf("1000"); break;
            case '9': printf("1001"); break;
            case 'A': case 'a': printf("1010"); break;
            case 'B': case 'b': printf("1011"); break;
            case 'C': case 'c': printf("1100"); break;
            case 'D': case 'd': printf("1101"); break;
            case 'E': case 'e': printf("1110"); break;
            case 'F': case 'f': printf("1111"); break;
            default: printf("\nInvalid hexadecimal digit %c", hex[i]);
        }
    }
    printf("\n");
}

int main() {
    char hex[20];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);
    hexToBinary(hex);
    return 0;
}//อันนี้ผมทำไม่ได้จริงๆครับ ต้องให้ GPT ช่วย
