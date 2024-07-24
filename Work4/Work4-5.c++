/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"

    Test case:
        Input Days :
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days :
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>
int main() {
    int a=0;
    printf("Plase enter days : ");
    scanf("%d", &a );
    printf("a*86400 = %d seconds",a*86400);
    return 0;
}
