/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/
#include <stdio.h>

int PN(int num) {
    if(num < 2) return 0 ;
    for(int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0 ;
    }
    return 1 ;
}//end fuction finding prime number

int main() {
    int n ;

    printf("Enter the length of the array: ") ;
    scanf("%d", &n) ;

    int a[n], b[n] ;

    for (int i = 0; i < n; i++) {
        a[i] = i ;
    }//end for

    printf("Enter %d numbers for the second line:\n", n) ;
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]) ;
    }//end for

    printf("\nResulting table:\n") ;

    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]) ;
    }//end for
    printf("\n") ;

    for (int i = 0; i < n; i++) {
        if (PN(b[i])) {
            printf("%d\t", b[i]) ;
        } else {
            printf("#\t") ;
        }//end if-else
    }//end for
    printf("\n") ;

    return 0 ;
}//end fuction
