/*
    จงเขียนฟังก์ชันในการตรวจสอบตัวเลขที่ผู้ใช้ป้อนเข้ามา ว่าเป็นตัวเลขที่เป็นอาร์มสตรองหรือไม่ หากใช่ให้แสดงคำว่า Pass หากไม่ใช่แสดงคำว่า Not Pass

    หมายเหตุ: ตัวเลขอาร์มสตรอง คือ ตัวเลขที่ผลรวมของเลขยกกำลังของจำนวนหลัก เช่น
    153 เป็นตัวเลขอาร์มสตรอง เพราะ 153 มีทั้งหมด 3 หลัก จึงมีค่าเท่ากับ = 1^3 +  5^3 +  3^3 (โดยที่เครื่องหมาย ^ หมายถึงเลขยกกำลัง)
    370 = 3^3 + 7^3 + 0^3

    Test Case:
        Enter Number:
            153
    Output:
        Pass.

    Test Case:
        Enter Number:
            370
    Output:
        Pass.

    Test Case:
        Enter Number:
            372
    Output:
        Not Pass.
*/
#include <stdio.h>

int power(int base, int exp) {
    int result = 1 ;
    for (int i = 0; i < exp; i++) {
        result *= base ;
    }//end for
    return result ;
}

int isArmstrong(int num) {
    int a, b, result = 0, n = 0 ;

    a = num ;

    while (a != 0) {
        a /= 10 ;
        ++n;
    }//end while

    a = num ;

    while (a != 0) {
        b = a % 10 ;
        result += power(b, n) ;
        a /= 10 ;
    }//end while

    return result == num ;
}

int main() {
    int num ;

    printf("Enter a number: ") ;
    scanf("%d", &num) ;

    if (isArmstrong(num)) {
        printf("Pass\n") ;
    } else {
        printf("Not Pass\n") ;
    }//end if else

    return 0 ;
}
