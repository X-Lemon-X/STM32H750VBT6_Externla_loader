/*
 * Dev_Inf.h
 *
 *  Created on: Apr 9, 2025
 *      Author: lemonx
 */

#ifndef INC_DEV_dev_intF_H_
#define INC_DEV_dev_intF_H_


/**
  ******************************************************************************
  * @file    Dev_Inf.h
  * @author  MCD Application Team
  * @brief   header file of Dev_Inf.c
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
*/

#define 	MCU_FLASH 	1
#define 	NAND_FLASH      2
#define 	NOR_FLASH       3
#define 	SRAM            4
#define 	PSRAM           5
#define 	PC_CARD         6
#define 	SPI_FLASH       7
#define 	I2C_FLASH       8
#define 	SDRAM           9
#define 	I2C_EEPROM      10


#define         SECTOR_NUM      10				                // Max Number of Sector types

struct DeviceSectors
{
  unsigned long		SectorNum;                                              // Number of Sectors
  unsigned long		SectorSize;                                             // Sector Size in Bytes
};

struct StorageInfo
{
   char                 DeviceName[100];			                // Device Name and Description
   unsigned short       DeviceType;					        // Device Type: ONCHIP, EXT8BIT, EXT16BIT, ...
   unsigned long        DeviceStartAddress;		                        // Default Device Start Address
   unsigned long        DeviceSize;					        // Total Size of Device
   unsigned long        PageSize;					        // Programming Page Size
   unsigned char        EraseValue;					        // Content of Erased Memory
   struct 	        DeviceSectors	 sectors[SECTOR_NUM];
};


#endif /* INC_DEV_INF_H_ */
