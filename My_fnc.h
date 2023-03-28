#include <stdint.h>
#include <SPI_Defs.h>

#ifndef _MY_FNC.H_
#define _MY_FNC.H_

void my_cs_sel();

void my_cs_desel();
	
uint8_t my_spi_rb(void);
	
void my_spi_wb(uint8_t);

void my_cris_en(void);

void my_cris_ex(void);

#endif