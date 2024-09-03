#include <stdio.h>

int A( int n, int k ) {
    if ( k == 0 || k == n )
        return 1;
    return A( n - 1, k - 1 ) + A( n - 1, k ) ;
}

int B( int n, int i, int j ) {
    if ( i >= n ) {
        return 0 ;
    }
    if ( j > i ) {
        printf( "\n" ) ;
        return B( n, i + 1, 0 ) ;
    }
    printf( "%d ", A(i, j) ) ;
    return B( n, i, j + 1 ) ;
}

int C( int n, int i, int j ) {
    if ( i < 0 ) {
        return 0 ;
    }
    if ( j > i ) {
        printf( "\n" ) ;
        return C( n, i - 1, 0 ) ;
    }
    printf( "%d ", A(i, j) ) ;
    return C( n, i, j + 1 ) ;
}

int main() {
    int rows ;
    printf( "Please input line number : " ) ;
    scanf( "%d", &rows ) ;

    if ( rows % 2 == 0 ) {
        B( rows, 0, 0 ) ;
    } else {
        C( rows, rows - 1, 0 ) ;
    }

    return 0 ;
}
