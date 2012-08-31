#ifndef SYNCHRO_H
#define SYNCHRO_H

const unsigned char ik1302_srom[128][9]=
{
    {0x00, 0x00, 0x00, 0x10, 0x03, 0x1D, 0x00, 0x07, 0x1E}, //0
    {0x10, 0x03, 0x1C, 0x0B, 0x07, 0x0C, 0x1E, 0x00, 0x00}, //1
    {0x15, 0x18, 0x09, 0x16, 0x18, 0x09, 0x16, 0x18, 0x24},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x00, 0x03, 0x0E, 0x1E, 0x33, 0x00, 0x00, 0x00, 0x00},
    {0x23, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x2C, 0x00, 0x01},
    {0x11, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0E, 0x1A},
    {0x0F, 0x0E, 0x0D, 0x19, 0x03, 0x2F, 0x0E, 0x0D, 0x08},
    {0x1C, 0x0C, 0x0D, 0x01, 0x00, 0x00, 0x03, 0x24, 0x0F},
    {0x1C, 0x0C, 0x2F, 0x09, 0x1E, 0x34, 0x0E, 0x1E, 0x0C},
    {0x06, 0x0A, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0F},
    {0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x26, 0x06},
    {0x35, 0x34, 0x0D, 0x24, 0x1E, 0x1A, 0x09, 0x0C, 0x0F},
    {0x3D, 0x00, 0x00, 0x1C, 0x03, 0x0E, 0x0A, 0x0F, 0x06},
    {0x3D, 0x00, 0x0E, 0x3F, 0x03, 0x01, 0x00, 0x00, 0x0E},
    {0x3F, 0x33, 0x0D, 0x01, 0x08, 0x00, 0x01, 0x08, 0x04},
    {0x06, 0x03, 0x0E, 0x2B, 0x3A, 0x09, 0x12, 0x1E, 0x33},
    {0x35, 0x03, 0x07, 0x0C, 0x1E, 0x1A, 0x00, 0x00, 0x00},
    {0x35, 0x0C, 0x2F, 0x0E, 0x03, 0x01, 0x00, 0x00, 0x15},
    {0x24, 0x1E, 0x1A, 0x23, 0x1D, 0x00, 0x00, 0x00, 0x00},
    {0x09, 0x0C, 0x2F, 0x09, 0x03, 0x00, 0x24, 0x0C, 0x0F},
    {0x3D, 0x09, 0x1E, 0x3F, 0x03, 0x07, 0x0B, 0x22, 0x03},
    {0x07, 0x0B, 0x0D, 0x0C, 0x03, 0x0E, 0x1E, 0x3A, 0x2B},
    {0x3C, 0x03, 0x00, 0x09, 0x34, 0x0E, 0x1E, 0x0C, 0x1E},
    {0x2E, 0x01, 0x31, 0x2E, 0x01, 0x31, 0x00, 0x00, 0x00},
    {0x2E, 0x30, 0x03, 0x2E, 0x30, 0x03, 0x00, 0x00, 0x00},
    {0x2E, 0x2D, 0x00, 0x2E, 0x2D, 0x00, 0x00, 0x00, 0x00},
    {0x3B, 0x04, 0x2F, 0x37, 0x12, 0x00, 0x00, 0x00, 0x00},
    {0x14, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x01, 0x13, 0x00, 0x01, 0x13, 0x00, 0x01, 0x13, 0x04},
    {0x2E, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x2E, 0x00, 0x00},
    {0x3D, 0x07, 0x10, 0x3F, 0x03, 0x00, 0x2C, 0x07, 0x1E},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04},
    {0x00, 0x0F, 0x10, 0x03, 0x00, 0x1C, 0x03, 0x0F, 0x1D},
    {0x03, 0x32, 0x00, 0x2B, 0x14, 0x00, 0x00, 0x08, 0x00},
    {0x04, 0x14, 0x00, 0x00, 0x32, 0x00, 0x00, 0x32, 0x0C},
    {0x0A, 0x32, 0x00, 0x00, 0x32, 0x00, 0x00, 0x32, 0x00},
    {0x21, 0x15, 0x18, 0x21, 0x16, 0x18, 0x00, 0x17, 0x18},
    {0x19, 0x1A, 0x18, 0x19, 0x16, 0x18, 0x09, 0x16, 0x18},
    {0x2B, 0x15, 0x00, 0x00, 0x17, 0x00, 0x00, 0x17, 0x00},
    {0x12, 0x1B, 0x0E, 0x0F, 0x1B, 0x0E, 0x23, 0x2B, 0x0A},
    {0x2C, 0x18, 0x00, 0x2A, 0x18, 0x07, 0x0B, 0x03, 0x04},
    {0x32, 0x14, 0x00, 0x32, 0x32, 0x11, 0x00, 0x08, 0x00},
    {0x09, 0x0C, 0x15, 0x03, 0x00, 0x00, 0x06, 0x3C, 0x00},
    {0x00, 0x2C, 0x00, 0x00, 0x2A, 0x00, 0x09, 0x16, 0x00},
    {0x00, 0x00, 0x11, 0x00, 0x09, 0x16, 0x18, 0x09, 0x1E},
    {0x00, 0x00, 0x07, 0x0A, 0x29, 0x3E, 0x33, 0x29, 0x00},
    {0x0F, 0x0B, 0x0F, 0x10, 0x03, 0x08, 0x24, 0x03, 0x23},
    {0x32, 0x01, 0x1D, 0x32, 0x08, 0x00, 0x32, 0x08, 0x32},
    {0x32, 0x08, 0x23, 0x32, 0x08, 0x0F, 0x23, 0x23, 0x04},
    {0x09, 0x1E, 0x0F, 0x00, 0x00, 0x14, 0x00, 0x00, 0x08},
    {0x37, 0x00, 0x00, 0x37, 0x00, 0x00, 0x37, 0x00, 0x00},
    {0x01, 0x31, 0x00, 0x01, 0x31, 0x00, 0x01, 0x31, 0x36},
    {0x1A, 0x30, 0x0D, 0x00, 0x30, 0x0D, 0x00, 0x30, 0x0D},
    {0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03, 0x2B},
    {0x2D, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x2D, 0x00, 0x00},
    {0x0A, 0x30, 0x03, 0x00, 0x30, 0x03, 0x00, 0x30, 0x03},
    {0x00, 0x01, 0x31, 0x00, 0x01, 0x31, 0x00, 0x01, 0x31},
    {0x00, 0x2D, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x2D, 0x00},
    {0x2C, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x09, 0x18, 0x00},
    {0x07, 0x1E, 0x0F, 0x01, 0x00, 0x08, 0x1C, 0x0A, 0x08},
    {0x14, 0x00, 0x00, 0x32, 0x00, 0x00, 0x32, 0x2B, 0x00},
    {0x32, 0x00, 0x00, 0x32, 0x27, 0x36, 0x08, 0x09, 0x0C},
    {0x1E, 0x02, 0x1D, 0x0F, 0x0C, 0x0F, 0x26, 0x07, 0x22},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
    {0x1D, 0x23, 0x23, 0x09, 0x23, 0x0C, 0x03, 0x23, 0x23},
    {0x02, 0x35, 0x03, 0x0F, 0x00, 0x00, 0x00, 0x04, 0x0C},
    {0x01, 0x12, 0x00, 0x08, 0x00, 0x32, 0x0A, 0x00, 0x00},
    {0x06, 0x18, 0x00, 0x17, 0x18, 0x00, 0x17, 0x18, 0x00},
    {0x00, 0x01, 0x13, 0x00, 0x01, 0x13, 0x04, 0x01, 0x13},
    {0x00, 0x00, 0x00, 0x09, 0x15, 0x18, 0x00, 0x35, 0x03},
    {0x0E, 0x03, 0x09, 0x0C, 0x1B, 0x1E, 0x0F, 0x1B, 0x08},
    {0x00, 0x00, 0x1C, 0x03, 0x1E, 0x15, 0x02, 0x0C, 0x00},
    {0x07, 0x1E, 0x10, 0x0F, 0x09, 0x32, 0x1E, 0x0F, 0x08},
    {0x09, 0x1E, 0x1A, 0x18, 0x1D, 0x17, 0x03, 0x0F, 0x3D},
    {0x07, 0x0B, 0x1A, 0x1D, 0x28, 0x00, 0x0E, 0x28, 0x08},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x03, 0x00, 0x09},
    {0x00, 0x04, 0x2B, 0x23, 0x04, 0x08, 0x08, 0x00, 0x08},
    {0x0E, 0x03, 0x00, 0x2B, 0x2F, 0x0D, 0x12, 0x03, 0x04},
    {0x01, 0x08, 0x00, 0x01, 0x08, 0x00, 0x01, 0x08, 0x04},
    {0x0F, 0x1D, 0x2F, 0x0E, 0x03, 0x23, 0x07, 0x1E, 0x0D},
    {0x0F, 0x12, 0x00, 0x23, 0x24, 0x1E, 0x23, 0x0F, 0x04},
    {0x26, 0x12, 0x15, 0x03, 0x12, 0x04, 0x24, 0x2F, 0x0F},
    {0x12, 0x04, 0x01, 0x0F, 0x07, 0x1E, 0x0F, 0x00, 0x01},
    {0x0E, 0x0F, 0x20, 0x05, 0x00, 0x07, 0x12, 0x0E, 0x08},
    {0x1E, 0x00, 0x10, 0x03, 0x0F, 0x04, 0x00, 0x00, 0x00},
    {0x32, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x03, 0x00},
    {0x00, 0x00, 0x01, 0x00, 0x00, 0x05, 0x00, 0x17, 0x0D},
    {0x00, 0x00, 0x00, 0x0A, 0x1A, 0x18, 0x00, 0x17, 0x03},
    {0x32, 0x09, 0x0F, 0x32, 0x07, 0x0C, 0x0C, 0x1A, 0x0F},
    {0x14, 0x00, 0x00, 0x32, 0x00, 0x00, 0x32, 0x00, 0x00},
    {0x0E, 0x1E, 0x15, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02},
    {0x00, 0x0E, 0x08, 0x0E, 0x1D, 0x23, 0x1E, 0x3A, 0x3A}, //wa
    {0x1D, 0x04, 0x15, 0x00, 0x00, 0x3A, 0x00, 0x00, 0x3A}, //wait 4 press
    {0x00, 0x00, 0x3A, 0x00, 0x0D, 0x0E, 0x03, 0x0F, 0x00},
    {0x3B, 0x3C, 0x2F, 0x37, 0x3C, 0x01, 0x00, 0x00, 0x00},
    {0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x02, 0x24, 0x1E},
    {0x00, 0x00, 0x00, 0x00, 0x07, 0x0B, 0x22, 0x03, 0x04},
    {0x00, 0x00, 0x39, 0x04, 0x25, 0x08, 0x03, 0x07, 0x0F}, //. 108  //6c
    {0x12, 0x2C, 0x00, 0x2B, 0x2A, 0x26, 0x0D, 0x07, 0x0F},
    {0x04, 0x0B, 0x08, 0x01, 0x10, 0x0D, 0x09, 0x00, 0x00},
    {0x00, 0x01, 0x08, 0x04, 0x01, 0x08, 0x23, 0x01, 0x08},
    {0x00, 0x00, 0x1B, 0x00, 0x00, 0x1B, 0x1F, 0x0E, 0x1B},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x2C, 0x00, 0x1B, 0x00},
    {0x00, 0x00, 0x01, 0x0F, 0x0D, 0x01, 0x09, 0x1E, 0x2B},
    {0x00, 0x23, 0x1A, 0x07, 0x1E, 0x0C, 0x0F, 0x00, 0x00},
    {0x1E, 0x12, 0x00, 0x00, 0x12, 0x00, 0x00, 0x12, 0x1A},
    {0x1E, 0x00, 0x10, 0x0F, 0x24, 0x1E, 0x34, 0x1D, 0x00},
    {0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x2F, 0x01},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x09, 0x15},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x28},
    {0x00, 0x00, 0x2B, 0x00, 0x00, 0x00, 0x09, 0x0C, 0x23},
    {0x24, 0x0C, 0x1E, 0x0F, 0x00, 0x07, 0x03, 0x0F, 0x00},
    {0x00, 0x00, 0x01, 0x0F, 0x07, 0x0B, 0x0F, 0x25, 0x0F}, //.123  //7b
    {0x0F, 0x04, 0x00, 0x00, 0x00, 0x12, 0x09, 0x0C, 0x12},
    {0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x09, 0x0C},
    {0x03, 0x00, 0x00, 0x00, 0x04, 0x32, 0x24, 0x0F, 0x23},
    {0x0E, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x09, 0x1E, 0x1A},
    {0x07, 0x0B, 0x0F, 0x07, 0x0C, 0x1E, 0x1A, 0x0F, 0x00},
    {0x0E, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08},
    {0x12, 0x00, 0x01, 0x0B, 0x00, 0x00, 0x00, 0x00, 0x09},
    {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0B},
    {0x00, 0x00, 0x12, 0x00, 0x00, 0x12, 0x04, 0x0C, 0x12},
    {0x32, 0x00, 0x00, 0x32, 0x00, 0x00, 0x08, 0x36, 0x00},
    {0x02, 0x0D, 0x00, 0x01, 0x0F, 0x0D, 0x00, 0x0E, 0x1E},
    {0x1E, 0x00, 0x10, 0x0F, 0x07, 0x0B, 0x34, 0x0F, 0x1D},
    {0x1D, 0x04, 0x08, 0x36, 0x00, 0x08, 0x12, 0x00, 0x00},
    {0x03, 0x1E, 0x0F, 0x26, 0x0A, 0x02, 0x26, 0x3E, 0x08}
};
const unsigned char ik1303_srom[128][9]={
{0x2C, 0x23, 0x00, 0x2C, 0x23, 0x00, 0x2C, 0x23, 0x30},
{0x31, 0x32, 0x00, 0x31, 0x32, 0x12, 0x31, 0x32, 0x30},
{0x00, 0x00, 0x00, 0x11, 0x23, 0x00, 0x1F, 0x06, 0x00},
{0x31, 0x00, 0x1C, 0x31, 0x00, 0x00, 0x31, 0x08, 0x1D},
{0x2C, 0x02, 0x0E, 0x2C, 0x02, 0x01, 0x2C, 0x02, 0x08},
{0x08, 0x3A, 0x00, 0x00, 0x3A, 0x01, 0x05, 0x3A, 0x11},
{0x18, 0x0A, 0x2B, 0x00, 0x01, 0x33, 0x02, 0x24, 0x25},
{0x37, 0x3A, 0x18, 0x31, 0x3A, 0x1F, 0x31, 0x3A, 0x3D},
{0x37, 0x02, 0x06, 0x31, 0x02, 0x12, 0x31, 0x10, 0x19},
{0x39, 0x02, 0x26, 0x33, 0x09, 0x08, 0x19, 0x19, 0x08},
{0x01, 0x14, 0x0C, 0x00, 0x00, 0x00, 0x1B, 0x06, 0x01},
{0x26, 0x00, 0x21, 0x12, 0x14, 0x24, 0x06, 0x12, 0x00},
{0x39, 0x00, 0x21, 0x08, 0x22, 0x00, 0x10, 0x14, 0x00},
{0x20, 0x00, 0x00, 0x39, 0x02, 0x00, 0x06, 0x25, 0x25},
{0x19, 0x02, 0x16, 0x09, 0x11, 0x19, 0x16, 0x11, 0x13},
{0x18, 0x08, 0x10, 0x18, 0x00, 0x01, 0x1F, 0x06, 0x12},
{0x1A, 0x12, 0x2E, 0x19, 0x02, 0x00, 0x33, 0x38, 0x00},
{0x0D, 0x06, 0x3B, 0x13, 0x0A, 0x02, 0x00, 0x27, 0x00},
{0x00, 0x00, 0x33, 0x13, 0x3C, 0x00, 0x11, 0x14, 0x04},
{0x11, 0x1D, 0x34, 0x13, 0x01, 0x00, 0x14, 0x27, 0x00},
{0x2C, 0x10, 0x21, 0x2C, 0x02, 0x33, 0x00, 0x00, 0x00},
{0x37, 0x12, 0x2A, 0x31, 0x02, 0x00, 0x12, 0x06, 0x09},
{0x37, 0x12, 0x2A, 0x31, 0x14, 0x0C, 0x00, 0x00, 0x00},
{0x39, 0x0D, 0x12, 0x10, 0x0F, 0x00, 0x00, 0x27, 0x03},
{0x37, 0x12, 0x0C, 0x31, 0x05, 0x00, 0x31, 0x00, 0x00},
{0x37, 0x20, 0x0A, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x11, 0x13, 0x0E, 0x01, 0x0D, 0x11, 0x05, 0x25, 0x24},
{0x0A, 0x24, 0x0C, 0x08, 0x0D, 0x21, 0x00, 0x00, 0x00},
{0x37, 0x06, 0x3A, 0x31, 0x05, 0x02, 0x0A, 0x1D, 0x16},
{0x38, 0x14, 0x0C, 0x00, 0x08, 0x06, 0x20, 0x1B, 0x34},
{0x0E, 0x02, 0x06, 0x00, 0x02, 0x1F, 0x19, 0x20, 0x08},
{0x37, 0x10, 0x21, 0x31, 0x12, 0x0C, 0x00, 0x00, 0x00},
{0x01, 0x2D, 0x30, 0x01, 0x2D, 0x00, 0x01, 0x2D, 0x30},
{0x33, 0x34, 0x06, 0x01, 0x18, 0x00, 0x01, 0x18, 0x08},
{0x31, 0x20, 0x34, 0x31, 0x20, 0x05, 0x31, 0x20, 0x08},
{0x1F, 0x3A, 0x20, 0x14, 0x3A, 0x20, 0x0C, 0x00, 0x20},
{0x0A, 0x20, 0x06, 0x30, 0x1F, 0x0C, 0x00, 0x20, 0x00},
{0x35, 0x20, 0x05, 0x34, 0x14, 0x09, 0x30, 0x20, 0x11},
{0x08, 0x18, 0x18, 0x08, 0x18, 0x18, 0x08, 0x33, 0x20},
{0x04, 0x16, 0x06, 0x36, 0x06, 0x0C, 0x01, 0x03, 0x00},
{0x2F, 0x08, 0x18, 0x1C, 0x00, 0x18, 0x00, 0x20, 0x18},
{0x00, 0x18, 0x14, 0x35, 0x1D, 0x06, 0x14, 0x00, 0x3B},
{0x06, 0x20, 0x05, 0x34, 0x14, 0x09, 0x19, 0x00, 0x21},
{0x05, 0x3A, 0x3A, 0x06, 0x3A, 0x3A, 0x05, 0x3A, 0x3A},
{0x01, 0x23, 0x00, 0x01, 0x23, 0x00, 0x01, 0x23, 0x08},
{0x01, 0x32, 0x02, 0x01, 0x32, 0x02, 0x01, 0x32, 0x02},
{0x15, 0x04, 0x03, 0x15, 0x17, 0x03, 0x15, 0x17, 0x03},
{0x07, 0x2B, 0x03, 0x07, 0x17, 0x03, 0x07, 0x17, 0x03},
{0x04, 0x1E, 0x06, 0x1E, 0x3F, 0x0E, 0x09, 0x11, 0x13},
{0x0F, 0x29, 0x05, 0x09, 0x28, 0x09, 0x09, 0x09, 0x01},
{0x08, 0x0B, 0x0B, 0x1B, 0x0B, 0x0B, 0x1E, 0x0B, 0x00},
{0x08, 0x0B, 0x0B, 0x0E, 0x0B, 0x0B, 0x1A, 0x0B, 0x00},
{0x11, 0x1D, 0x06, 0x08, 0x10, 0x04, 0x02, 0x06, 0x2F},
{0x1F, 0x1C, 0x2F, 0x00, 0x1C, 0x1C, 0x09, 0x18, 0x11},
{0x0B, 0x0C, 0x0C, 0x0B, 0x02, 0x30, 0x00, 0x00, 0x00},
{0x25, 0x1C, 0x04, 0x01, 0x1C, 0x1D, 0x1D, 0x06, 0x08},
{0x01, 0x30, 0x21, 0x3F, 0x2E, 0x11, 0x19, 0x25, 0x01},
{0x16, 0x00, 0x00, 0x03, 0x0C, 0x0A, 0x19, 0x0A, 0x19},
{0x0E, 0x16, 0x1B, 0x11, 0x1D, 0x10, 0x3C, 0x3A, 0x05},
{0x20, 0x08, 0x10, 0x06, 0x22, 0x19, 0x02, 0x22, 0x18},
{0x06, 0x0C, 0x01, 0x10, 0x00, 0x00, 0x00, 0x11, 0x13},
{0x0A, 0x2B, 0x03, 0x0A, 0x17, 0x03, 0x0A, 0x17, 0x03},
{0x12, 0x14, 0x06, 0x12, 0x02, 0x00, 0x0A, 0x02, 0x00},
{0x0A, 0x24, 0x0C, 0x00, 0x0A, 0x21, 0x06, 0x20, 0x18},
{0x0A, 0x21, 0x21, 0x35, 0x02, 0x08, 0x10, 0x02, 0x05},
{0x00, 0x12, 0x0F, 0x11, 0x24, 0x21, 0x35, 0x02, 0x05},
{0x06, 0x25, 0x0C, 0x06, 0x02, 0x12, 0x14, 0x02, 0x18},
{0x12, 0x20, 0x14, 0x00, 0x00, 0x21, 0x18, 0x12, 0x0B},
{0x0A, 0x24, 0x06, 0x00, 0x20, 0x08, 0x25, 0x02, 0x00},
{0x24, 0x02, 0x35, 0x18, 0x12, 0x14, 0x34, 0x00, 0x18},
{0x12, 0x14, 0x0C, 0x00, 0x0A, 0x21, 0x35, 0x02, 0x00},
{0x00, 0x26, 0x03, 0x06, 0x27, 0x03, 0x06, 0x27, 0x03},
{0x26, 0x03, 0x00, 0x27, 0x03, 0x00, 0x27, 0x03, 0x00},
{0x11, 0x04, 0x03, 0x00, 0x36, 0x03, 0x00, 0x36, 0x03},
{0x06, 0x04, 0x03, 0x07, 0x17, 0x03, 0x07, 0x17, 0x03},
{0x0A, 0x20, 0x24, 0x25, 0x03, 0x06, 0x08, 0x02, 0x0B},
{0x12, 0x04, 0x16, 0x0A, 0x17, 0x03, 0x0A, 0x17, 0x03},
{0x07, 0x2B, 0x00, 0x07, 0x17, 0x00, 0x07, 0x17, 0x25},
{0x00, 0x07, 0x2B, 0x03, 0x07, 0x17, 0x03, 0x07, 0x17},
{0x03, 0x36, 0x03, 0x11, 0x24, 0x1D, 0x24, 0x03, 0x06},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
{0x00, 0x15, 0x04, 0x03, 0x15, 0x17, 0x03, 0x15, 0x17},
{0x03, 0x12, 0x1D, 0x1D, 0x14, 0x06, 0x12, 0x06, 0x00},
{0x1C, 0x1C, 0x00, 0x1C, 0x2F, 0x00, 0x06, 0x20, 0x20},
{0x00, 0x0B, 0x02, 0x00, 0x0B, 0x02, 0x00, 0x36, 0x00},
{0x01, 0x18, 0x18, 0x01, 0x18, 0x18, 0x01, 0x18, 0x18},
{0x00, 0x00, 0x00, 0x33, 0x00, 0x08, 0x18, 0x04, 0x28},
{0x1F, 0x0C, 0x08, 0x25, 0x06, 0x0E, 0x06, 0x00, 0x18},
{0x06, 0x0E, 0x00, 0x16, 0x16, 0x00, 0x1D, 0x20, 0x20},
{0x18, 0x07, 0x06, 0x35, 0x10, 0x34, 0x05, 0x09, 0x24},
{0x05, 0x09, 0x09, 0x09, 0x09, 0x01, 0x0D, 0x10, 0x09},
{0x08, 0x25, 0x33, 0x2E, 0x06, 0x1B, 0x06, 0x00, 0x13},
{0x1C, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x1C, 0x00, 0x38},
{0x1D, 0x3D, 0x05, 0x1D, 0x3D, 0x05, 0x1D, 0x3D, 0x05},
{0x1D, 0x20, 0x1D, 0x00, 0x18, 0x00, 0x33, 0x34, 0x06},
{0x39, 0x3C, 0x21, 0x01, 0x3C, 0x01, 0x06, 0x1F, 0x19},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08},
{0x0A, 0x17, 0x03, 0x11, 0x13, 0x14, 0x00, 0x05, 0x35},
{0x00, 0x05, 0x34, 0x00, 0x00, 0x34, 0x00, 0x00, 0x34},
{0x38, 0x04, 0x02, 0x33, 0x00, 0x11, 0x04, 0x00, 0x00},
{0x0C, 0x00, 0x26, 0x33, 0x09, 0x09, 0x20, 0x08, 0x18},
{0x0F, 0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x05},
{0x30, 0x09, 0x20, 0x20, 0x06, 0x20, 0x21, 0x00, 0x00},
{0x0A, 0x3A, 0x10, 0x2B, 0x18, 0x38, 0x38, 0x0E, 0x02},
{0x16, 0x0C, 0x35, 0x05, 0x00, 0x00, 0x19, 0x30, 0x00},
{0x08, 0x1C, 0x18, 0x00, 0x1C, 0x00, 0x00, 0x05, 0x3A},
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x20},
{0x1F, 0x0C, 0x08, 0x25, 0x06, 0x08, 0x00, 0x00, 0x34},
{0x06, 0x1C, 0x05, 0x25, 0x1C, 0x25, 0x1F, 0x18, 0x34},
{0x33, 0x20, 0x26, 0x0B, 0x02, 0x00, 0x34, 0x09, 0x09},
{0x00, 0x06, 0x36, 0x00, 0x00, 0x11, 0x24, 0x0B, 0x34},
{0x20, 0x20, 0x00, 0x00, 0x39, 0x02, 0x08, 0x1D, 0x00},
{0x00, 0x08, 0x00, 0x3E, 0x00, 0x00, 0x37, 0x08, 0x1D},
{0x00, 0x00, 0x20, 0x00, 0x35, 0x20, 0x05, 0x34, 0x34},
{0x12, 0x14, 0x24, 0x34, 0x2E, 0x30, 0x1F, 0x06, 0x08},
{0x01, 0x05, 0x30, 0x04, 0x30, 0x2E, 0x06, 0x0E, 0x00},
{0x36, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x34, 0x00},
{0x0A, 0x06, 0x1B, 0x1F, 0x00, 0x00, 0x25, 0x00, 0x3B},
{0x25, 0x10, 0x06, 0x00, 0x00, 0x0A, 0x10, 0x07, 0x03},
{0x0A, 0x10, 0x01, 0x00, 0x00, 0x00, 0x16, 0x19, 0x35},
{0x06, 0x12, 0x10, 0x19, 0x10, 0x00, 0x00, 0x00, 0x3A},
{0x11, 0x06, 0x09, 0x35, 0x16, 0x10, 0x3E, 0x13, 0x0D},
{0x24, 0x3D, 0x10, 0x0E, 0x12, 0x33, 0x03, 0x06, 0x30},
{0x00, 0x26, 0x00, 0x00, 0x27, 0x00, 0x00, 0x3B, 0x08},
{0x06, 0x0C, 0x0C, 0x20, 0x0A, 0x06, 0x11, 0x14, 0x00},
{0x18, 0x24, 0x06, 0x0A, 0x10, 0x18, 0x11, 0x24, 0x18},
{0x10, 0x25, 0x05, 0x06, 0x3C, 0x05, 0x06, 0x00, 0x00},
{0x06, 0x0C, 0x0C, 0x00, 0x00, 0x12, 0x24, 0x1D, 0x1D}
};

#endif // SYNCHRO_H
