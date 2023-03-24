#include <stdint.h>
#include <SPI_Defs.h>

#ifndef My_fnc.h
#define My_fnc.h

void my_cs_sel();

void my_cs_desel();
	
uint8_t my_spi_rb(void);
	
void my_spi_wb(uint8_t);

void cris_en(void);

void cris_ex(void);

#endif