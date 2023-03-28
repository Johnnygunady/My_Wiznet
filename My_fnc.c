#include <My_fnc.h>

void my_cs_sel()
{
	NSS = 0;
}

void my_cs_desel()
{
	NSS = 1;
}

uint8_t my_spi_rb(void)
{
	uint8_t cnt;
	uint16_t d;  
	for(cnt = 0; cnt < 8; cnt++)
	{
		CLK = 0;
		d |= MISO;
		d<<=1;
		CLK = 1;
	}
	d>>=1;
	d = (uint8_t)d;
	return(d);
}
	
void my_spi_wb(uint8_t d)
{
	uint8_t cnt;
	for(cnt = 0; cnt < 8; cnt++)
	{
		CLK = 0;
		MOSI = 0x80 & d;
		d<<=1;
		CLK =1;
	}
}

void my_cris_en()
{
	IE = ~(1<<7);   //MSB in IE = 0 == Disable All Interrupts 
}

void my_cris_ex()
{
	IE = (1<<7);   //MSB in IE = 1 == Enable All Interrupts 
}


	
