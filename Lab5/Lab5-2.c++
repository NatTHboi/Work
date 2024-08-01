#include <stdio.h>

int main() {
    int a ;
    printf ("Please enter score : ") ;
    scanf ("%d", &a) ;
    switch (a)
    {
    case 80 ... 100 :
        printf ("A") ;
        break ;
    case 75 ... 79 :
        printf ("B+") ;
        break ;
    case 70 ... 74 :
        printf ("B") ;
        break ;
    case 65 ... 69 :
        printf ("C+") ;
        break ;
    case 60 ... 64 :
        printf ("C") ;
        break ;
    case 55 ... 59 :
        printf ("D+") ;
        break ;
    case 50 ... 54 :
        printf ("D") ;
        break ;
    case 0 ... 49 :
        printf("F");
        break;
    }
    return 0 ;
}
