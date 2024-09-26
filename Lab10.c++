/*
    จงเขียนโปรแกรมเพื่อรับคำจากผู้ใช้งาน เพื่อตรวจสอบว่า คำที่กรอกมามีลักษณะเป็นคำหรือวลีที่สามารถอ่านจากหลังไปหน้าหรือหน้าไปหลังแล้วยังคงความหมายเหมือนเดิมได้
    โดยที่ หากคำนั้นสามารถอ่านจากหน้าไปหลังหรือหลังไปได้ ให้แสดงผลลัพธ์ว่า Pass แต่หากทำไม่ได้ให้ขึ้นว่า Not Pass

    Test case:
        Enter word:
            radar
    Output:
        Pass.

    Test case:
        Enter word:
            hello
    Output:
        Not Pass.

    Test case:
        Enter word:
            Radar
    Output:
        Pass.

    Test case:
        Enter word:
            here
    Output:
        Not Pass.
*/

#include <stdio.h>

int a(char b) {
    return (b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z');
}

char c(char b) {
    if (b >= 'A' && b <= 'Z') {
        return b + ('a' - 'A');
    }//end if
    return b;
}

int d(char str[], int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
        while (left < right && !a(str[left])) {
            left++;
        }//end while
        while (left < right && !a(str[right])) {
            right--;
        }//end while

        if (c(str[left]) != c(str[right])) {
            return 0;
        }//end while

        left++;
        right--;
    }//end while
    return 1;
}

int main() {
    char input[1000];
    int length = 0;

    printf("Enter a word or phrase: ");
    fgets(input, sizeof(input), stdin);

    while (input[length] != '\0' && input[length] != '\n') {
        length++;
    }//end while

    if (d(input, length)) {
        printf("Pass\n");
    } else {
        printf("Not Pass\n");
    }//end if else

    return 0;
}
