#ifndef __SETTINGS_H__
#define __SETTINGS_H__

#include <stdint.h>

// Constant to keep track of which revision of coilcube sent the packet.
// This will probably be useful to determine what wakeups and packets mean.
//#define SEHNSOR_VERSION 2

#define ADDR_ALL_ROUTERS "ff02::2"

#define GATD_ADDR "2001:470:1f10:1320::2"
#define GATD_PORT 4001

#define MAGICID 0xBD30

#define FRAM_ADDR_CONFIG 0

typedef struct {
  uint32_t magic_id;
  uint8_t power_state;
} fram_config_t;


#define RELAY_OFF 0
#define RELAY_ON  1

#define ACME_CMD_POWER_ON  1
#define ACME_CMD_POWER_OFF 2


#define UDP_LISTEN_PORT 47652
#define UDP_REMOTE_PORT 47653

#endif
