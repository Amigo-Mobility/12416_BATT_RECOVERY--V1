/*****************************************************************************
  AUTO-GENERATED CODE:  Graphics Resource Converter version: 4.02.00

  Company:
      Microchip Technology, Inc.
 
  File Name:
     internal_resource_main_reference.c
 
  Summary:
      This file is generated by the Microchip's Graphics Resource Converter.
  Description:
      This file is generated by the Graphics Resource Converter containing
      resources such as images and fonts that can be used by Microchip's
      Graphics Library, which is part of the MLA.
 *****************************************************************************/

// DOM-IGNORE-BEGIN
/*****************************************************************************
  Software License Agreement

  Copyright(c) 2013 Microchip Technology Inc.  All rights reserved.
  Microchip licenses to you the right to use, modify, copy and distribute
  Software only when embedded on a Microchip microcontroller or digital
  signal controller that is integrated into your product or third party
  product (pursuant to the sublicense terms in the accompanying license
  agreement).
 
  You should refer to the license agreement accompanying this Software
  for additional information regarding your rights and obligations.
 
  SOFTWARE AND DOCUMENTATION ARE PROVIDED �AS IS� WITHOUT WARRANTY OF ANY
  KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
  OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
  PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
  OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
  BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
  DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
  INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
  COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
  CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
  OR OTHER SIMILAR COSTS.
 *****************************************************************************/
// DOM-IGNORE-END

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <gfx/gfx.h>
#include <stdint.h>

/*****************************************************************************
 * SECTION:  Graphics Library Format Check
 *****************************************************************************/
#ifndef GFX_RESOURCE_FORMAT_VERSION
    #if(GRAPHICS_LIBRARY_VERSION != 0x0401)
    #warning "It is suggested to use Graphics Library version 4.01 or later with this version of GRC."
    #endif
#elif(GFX_RESOURCE_FORMAT_VERSION != 0x0101)
#warning "It is suggested to use Graphics Library with the resource format version 1.01 with this version of GRC."
#endif



/*****************************************************************************
 * SECTION:  Graphics Configuration: Bitmap Check
 *****************************************************************************/

#ifdef GFX_CONFIG_IMAGE_FLASH_DISABLE
#error The GFX_CONFIG_IMAGE_FLASH_DISABLE is defined in system_config.h header file.
#endif

#ifdef GFX_CONFIG_RLE_DECODE_DISABLE
#error The GFX_CONFIG_RLE_DECODE_DISABLE is defined in system_config.h header file.
#endif

/*****************************************************************************
 * SECTION:  Graphics Configuration: Font Check
 *****************************************************************************/

#ifdef GFX_CONFIG_FONT_FLASH_DISABLE
#error The GFX_CONFIG_FONT_FLASH_DISABLE is defined in system_config.h header file.
#endif

/*****************************************************************************
 * SECTION:  Graphics Configuration: Palette Check
 *****************************************************************************/

#ifdef GFX_CONFIG_PALETTE_DISABLE
#error The GFX_CONFIG_PALETTE_DISABLE is defined in gfx_config header file.
#endif


/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: amigo_splash_8bit
 * Description:  320x240 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __amigo_splash_8bit[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __amigo_splash_8bit[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR amigo_splash_8bit =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __amigo_splash_8bit,
    .resource.image.width = 320,
    .resource.image.height = 240,
    .resource.image.parameter1.compressedSize = 4027,
    .resource.image.parameter2.rawSize = 76804,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*********************************
 * Bitmap Structure
 * Label: amigo_tiny_logo
 * Description:  40x30 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __amigo_tiny_logo[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __amigo_tiny_logo[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR amigo_tiny_logo =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __amigo_tiny_logo,
    .resource.image.width = 40,
    .resource.image.height = 30,
    .resource.image.parameter1.compressedSize = 1104,
    .resource.image.parameter2.rawSize = 1204,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*********************************
 * Bitmap Structure
 * Label: battery_8bit
 * Description:  40x17 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __battery_8bit[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __battery_8bit[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR battery_8bit =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __battery_8bit,
    .resource.image.width = 40,
    .resource.image.height = 17,
    .resource.image.parameter1.compressedSize = 803,
    .resource.image.parameter2.rawSize = 684,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*********************************
 * Bitmap Structure
 * Label: stop_8bit
 * Description:  54x50 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __stop_8bit[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __stop_8bit[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR stop_8bit =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __stop_8bit,
    .resource.image.width = 54,
    .resource.image.height = 50,
    .resource.image.parameter1.compressedSize = 1670,
    .resource.image.parameter2.rawSize = 2704,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*********************************
 * Bitmap Structure
 * Label: batt2_empty
 * Description:  40x60 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __batt2_empty[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __batt2_empty[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR batt2_empty =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __batt2_empty,
    .resource.image.width = 40,
    .resource.image.height = 60,
    .resource.image.parameter1.compressedSize = 1034,
    .resource.image.parameter2.rawSize = 2404,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*********************************
 * Bitmap Structure
 * Label: batt2_empty_blue
 * Description:  40x60 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __batt2_empty_blue[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __batt2_empty_blue[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR batt2_empty_blue =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_RLE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __batt2_empty_blue,
    .resource.image.width = 40,
    .resource.image.height = 60,
    .resource.image.parameter1.compressedSize = 1034,
    .resource.image.parameter2.rawSize = 2404,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*********************************
 * Bitmap Structure
 * Label: arrow_8bpp
 * Description:  18x13 pixels, 8-bits per pixel
 ***********************************/
#if defined (GFX_CONFIG_IMAGE_PACKED_ENABLE) && (__XC16_VERSION__ >= 1011)
extern uint8_gfx_image_prog __arrow_8bpp[] __attribute__((space(prog), section("grc_images")));
#else
extern uint8_gfx_image_prog __arrow_8bpp[] __attribute__((space(prog), section("grc_images"), aligned(2)));
#endif

const GFX_RESOURCE_HDR arrow_8bpp =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_MCHP_MBITMAP | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.image.location.progByteAddress = (uint8_gfx_image_prog *) __arrow_8bpp,
    .resource.image.width = 18,
    .resource.image.height = 13,
    .resource.image.parameter1.compressedSize = 0,
    .resource.image.parameter2.rawSize = 240,
    .resource.image.colorDepth = 8,
    .resource.image.type = 0x10,
    .resource.image.paletteID = 0xE680
};

/*****************************************************************************
 * SECTION:  FONTS
 *****************************************************************************/

/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_18
 * Description:  Height: 22 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Bold_18[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Bold_18[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Bold_18[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Bold_18 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Bold_18,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x0016,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_10
 * Description:  Height: 13 pixels, 1 bit per pixel, Range: ' ' to ';'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_10[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_10[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_10[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_10 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_10,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x003B,
    .resource.font.header.height = 0x000D,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_Narrow_12
 * Description:  Height: 15 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Narrow_12[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Narrow_12[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Narrow_12[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Narrow_12 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Narrow_12,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x000F,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_Bold_14
 * Description:  Height: 17 pixels, 1 bit per pixel, Range: ' ' to 'z'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Bold_14[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Bold_14[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Bold_14[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Bold_14 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Bold_14,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0020,
    .resource.font.header.lastChar = 0x007A,
    .resource.font.header.height = 0x0011,
};
/*********************************
 * Installed Font Structure
 * Label: Arial_Black_75
 * Description:  Height: 107 pixels, 1 bit per pixel, Range: '%' to '9'
 ***********************************/
#if defined(GFX_CONFIG_FONT_PROG_SPACE_ENABLE) && (__XC16_VERSION__ >= 1011)
#ifndef GFX_CONFIG_FONT_PACKED_ENABLE
extern GFX_FONT_SPACE char __Arial_Black_75[] __attribute__((space(prog), section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Arial_Black_75[] __attribute__((space(prog), section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Arial_Black_75[] __attribute__((aligned(2)));
#endif

const GFX_RESOURCE_HDR Arial_Black_75 = 
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_FONT | GFX_RESOURCE_COMP_NONE),
    .ID = 0x0000,
    .resource.font.location.progByteAddress = (GFX_FONT_SPACE char *) __Arial_Black_75,
    .resource.font.header.fontID = 0,
    .resource.font.header.extendedGlyphEntry = 0,
    .resource.font.header.res1 = 0,
    .resource.font.header.bpp = 0,
    .resource.font.header.orientation = 0,
    .resource.font.header.res2 = 0,
    .resource.font.header.firstChar = 0x0025,
    .resource.font.header.lastChar = 0x0039,
    .resource.font.header.height = 0x006B,
};
/*****************************************************************************
 * SECTION:  Palettes
 *****************************************************************************/

/*********************************
 * PALETTE Structure
 * Label: CrayolaByHue
 * Description:  128 Colors
 ***********************************/
extern const GFX_PALETTE_ENTRY __CrayolaByHueData[];

const GFX_RESOURCE_HDR CrayolaByHue =
{
    .type = (GFX_RESOURCE_MEMORY_FLASH | GFX_RESOURCE_TYPE_PALETTE | GFX_RESOURCE_COMP_NONE),
    .ID = 0,
    .resource.palette.location.constByteAddress = (const GFX_PALETTE_ENTRY *) __CrayolaByHueData,
    .resource.palette.numberOfEntries = 128,
    .resource.palette.paletteID = 0xE680
};

