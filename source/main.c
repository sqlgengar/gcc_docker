#include <stdio.h>
#define AMOUNT_YEARS 		2 //amount of years that program can load
#define AMOUNT_MOUNTHS 		2 //amount of mounths that program can load
#define AMOUNT_DAYS 		2 //amount of days that program can load, without logic of validate
#define INDEX_SEPTEMBER 	1

typedef struct{

	int presents;
	int missings;

} Days;

void load_days( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );
void avg_presents( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );
void max_presents( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );
void avg_presents_sep( Days [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );
void max_presents_years( Dyas [AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] );

int main(){

	Days date[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS];
	
	load_days( date );
	//avg_presents( date );
	//max_presents( date );
	//avg_presents_sep( date );
	max_presents_years( date );

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
	    	sum_presents = 0;
	float 	avg;

	printf( "Enter a year for calc the average \n" );
	scanf( " %d", &index_year );
	fflush( stdin );

	printf( "Enter a mounth for calc the average \n" );
	scanf( " %d", &index_mounth );
	fflush( stdin );

	for( int d = 0; d < AMOUNT_DAYS; d++ ){

		sum_presents 	+= date_user[index_year][index_mounth][d].presents;

	}

	avg = sum_presents / ( AMOUNT_DAYS * 1.0 ); //correction by float divition

	printf( "The average value for year %d, mounth %d, is %.2f \n", index_year, index_mounth, avg );

}

void max_presents( Days date_user[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] ){

	int max_day,
	    index_year;
		
	printf( "Enter de year for look up the max presents \n" );
	scanf( " %d", &index_year );
	fflush( stdin );

	for( int m = 0; m < AMOUNT_MOUNTHS; m++ ){

		int amount_presents = 0;

		for( int d = 0; d < AMOUNT_DAYS; d++ ){

			if( date_user[index_year][m][d].presents > amount_presents ){

				amount_presents += date_user[index_year][m][d].presents;
				max_day = d;

			}

		}

	}

	printf( "The max day for presenteeism is %d \n", max_day );

}

void avg_presents_sep( Days date_user[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] ){

	int 	sum_presents = 0;
	float 	avg;

	for( int y = 0; y < AMOUNT_YEARS; y++ ){

		for( int d = 0; d < AMOUNT_DAYS; d++ ){

			sum_presents 	+= date_user[y][INDEX_SEPTEMBER][d].presents;

		}

		avg = sum_presents / ( AMOUNT_DAYS * 1.0 ); //correction by float divition

		printf( "The average value for year %d, mounth september, is %.2f \n", y, avg );

	}

}

void max_presents_years( Days date_user[AMOUNT_YEARS][AMOUNT_MOUNTHS][AMOUNT_DAYS] ){

	int max_day;
		
	printf( "Enter de year for look up the max presents \n" );
	scanf( " %d", &index_year );
	fflush( stdin );

	for( int y = 0; y < AMOUNT_YEARS; y++ ){

		for( int m = 0; m < AMOUNT_MOUNTHS; m++ ){

			int amount_presents = 0;

			for( int d = 0; d < AMOUNT_DAYS; d++ ){

				if( date_user[y][m][d].presents > amount_presents ){

					amount_presents += date_user[y][m][d].presents;
					max_day = d;

				}

			}

		}

	printf( "The the with max presenteeism is %d \n", max_day );

	}

}
