#include "RingBuffer.h"

bool RingBuffer_Init(RingBuffer *ringbuffer, char *RingBuffer_data, size_t buffer_size)
{
    if((ringbuffer) && (RingBuffer_data) && (buffer_size > 0))
    {
        ringbuffer->Buffer_Size = buffer_size; 
        ringbuffer->Counter = 0;
        ringbuffer->Head = 0;
        ringbuffer->Tail = 0;
        ringbuffer->RingBuffer = RingBuffer_data;
        return true;
    }
    return false;
}

bool RingBuffer_Clear(RingBuffer *ringbuffer)
{
    if(ringbuffer)
    {
        ringbuffer->Counter = 0;
        ringbuffer->Head = 0;
        ringbuffer->Tail = 0;
        return true;
    }
    return false;
}

bool RingBuffer_Is_Empty(RingBuffer *ringbuffer)
{
    if(ringbuffer->Counter == 0)
    {
        return true;
    }
    return false;
}

size_t RingBuffer_getCapacity(RingBuffer *ringbuffer)
{
    return ringbuffer->Counter;
}

bool RingBuffer_getChar(RingBuffer *ringbuffer, char *c)
{
    if(ringbuffer)
    {
        if(ringbuffer->Counter != 0)
        {
            *c = ringbuffer->RingBuffer[ringbuffer->Tail];
            ringbuffer->Tail = (ringbuffer->Tail + 1) % ringbuffer->Buffer_Size;
            ringbuffer->Counter--;
            return true;
        }
    }
    return false;

}

bool RingBuffer_putChar(RingBuffer *ringbuffer, char c)
{
    if(ringbuffer)
    {
        ringbuffer->RingBuffer[ringbuffer->Head] = c;
        ringbuffer->Head = (ringbuffer->Head + 1) % ringbuffer->Buffer_Size;
        ringbuffer->Counter++;
        if(ringbuffer->Counter >= ringbuffer->Buffer_Size)
            ringbuffer->Counter = ringbuffer->Buffer_Size; // counter can't be bigger than buffr size 
        return true;
    }
    return false;

}
