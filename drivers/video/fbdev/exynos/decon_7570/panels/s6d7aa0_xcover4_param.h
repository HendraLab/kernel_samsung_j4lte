#ifndef __TD4100_PARAM_H__
#define __TD4100_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static u8 ISL98611_INIT[] = {
	0x01, 0x00,
	0x02, 0xBF,
	0x03, 0x02,
	0x04, 0x14,
	0x05, 0x14,
	0x06, 0xF4,
	0x10, 0xFF,
	0x11, 0x07,
	0x12, 0xF9,
	0x13, 0x87,
	0x14, 0xFD,
	0x16, 0xF5,
	0x17, 0x8D,
};

const const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
};

const const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
};

static const unsigned char SEQ_PASSWD1[] = {
	0xF0,
	0x5A, 0x5A
};

static const unsigned char SEQ_PASSWD2[] = {
	0xF1,
	0x5A, 0x5A
};

static const unsigned char SEQ_PASSWD3[] = {
	0xFC,
	0xA5, 0xA5
};

static const unsigned char SEQ_PASSWD1_LOCK[] = {
	0xF0,
	0xA5, 0xA5
};

static const unsigned char SEQ_PASSWD2_LOCK[] = {
	0xF1,
	0xA5, 0xA5
};

static const unsigned char SEQ_PASSWD3_LOCK[] = {
	0xFC,
	0x5A, 0x5A
};

static const unsigned char SEQ_GAMMA_FA[] = {
	0xFA,
	0x08, 0x3F, 0x0A, 0x0C, 0x00, 0x02, 0x06, 0x03, 0x04, 0x0C,
	0x11, 0x16, 0x19, 0x1A, 0x1E, 0x25, 0x2F
};

static const unsigned char SEQ_GAMMA_FB[] = {
	0xFB,
	0x08, 0x3F, 0x0A, 0x0C, 0x00, 0x01, 0x05, 0x03, 0x03, 0x0B,
	0x11, 0x16, 0x18, 0x1A, 0x1E, 0x25, 0x2E
};

static const unsigned char SEQ_S6D7AA0_INIT_1[] = {
	0xD0,
	0x00, 0x10,
};

static const unsigned char SEQ_S6D7AA0_INIT_2[] = {
	0xB1,
	0x12
};

static const unsigned char SEQ_S6D7AA0_INIT_3[] = {
	0xB2,
	0x14, 0x22, 0x2F, 0x18
};

static const unsigned char SEQ_S6D7AA0_INIT_4[] = {
	0xB3,
	0x11
};

static const unsigned char SEQ_S6D7AA0_INIT_5[] = {
	0xBA,
	0x03, 0x19, 0x19, 0x11, 0x03, 0x05, 0x18, 0x18, 0x77,
};

static const unsigned char SEQ_S6D7AA0_INIT_6[] = {
	0xBC,
	0x00, 0x4E, 0x0B
};

static const unsigned char SEQ_S6D7AA0_INIT_7[] = {
	0xC0,
	0x80, 0x80, 0x30
};

static const unsigned char SEQ_S6D7AA0_INIT_8[] = {
	0xC1,
	0x01
};

static const unsigned char SEQ_S6D7AA0_INIT_9[] = {
	0xC2,
	0x00
};

static const unsigned char SEQ_S6D7AA0_INIT_10[] = {
	0xC3,
	0x40, 0x00, 0x28
};

static const unsigned char SEQ_S6D7AA0_INIT_11[] = {
	0xE1,
	0x03, 0x10, 0x1C, 0xA0, 0x10,
};

static const unsigned char SEQ_S6D7AA0_INIT_12[] = {
	0xEE,
	0xA5, 0x00, 0x98, 0x00, 0xA5, 0x00, 0x98, 0x00,
};

static const unsigned char SEQ_S6D7AA0_INIT_13[] = {
	0xF2,
	0x02, 0x10, 0x10, 0x8c, 0x60
	/* 0x02 VBP(VBP+VS) VFP HBP(HBP+HS) HFP */
};

static const unsigned char SEQ_S6D7AA0_INIT_14[] = {
	0xF3,
	0x01, 0x93, 0x20, 0x22, 0x80, 0x05, 0x25, 0x3C, 0x26, 0x00,
};

static const unsigned char SEQ_S6D7AA0_INIT_15[] = {
	0xF4,
	0x02, 0x02, 0x10, 0x26, 0x10, 0x02, 0x03, 0x03, 0x03, 0x10,
	0x16, 0x03, 0x00, 0x0C, 0x0C, 0x03, 0x04, 0x05, 0x13, 0x1E,
	0x09, 0x0A, 0x05, 0x05, 0x01, 0x04, 0x02, 0x61, 0x74, 0x75,
	0x72, 0x83, 0x80, 0x80, 0x00, 0x00, 0x01, 0x01, 0x28, 0x04,
	0x03, 0x28, 0x01, 0xD1, 0x32,
};

static const unsigned char SEQ_S6D7AA0_INIT_16[] = {
	0xF7,
	0x01, 0x1B, 0x08, 0x0C, 0x09, 0x0D, 0x01, 0x01, 0x01, 0x04,
	0x06, 0x01, 0x01, 0x00, 0x00, 0x1A, 0x01, 0x1B, 0x0A, 0x0E,
	0x0B, 0x0F, 0x01, 0x01, 0x01, 0x05, 0x07, 0x01, 0x01, 0x00,
	0x00, 0x1A,
};

static const unsigned char SEQ_S6D7AA0_INIT_17[] = {
	0xF6,
	0x60, 0x25, 0x05, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_S6D7AA0_INIT_18[] = {
	0xFD,
	0x16, 0x10, 0x11, 0x23, 0x09,
};

static const unsigned char SEQ_S6D7AA0_INIT_19[] = {
	0xFE,
	0x00, 0x02, 0x03, 0x21, 0x80, 0x78,
};

static const unsigned char SEQ_S6D7AA0_INIT_20[] = {
	0xEF,
	0x34, 0x12, 0x98, 0xBA, 0x10, 0x80, 0x24, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x00, 0x44, 0xA0, 0x82, 0x00,
};

static const unsigned char SEQ_S6D7AA0_INIT_21[] = {
	0xCD,
	0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E,
	0x2E, 0x2E, 0x2E,
};

static const unsigned char SEQ_S6D7AA0_INIT_22[] = {
	0xCE,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00
};

static const unsigned char SEQ_S6D7AA0_INIT_23[] = {
	0x55,
	0x00,	/* CABC OFF */
};

static const unsigned char SEQ_S6D7AA0_BL_LEVEL[] = {
	0x51,
	0x63
};

static const unsigned char SEQ_S6D7AA0_BL_ON[] = {
	0x53,
	0x2C
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	0, 0, 0, 2, 2, 3, 3, 4, 4, 5, /* 4: 2  */
	6, 6, 7, 7, 8, 9, 9, 10, 10, 11,
	12, 12, 13, 13, 14, 15, 15, 16, 16, 17,
	18, 18, 19, 19, 20, 21, 21, 22, 22, 23,
	24, 24, 25, 25, 26, 27, 27, 28, 28, 29,
	30, 30, 31, 31, 32, 33, 33, 34, 34, 35,
	36, 36, 37, 37, 38, 39, 39, 40, 40, 41,
	41, 42, 43, 43, 44, 44, 45, 46, 46, 47,
	47, 48, 49, 49, 50, 50, 51, 52, 52, 53,
	53, 54, 55, 55, 56, 56, 57, 58, 58, 59,
	59, 60, 61, 61, 62, 62, 63, 64, 64, 65,
	65, 66, 67, 67, 68, 68, 69, 70, 70, 71,
	71, 72, 73, 73, 74, 74, 75, 76, 76, 77, /* 128: 76 */
	78, 79, 80, 81, 82, 83, 84, 85, 86, 87,
	88, 89, 90, 91, 92, 93, 94, 95, 96, 97,
	98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
	108, 109, 110, 111, 112, 113, 114, 115, 116, 117,
	117, 118, 119, 120, 121, 122, 123, 124, 125, 126,
	127, 128, 129, 130, 131, 132, 133, 134, 135, 136,
	137, 138, 139, 140, 141, 142, 143, 144, 145, 146,
	147, 148, 149, 150, 151, 152, 153, 154, 155, 156,
	157, 158, 158, 159, 160, 161, 162, 163, 164, 165,
	166, 167, 168, 169, 170, 171, 172, 173, 174, 175,
	176, 177, 178, 179, 180, 181, 182, 183, 184, 185,
	186, 187, 188, 189, 190, 191, 192, 193, 194, 195,
	196, 197, 198, 199, 200, 232, 232, 232, 232, 232, /* 255: 200 */
	232, 232, 232, 232, 232, 232, 232, 232, 232, 232,
	232, 232, 232, 232, 232, 232, 232, 232, 232, 232,
	232, 232, 232, 232, 232, 232, 232, 232, 232, 232,
	232, 232, 232, 232, 232, 232, 232, 232, 232, 232,
	232, 232, 232, 232, 232, 232,
};

#endif /* __TD4100_PARAM_H__ */
