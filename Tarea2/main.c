/*
 * Tarea2
 *
 * Created: 2/27/2024 6:31:58 PM
 * Author : josel
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include "ports.h"
#include "i2c.h"
#include "lcd_i2c.h"

int main(void)
{
    /* Replace with your application code */
	init_ports();
	init_i2c();
	lcd_i2c_init();
	lcd_i2c_clr();
	lcd_i2c_write_string(" Padre nuestro tu que estas,en los que aman hoy la paz y del reino dios bajo y dejo su corazon");
	lcd_i2c_write_string(" ---------------------------------------------------");

{
	char i;
	
	unsigned char Character1[8] = { 0x00, 0x0A, 0x15, 0x11, 0x0A, 0x04, 0x00, 0x00 };  /* char de pacman */
	unsigned char Character2[8] = { 0x04, 0x1F, 0x11, 0x11, 0x1F, 0x1F, 0x1F, 0x1F };
	unsigned char Character3[8] = { 0x04, 0x0E, 0x0E, 0x0E, 0x1F, 0x00, 0x04, 0x00 };
	unsigned char Character4[8] = { 0x01, 0x03, 0x07, 0x1F, 0x1F, 0x07, 0x03, 0x01 };
	unsigned char Character5[8] = { 0x01, 0x03, 0x05, 0x09, 0x09, 0x0B, 0x1B, 0x18 };
	unsigned char Character6[8] = { 0x0A, 0x0A, 0x1F, 0x11, 0x11, 0x0E, 0x04, 0x04 };
	unsigned char Character7[8] = { 0x00, 0x00, 0x0A, 0x00, 0x04, 0x11, 0x0E, 0x00 };
	unsigned char Character8[8] = { 0x00, 0x0A, 0x1F, 0x1F, 0x0E, 0x04, 0x00, 0x00 };

	LCD_Init();
	
	
	LCD_Custom_Char(0, Character1);  
	LCD_Custom_Char(1, Character2);  
	LCD_Custom_Char(2, Character3);  
	LCD_Custom_Char(4, Character5);  
	LCD_Custom_Char(5, Character6);  
	LCD_Custom_Char(6, Character7); 
	LCD_Custom_Char(7, Character8);  

	LCD_Command(0x80);		
	LCD_String("Custom char LCD");
	LCD_Command(0xc0);
	
	for(i=0;i<8;i++)		
	{
		LCD_Char(i);		
		LCD_Char(' ');		
	}
	while (1) 
    {
    }
}


