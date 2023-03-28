#include "Device_Init.h"
#include "wizchip_conf.h"
#include "My_fnc.h"
#include <stddef.h>

uint8_t a = 0;
uint32_t AddrSel = 0x001E;

void main(){
	
//MCU init:
Init_Device();
	
//Wiznet controller init:
reg_wizchip_cs_cbfunc(my_cs_sel, my_cs_desel);
reg_wizchip_spi_cbfunc(my_spi_rb, my_spi_wb);
wizchip_init(NULL, NULL);
//reg_wizchip_spiburst_cbfunc(void (*spi_rb)(uint8_t* pBuf, uint16_t len), void (*spi_wb)(uint8_t* pBuf, uint16_t len));
reg_wizchip_cris_cbfunc(my_cris_en, my_cris_ex);

a = WIZCHIP_READ(AddrSel);
if (a == 0x02) 
{SDIH = 0;
};
}