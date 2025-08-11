#ifndef QEMU_LOG_TDA_H
#define QEMU_LOG_TDA_H



#define TDA_PRINTF( FORMAT, ... ) \
    do { \
        printf( "@TDA [%s:%s:%d] -> " FORMAT "\n", __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__ ); \
    } while (0)



#endif
