/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/
#include <stdio.h>

int main() {
    int days ;
    long long seconds ;

    printf( "Input Days :\n") ;
    scanf( "%d" , &days) ;

    seconds = (long long)days * 24 * 60 * 60 ; //Calculate and set the value of the seconds variable by multiplying the number of days entered by the user by 24 (hours per day) and 60 (minutes per hour) and 60 (seconds per minute).

    printf( "%d days = %lld seconds\n" , days , seconds) ;

    return 0;
}//end fuction