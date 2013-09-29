
#ifndef _BATADV_QUERY_H
#define _BATADV_QUERY_H

#include <stdint.h>
#include <netinet/in.h>

struct ether_addr *translate_mac(char *mesh_iface, struct ether_addr *mac);
uint8_t get_tq(char *mesh_iface, struct ether_addr *mac);
int batadv_interface_check(char *mesh_iface);
int mac_to_ipv6(const struct ether_addr *mac, struct in6_addr *addr);
int ipv6_to_mac(const struct in6_addr *addr, struct ether_addr *mac);
int is_ipv6_eui64(const struct in6_addr *addr);

#endif
