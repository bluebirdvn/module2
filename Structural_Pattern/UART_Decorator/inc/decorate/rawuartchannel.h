#ifndef _RAWUARTCHANNEL_H
#define _RAWUARTCHANNEL_H

#include "commonchannnel.h"

typedef struct {
    int uartChannelId;
    uint8_t buffer_send[256];
    uint8_t size_buffer;
} RawUartChannel;

int sendRawUart(void *instace, uint8_t *data, size_t length);
int receiveRawUart(void *instance, uint8_t *buffer, size_t lengthbuffer, size_t *receivedlength);
CommonChannel *createRawUartChannel(int uartChannelId);
void destroyRawUartChannel(CommonChannel *channel);
#endif