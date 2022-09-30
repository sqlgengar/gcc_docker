#include <stdio.h>
#define SIZE_MAX 3

void charge_vec( int[] );
void add_elements( int[] );

int main(){

	int vec[SIZE_MAX];

	charge_vec( vec );
	add_elements( vec );

	printf( "script done \n" );
	return 0;

}

void charge_vec( int vec[] ){

	int temp_value;

	for( int i = 0; i < SIZE_MAX; i++ ){

		printf( "Enter a number for vec: \n" );
		scanf( " %d", &temp_value );
		fflush( stdin );

		vec[i] = temp_value;

	}

	for( int j = 0; j < SIZE_MAX; j++ ){

		printf( "vec[%d] => %d \n", j, vec[j] );

	}

}

void add_elements( int vec[] ){

	int temp_add = 0;

	for( int i = 0; i < SIZE_MAX; i++ ){
		
		temp_add += vec[i];

	}
	
	printf( "The add of elemets in vec is: %d \n", temp_add );

}