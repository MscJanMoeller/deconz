/*
 * zm_config.h
 */

#ifndef ZM_CONFIG_H_
#define ZM_CONFIG_H_

//#ifndef ZM_MAX_NEIGHBOUR_TABLE_SIZE
//#define ZM_MAX_NEIGHBOUR_TABLE_SIZE 0x5
//#endif

//#define ZM_MAX_TX_QUEUE_SIZE 4

//#define ZM_USE_BITCLOUD
//#define USE_BITCLOUD_MGMT_BIND_HACK
//#define USE_BITCLOUD_NWK_ADDR_ALTERNATE
//#define ZM_USE_MGMT_LQI
//#define ZM_USE_MGMT_BIND

#ifdef USE_BITCLOUD_NWK_ADDR_ALTERNATE
#define ZM_USE_NWK_ADDR_ALTERNATE
#endif

#if defined(USE_BITCLOUD_MGMT_BIND_HACK) || defined(USE_BITCLOUD_NWK_ADDR_ALTERNATE)
#define ZM_EXTRA_ZDO            1
#define ZM_EXTRA_ZDO_ENDPOINT   0xE0
#define ZM_EXTRA_ZDO_PROFILE_ID 0x0104
#define ZM_EXTRA_ZDO_DEVICE_ID  0x0005
#endif

//#define ZM_DEVICE_TICK_MS 100

#endif /* ZM_CONFIG_H_ */
