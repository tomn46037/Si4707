/*
  SI4707_PATCH.h
  
  Si4707 1050 Hz False Detection Patch.
 
  Description:  The device may falsely detect a 1050 Hz tone on weather band stations that
  have > 5 kHz deviation.
  
  Impact: Major � A weather alert may be triggered by regular content that is over-deviated
  by the broadcaster, in some cases causing the radio to autonomously turn on.

  Workaround:  If 1050 Hz detection is required, it is strongly recommended that customers
  issue the below initialization string after sending the powerup command (0x01) with the
  argument 1, bit 5 set to 1.
  
  Adapted from Si4707-B20 Errata (March 16, 2009) by Ray H. Dees & Richard Vogel.
 
*/
//
#ifndef SI4707_PATCH_h
#define SI4707_PATCH_h
//
#include <inttypes.h>
#include <avr/pgmspace.h>
//
#define PATCH_DATA_LENGTH                36      //  Number of lines of code in the patch.
//
//  SI4707 Patch Data.
//
static const uint8_t __attribute__ ((progmem)) SI4707_PATCH_DATA[PATCH_DATA_LENGTH * 8] =  
{ 
  0x15, 0x00, 0x00, 0x04, 0xAE, 0x4D, 0x24, 0xBA,
  0x16, 0x37, 0xB1, 0x23, 0xAC, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x58, 0xEB, 0x73, 0xC7, 0x0A,
  0x16, 0xC1, 0x7D, 0xE9, 0x11, 0x6E, 0xA0, 0xDC,
  0x16, 0xE4, 0x01, 0x2A, 0x5F, 0xA9, 0xA9, 0x43,
  0x16, 0x34, 0x33, 0x1B, 0x1B, 0xC2, 0x44, 0x6E,
  0x16, 0xC2, 0x16, 0xAB, 0xE2, 0x8C, 0x1E, 0x32,
  0x16, 0x7F, 0x7E, 0x97, 0x59, 0xB3, 0x12, 0xE0,
  0x16, 0x6B, 0xC1, 0xBC, 0xA6, 0xEC, 0x6A, 0x1C,
  0x16, 0xB6, 0xFC, 0xD0, 0x89, 0xB8, 0x72, 0xA9,
  0x16, 0x64, 0xC3, 0x84, 0x1A, 0x0B, 0x7C, 0x3C,
  0x16, 0xCA, 0x3B, 0x16, 0x81, 0x0B, 0x81, 0xD7,
  0x16, 0x84, 0x1C, 0xC7, 0x49, 0x0D, 0x30, 0x90,
  0x16, 0x8E, 0x2C, 0x98, 0x01, 0xE9, 0x78, 0xAD,
  0x16, 0x26, 0x76, 0xAF, 0x0B, 0x13, 0x77, 0xC1,
  0x16, 0x1D, 0xF3, 0x61, 0x26, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x04, 0x31, 0x9A, 0x8E, 0xED,
  0x16, 0xE5, 0x74, 0x60, 0xA0, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x04, 0x60, 0x2B, 0xAE, 0x2F,
  0x16, 0xA9, 0xEA, 0x91, 0x98, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x24, 0xC8, 0x94, 0xC0, 0x30,
  0x16, 0x8B, 0x67, 0xDD, 0x55, 0x06, 0x1E, 0x6F,
  0x16, 0x50, 0xF0, 0xDE, 0xFF, 0x35, 0xF0, 0x17,
  0x16, 0x9A, 0xB3, 0xA0, 0xFA, 0x6F, 0xB6, 0x19,
  0x16, 0x7A, 0x2A, 0xA6, 0x26, 0x24, 0x27, 0xAD,
  0x16, 0xA3, 0x9F, 0x1F, 0x62, 0x05, 0x22, 0x08,
  0x16, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x04, 0x76, 0x78, 0x0F, 0xE3,
  0x16, 0x8E, 0xB1, 0x84, 0x6C, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x04, 0x1F, 0x72, 0xCA, 0xC6,
  0x16, 0x73, 0x65, 0xC2, 0xD4, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x02, 0x69, 0x94, 0xD8, 0x6D,
  0x16, 0xDA, 0xED, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x02, 0xCC, 0x2E, 0x52, 0x86,
  0x16, 0x10, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD1, 0x95
};
//
//
//
#endif

