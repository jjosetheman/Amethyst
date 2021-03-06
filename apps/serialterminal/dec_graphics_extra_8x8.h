#include <stdint.h>
#include "amscii.h"
static const uint8_t dec_graphics_extra_8x8[] __attribute__((aligned(256))) PROGMEM = {
  /* 0 */
  0b00010000,
  0b00111000,
  0b01111100,
  0b11111110,
  0b01111100,
  0b00111000,
  0b00010000,
  0b00000000,
  /* 1 */
  0b00000000,
  0b00000100,
  0b00000100,
  0b10100100,
  0b10100100,
  0b11101110,
  0b10100000,
  0b10100000,
  /* 2 */
  0b00000000,
  0b00001000,
  0b00001000,
  0b10001100,
  0b10001000,
  0b11001110,
  0b10000000,
  0b11100000,
  /* 3 */
  0b00000000,
  0b00001010,
  0b00001010,
  0b01101100,
  0b10001010,
  0b10001100,
  0b10000000,
  0b01100000,
  /* 4 */
  0b00000000,
  0b00001000,
  0b00001000,
  0b11101100,
  0b10001000,
  0b10001110,
  0b10000000,
  0b10000000,
  /* 5 */
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00111100,
  0b01100110,
  0b01100110,
  0b00111100,
  /* 6 */
  0b00000000,
  0b01111110,
  0b00000000,
  0b00011000,
  0b00011000,
  0b01111110,
  0b00011000,
  0b00011000,
  /* 7 */
  0b00000000,
  0b00001110,
  0b00001000,
  0b10101000,
  0b10101000,
  0b10101000,
  0b10100000,
  0b11000000,
  /* 8 */
  0b00000000,
  0b00000100,
  0b00000100,
  0b01000100,
  0b01000100,
  0b10101110,
  0b10100000,
  0b10100000,
  /* 9 */
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11111111,
  0b11111111,
  /* 10 */
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b11111111,
  0b11111111,
  0b00000000,
  0b00000000,
  /* 11 */
  0b00000000,
  0b00000000,
  0b11111111,
  0b11111111,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  /* 12 */
  0b11111111,
  0b11111111,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  0b00000000,
  /* 13 */
  0b00000000,
  0b01111110,
  0b00000000,
  0b00001100,
  0b00011000,
  0b00110000,
  0b00011000,
  0b00001100,
  /* 14 */
  0b00000000,
  0b01111110,
  0b00000000,
  0b00110000,
  0b00011000,
  0b00001100,
  0b00011000,
  0b00110000,
  /* 15 */
  0b00000000,
  0b00100000,
  0b01111110,
  0b00010000,
  0b00001000,
  0b01111110,
  0b00000100,
  0b00000000,
  /* 16 */
  0b00000000,
  0b01100110,
  0b01101100,
  0b01101100,
  0b01101100,
  0b11111110,
  0b00000000,
  0b00000000,
  /* 17 */
  0b00000000,
  0b11111110,
  0b01100000,
  0b01100000,
  0b11111000,
  0b01100000,
  0b01100110,
  0b00111100,
};

typedef union {
  struct {
    uint8_t dst;
    uint8_t src;
  };
  uint16_t w;
} offsetpair;

const offsetpair amscii_to_dec_gfx_table[] PROGMEM = {
  {0, acBLANK}, /* blank */
  {2, acBLKFL}, /* checkerboard */
  {11, acBOXLR}, /* box lower right corner */
  {12, acBOXUR}, /* box upper right corner */
  {13, acBOXUL}, /* box upper left corner */
  {14, acBOXLL}, /* box lower left corner */
  {15, acBOXHV}, /* box cross */
  {18, acBOXH}, /* box horizontal line */
  {21, acBOXTR}, /* box T right */
  {22, acBOXTL}, /* box T left */
  {23, acBOXTU}, /* box T up */
  {24, acBOXTD}, /* box T down */
  {25, acBOXV}, /* box vertical line */
  {31, acDOT}, /* middle dot */
};

const offsetpair extra_dec_gfx_table[] PROGMEM = {
  {1, 0}, /* diamond */
  {3, 1}, /* horizontal tab */
  {4, 2}, /* form feed */
  {5, 3}, /* carriage return */
  {6, 4}, /* line feed */
  {7, 5}, /* degree symbol */
  {8, 6}, /* plus-minus */
  {9, 7}, /* new line */
  {10, 8}, /* vertical tab */
  {16, 9}, /* scanline 1 */
  {17, 10}, /* scanline 3 */
  {19, 11}, /* scanline 7 */
  {20, 12}, /* scanline 9 */
  {26, 13}, /* less than or equal to */
  {27, 14}, /* greater than or equal to */
  {28, 15}, /* lowercase pi */
  {29, 16}, /* not equal to */
  {30, 17}, /* pound sign */
};