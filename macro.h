// 一些宏定义

typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef unsigned char uint8;
typedef unsigned char byte;
typedef unsigned short uint16;
typedef unsigned int  uint32;
typedef unsigned long uint64;

extern char skernel[];
extern char stext[];
extern char etext[];
extern char srodata[];
extern char erodata[];
extern char sdata[];
extern char edata[];       // bootstack的起始位置, the bottom of bootstack
extern char sbss[];
extern char ebss[];
extern char ekernel[];