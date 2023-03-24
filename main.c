#include <Device_Init.h>
#include <wizchip_conf.h> 


txsize = 10;
rxsize = 10;

extern my_cs_sel();
extern my_cs_desel(); 
extern uint8_t my_spi_rb();
extern my_spi_wb(uint8_t);
extern my_cris_en();
extern my_cris_ex();

void main(){
	
//MCU init:
Init_Device();
	
//Wiznet controller init:
	
reg_wizchip_cs_cbfunc(my_cs_sel, my_cs_desel);
reg_wizchip_spi_cbfunc(my_spi_rb, my_spi_wb);
wizchip_init(&txsize, &rxsize);
//reg_wizchip_spiburst_cbfunc(void (*spi_rb)(uint8_t* pBuf, uint16_t len), void (*spi_wb)(uint8_t* pBuf, uint16_t len));
reg_wizchip_cris_cbfunc(my_cris_en, my_cris_ex);
}