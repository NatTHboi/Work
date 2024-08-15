#include <stdio.h>
int main() {
    int a = 0, b = 0, ip = 0 ;
    
    printf( "Please insert number : " ) ;
    scanf( "%d" , &ip ) ;
    
    if( ip % 2 == 0 ) {
        for( a = 0 ; a < ip ; a++ ) {
            for( b = 0 ; b < ip ; b++ ) {
                if( a == b ) {   
                    printf( " 1 " ) ;
                } else {  
                    printf( " 0 " ) ;
                }
            }   
            printf( "\n" ) ;
        }
    } else {
        for( a = 0 ; a < ip ; a++ ) {
            for( b = 0 ; b < ip ; b++ ) {
                if( b == ip - a - 1 ) {   
                    printf( " 1 " ) ;
                } else {  
                    printf( " 0 " ) ;
                }
            }        
            printf( "\n" ) ;
        }
    }
    return 0;
}
