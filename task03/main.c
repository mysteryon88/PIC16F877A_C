/*
3)??????? ? ???????????? ??????? ??????. 
1-? ?????? ????????? ???????????? ???? , 
??.2 ? ????????? ?????? ????? ??? ????, 
3-? ?????? ????? ???????????? ??????, ????? ??? ?????? ???????????? ? ???? ??????? 32-? ?????????? ??????, ?? ??????? ?????????? ???????? ????????? ??????.

4??? ????????? ????????????????? ??????
*/
#include "LCD.h"
#include "task3.h"

void main(){
	PORTB = 0xF0;
    TRISB = 0xF0;
	Init_I2C();
    Init_LCD();
    Clr_LCD();
	start();
//	task();

	return;	
}
