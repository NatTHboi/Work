/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์

    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>
int main() {
    int a = 0 ;
    float b = 0 ;
    printf("Insert temperature : ");
    scanf("%d",&a);
    printf("%d degree Celsius = %.1f degree Fahrenheit", a , b = a*1.8 +32);
    return 0;
}
