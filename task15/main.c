/*
15) ???????? ??? ?????. ?????? ? ? ??????? ?????? ? ?????? ? ? ??????. ????????? ??????????, ????? ?? ?????? ???????? ?? ??????? ????????????? ????. ???? ?? ? ??????.
*/
#include "LCD.h"
#include "task15.h"

void main(){
	PORTB = 0xF0;
    TRISB = 0xF0;
	start();
	return;	
}
