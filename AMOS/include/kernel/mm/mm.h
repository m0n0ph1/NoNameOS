#ifndef _KERNEL_MM_MM_H_
#define _KERNEL_MM_MM_H_

#include <sys/types.h>
#include <kernel/pm/process.h>

struct MM_HEAPITEM
{
	struct MM_HEAPITEM * next;
	unsigned int size;
	unsigned int used;//:1;
	//unsigned int available:7;
} PACKED;

void mm_init( DWORD );

void * mm_morecore( struct PROCESS_INFO *, DWORD );

void mm_free( void * );

void * mm_malloc( DWORD );

#endif
