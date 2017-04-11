#ifndef LIBTORRENT_NET_SOCKET_ADDRESS_H
#define LIBTORRENT_NET_SOCKET_ADDRESS_H

#include <memory>
#include <string>
#include <torrent/common.h>

// TODO: Rename sa_in* to sin*?

namespace torrent {

bool sa_is_unspec(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
bool sa_is_inet(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
bool sa_is_inet6(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
bool sa_is_inet_inet6(const sockaddr* sockaddr) LIBTORRENT_EXPORT;

bool sa_is_bindable(const sockaddr* sockaddr) LIBTORRENT_EXPORT;

bool sa_is_default(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
bool sa_in_is_default(const sockaddr_in* sockaddr) LIBTORRENT_EXPORT;
bool sa_in6_is_default(const sockaddr_in6* sockaddr) LIBTORRENT_EXPORT;

bool sa_is_v4mapped(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
bool sa_in6_is_v4mapped(const sockaddr_in6* sockaddr) LIBTORRENT_EXPORT;

size_t sa_length(const sockaddr* sa) LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr>     sa_make_unspec() LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr>     sa_make_inet() LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr>     sa_make_inet6() LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr>     sa_copy(const sockaddr* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr>     sa_copy_inet(const sockaddr_in* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr>     sa_copy_inet6(const sockaddr_in6* sa) LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr_in>  sa_in_make() LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr_in6> sa_in6_make() LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr_in>  sa_in_copy(const sockaddr_in* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr_in6> sa_in6_copy(const sockaddr_in6* sa) LIBTORRENT_EXPORT;

std::unique_ptr<sockaddr>     sa_from_v4mapped(const sockaddr* sa) LIBTORRENT_EXPORT;
std::unique_ptr<sockaddr_in>  sa_in_from_in6_v4mapped(const sockaddr_in6* sa) LIBTORRENT_EXPORT;

void sa_clear_inet6(sockaddr_in6* sa) LIBTORRENT_EXPORT;

uint16_t sa_port(sockaddr* sa) LIBTORRENT_EXPORT;
void     sa_set_port(sockaddr* sa, uint16_t port) LIBTORRENT_EXPORT;

std::string sa_addr_str(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
std::string sa_in_addr_str(const sockaddr_in* sockaddr) LIBTORRENT_EXPORT;
std::string sa_in6_addr_str(const sockaddr_in6* sockaddr) LIBTORRENT_EXPORT;

std::string sa_pretty_str(const sockaddr* sockaddr) LIBTORRENT_EXPORT;
std::string sa_in_pretty_str(const sockaddr_in* sockaddr) LIBTORRENT_EXPORT;
std::string sa_in6_pretty_str(const sockaddr_in6* sockaddr) LIBTORRENT_EXPORT;

// Rename/replace:
void sa_inet_mapped_inet6(const sockaddr_in* sa, sockaddr_in6* mapped) LIBTORRENT_EXPORT;

std::string sa_pretty_address_str(const sockaddr* sockaddr) LIBTORRENT_EXPORT;

}

#endif
