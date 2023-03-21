
#include <SPI_Defs.h>
#include <Wz_SPI.h>
#include <Device_Init.h>
//#include <wizchip_conf.h>
//#include <W5500.h>

uint8_t ip[] = {0x7F, 0x00 , 0x00, 0x01};  //[127.0.0.1]
void main()
{
	//initialisation Wiznet
//	void reg_wizchip_cs_cbfunc(void(*cs_sel)(void), void(*cs_desel)(void));
//	void reg_wizchip_spi_cbfunc(uint8_t (*spi_rb)(void), void (*spi_wb)(uint8_t wb));
//	int8_t wizchip_init(uint8_t* txsize, uint8_t* rxsize);
//	void reg_wizchip_spiburst_cbfunc(void (*spi_rb)(uint8_t* pBuf, uint16_t len), void (*spi_wb)(uint8_t* pBuf, uint16_t len));
//	void reg_wizchip_cris_cbfunc(void(*cris_en)(void), void(*cris_ex)(void));
//	
	
	Wz_Write(0x000F, 
						0x04,
						ip,
						4);
	
}