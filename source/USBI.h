#include <gctypes.h>
#include <ogc/usbstorage.h>
#include <ogc/usb.h>

/*  Define Structures */



/*  Define Prototypes */


bool USB_Init();										    /* Initializes USB and USB Storage*/
u8  Interrogate_Devices(usb_device_entry *buffer);       /* Determines number of USB devices and maps them to an array */
bool Mount_USB(s32 dev);                                 /*  Dev is which USB device is mounted.  Determined from interrogate */
bool Get_Capacity(u32 *sector_size, u32 *sectors);      /* Get sector size (512 default) and number of sectors */
bool Read_Sectors(u32 sector, u16 count, u8 *buffer);   /* Reads @ sector till count and stores in buffer */
bool Write_Sectors(u32 sector, u16 count, u8 *buffer);  /* Writes @ sector till count from buffer */
bool Close_Storage();							  /* unmounts current USB Device, required to edit more than one USB */
