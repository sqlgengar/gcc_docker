#include <stdio.h>
#define AMOUNT_YEARS 		2 //amount of years that program can load
#define AMOUNT_MOUNTHS 		2 //amount of mounths that program can load
#define AMOUNT_DAYS 		2 //amount of days that program can load, without logic of validate

typedef struct{

	int presents;
	int missings;

} Days;

void load_days( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );
void avg_presents( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );
void max_presents( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );

int main(){

	Days date[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS];
	
	load_days( date );
	avg_presents( date );
	max_presents( data );

	printf( "\n script done \n" );

	return 0;

}

void load_days( Days new_day[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] ){

	int index_day;

	for( int y = 0; y < AMOUNT_YEARS; y++ ){

		printf( "year %d of %d \n", y, AMOUNT_YEARS );
		
		for( int m = 0; m < AMOUNT_MOUNTHS; m++ ){

			printf( "-> mounth %d of %d \n", m, AMOUNT_MOUNTHS );

			for( int d = 0; d < AMOUNT_DAYS; d++ ){

				printf( "--> day %d of %d \n", d, AMOUNT_DAYS );

				printf( "Enter the day of the mounth \n" );
				scanf( " %d", &index_day );
				fflush( stdin );

				printf( "Enter the amount of presents \n" );
				scanf( " %d", &new_day[y][m][index_day].presents );
				fflush( stdin );

				printf( "Enter the amount of missings \n" );
				scanf( " %d", &new_day[y][d][index_day].missings );
				fflush( stdin );

			}

		}

	}

}

void avg_presents( Days date_user[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] ){

	int 	index_year,
	    	index_mounth,
	    	sum_presents = 0,
	    	sum_studens = 0;
	float 	avg;

	printf( "Enter a year for calc the average \n" );
	scanf( " %d", &index_year );
	fflush( stdin );

	printf( "Enter a mounth for calc the average \n" );
	scanf( " %d", &index_mounth );
	fflush( stdin );

	for( int d = 0; d < AMOUNT_DAYS; d++ ){

		sum_presents 	+= date_user[index_year][index_mounth][d].presents;
		sum_studens 	+= ( date_user[index_year][index_mounth][d].missings + date_user[index_year][index_mounth][d].presents );

	}

	avg = sum_presents / ( AMOUNT_DAYS * 1.0 ); //correction by float divition

	printf( "The average value for year %d, mounth %d, is %.2f \n", index_year, index_mounth, avg );

}

void max_presents( Days date_user[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] ){

	int amount_presents = 0,

		



