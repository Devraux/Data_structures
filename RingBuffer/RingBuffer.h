#ifndef _RingBuffer_
#define _RingBuffer_

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    char* RingBuffer;
    size_t counter; // counter counts data in buffer
    size_t head;
    size_t tail;
    size_t buffer_size;
}RingBuffer;

bool RingBuffer_Init(RingBuffer *ringbuffer, char *RngBuffer_data, size_t Buffer_size); //reutrn true if initialization was successful 
bool RingBuffer_Clear(RingBuffer *ringbuffer); //return true if RingBuffer was cleared
bool RingBuffer_Is_Empty(RingBuffer *ringbuffer); //return true if reing buffer is empty
bool RingBuffer_getChar(RingBuffer *ringbuffer, char *c); // return true if char was read succesfully
bool RingBuffer_putChar(RingBuffer *ringbuffer, char c); // return true if char added succesfully
size_t RingBuffer_getCapacity(RingBuffer *ringbuffer); // return data counter


#endif