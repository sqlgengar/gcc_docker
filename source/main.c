#include <stdio.h>
#define DIM 9

int main(){

    int i;
    int vecl[DIM] = { 11, 22, 33, 44, 55, 66, 77, 88 , 99 };

    printf( "elemento 4 del vector %d \n", *(&vecl[DIM] + 3) );

    printf( "script done \n" );
    return 0;

}
