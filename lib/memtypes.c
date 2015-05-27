/*
 * Memory type definitions. This file is parsed by memtypes.awk to extract
 * MTYPE_ and memory_list_.. information in order to autogenerate 
 * memtypes.h.
 *
 * The script is sensitive to the format (though not whitespace), see
 * the top of memtypes.awk for more details.
 */

#include "zebra.h"
#include "memory.h"


DEFINE_MGROUP(LIB, "libzebra")
DEFINE_MTYPE(LIB, TMP,			"Temporary memory")
DEFINE_MTYPE(LIB, STRVEC,			"String vector")
DEFINE_MTYPE(LIB, VECTOR,			"Vector")
DEFINE_MTYPE(LIB, VECTOR_INDEX,		"Vector index")
DEFINE_MTYPE(LIB, LINK_LIST,		"Link List")
DEFINE_MTYPE(LIB, LINK_NODE,		"Link Node")
DEFINE_MTYPE(LIB, THREAD,			"Thread")
DEFINE_MTYPE(LIB, THREAD_MASTER,		"Thread master")
DEFINE_MTYPE(LIB, THREAD_STATS,		"Thread stats")
DEFINE_MTYPE(LIB, VTY,			"VTY")
DEFINE_MTYPE(LIB, VTY_OUT_BUF,		"VTY output buffer")
DEFINE_MTYPE(LIB, VTY_HIST,		"VTY history")
DEFINE_MTYPE(LIB, IF,			"Interface")
DEFINE_MTYPE(LIB, CONNECTED,		"Connected")
DEFINE_MTYPE(LIB, CONNECTED_LABEL,		"Connected interface label")
DEFINE_MTYPE(LIB, BUFFER,			"Buffer")
DEFINE_MTYPE(LIB, BUFFER_DATA,		"Buffer data")
DEFINE_MTYPE(LIB, STREAM,			"Stream")
DEFINE_MTYPE(LIB, STREAM_DATA,		"Stream data")
DEFINE_MTYPE(LIB, STREAM_FIFO,		"Stream FIFO")
DEFINE_MTYPE(LIB, PREFIX,			"Prefix")
DEFINE_MTYPE(LIB, PREFIX_IPV4,		"Prefix IPv4")
DEFINE_MTYPE(LIB, PREFIX_IPV6,		"Prefix IPv6")
DEFINE_MTYPE(LIB, HASH,			"Hash")
DEFINE_MTYPE(LIB, HASH_BACKET,		"Hash Bucket")
DEFINE_MTYPE(LIB, HASH_INDEX,		"Hash Index")
DEFINE_MTYPE(LIB, ROUTE_TABLE,		"Route table")
DEFINE_MTYPE(LIB, ROUTE_NODE,		"Route node")
DEFINE_MTYPE(LIB, DISTRIBUTE,		"Distribute list")
DEFINE_MTYPE(LIB, DISTRIBUTE_IFNAME,	"Dist-list ifname")
DEFINE_MTYPE(LIB, ACCESS_LIST,		"Access List")
DEFINE_MTYPE(LIB, ACCESS_LIST_STR,		"Access List Str")
DEFINE_MTYPE(LIB, ACCESS_FILTER,		"Access Filter")
DEFINE_MTYPE(LIB, PREFIX_LIST,		"Prefix List")
DEFINE_MTYPE(LIB, PREFIX_LIST_ENTRY,	"Prefix List Entry")
DEFINE_MTYPE(LIB, PREFIX_LIST_STR,		"Prefix List Str")
DEFINE_MTYPE(LIB, ROUTE_MAP,		"Route map")
DEFINE_MTYPE(LIB, ROUTE_MAP_NAME,		"Route map name")
DEFINE_MTYPE(LIB, ROUTE_MAP_INDEX,		"Route map index")
DEFINE_MTYPE(LIB, ROUTE_MAP_RULE,		"Route map rule")
DEFINE_MTYPE(LIB, ROUTE_MAP_RULE_STR,	"Route map rule str")
DEFINE_MTYPE(LIB, ROUTE_MAP_COMPILED,	"Route map compiled")
DEFINE_MTYPE(LIB, CMD_TOKENS,		"Command desc")
DEFINE_MTYPE(LIB, KEY,			"Key")
DEFINE_MTYPE(LIB, KEYCHAIN,		"Key chain")
DEFINE_MTYPE(LIB, IF_RMAP,			"Interface route map")
DEFINE_MTYPE(LIB, IF_RMAP_NAME,		"I.f. route map name")
DEFINE_MTYPE(LIB, SOCKUNION,		"Socket union")
DEFINE_MTYPE(LIB, PRIVS,			"Privilege information")
DEFINE_MTYPE(LIB, ZLOG,			"Logging")
DEFINE_MTYPE(LIB, ZCLIENT,			"Zclient")
DEFINE_MTYPE(LIB, WORK_QUEUE,		"Work queue")
DEFINE_MTYPE(LIB, WORK_QUEUE_ITEM,		"Work queue item")
DEFINE_MTYPE(LIB, WORK_QUEUE_NAME,		"Work queue name string")
DEFINE_MTYPE(LIB, PQUEUE,			"Priority queue")
DEFINE_MTYPE(LIB, PQUEUE_DATA,		"Priority queue data")
DEFINE_MTYPE(LIB, HOST, "host configuration")



DEFINE_MGROUP(ZEBRA, "zebra")
DEFINE_MTYPE(ZEBRA, RTADV_PREFIX,		"Router Advertisement Prefix")
DEFINE_MTYPE(ZEBRA, VRF,			"VRF")
DEFINE_MTYPE(ZEBRA, VRF_NAME,		"VRF name")
DEFINE_MTYPE(ZEBRA, NEXTHOP,		"Nexthop")
DEFINE_MTYPE(ZEBRA, RIB,			"RIB")
DEFINE_MTYPE(ZEBRA, RIB_QUEUE,		"RIB process work queue")
DEFINE_MTYPE(ZEBRA, STATIC_IPV4,		"Static IPv4 route")
DEFINE_MTYPE(ZEBRA, STATIC_IPV6,		"Static IPv6 route")
DEFINE_MTYPE(ZEBRA, RIB_DEST,		"RIB destination")
DEFINE_MTYPE(ZEBRA, RIB_TABLE_INFO,	"RIB table info")



DEFINE_MGROUP(BGPD, "bgpd")
DEFINE_MTYPE(BGPD, BGP,			"BGP instance")
DEFINE_MTYPE(BGPD, BGP_LISTENER,		"BGP listen socket details")
DEFINE_MTYPE(BGPD, BGP_PEER,		"BGP peer")
DEFINE_MTYPE(BGPD, BGP_PEER_HOST,		"BGP peer hostname")
DEFINE_MTYPE(BGPD, PEER_GROUP,		"Peer group")
DEFINE_MTYPE(BGPD, PEER_DESC,		"Peer description")
DEFINE_MTYPE(BGPD, PEER_PASSWORD,		"Peer password string")
DEFINE_MTYPE(BGPD, ATTR,			"BGP attribute")
DEFINE_MTYPE(BGPD, ATTR_EXTRA,		"BGP extra attributes")
DEFINE_MTYPE(BGPD, AS_PATH,		"BGP aspath")
DEFINE_MTYPE(BGPD, AS_SEG,			"BGP aspath seg")
DEFINE_MTYPE(BGPD, AS_SEG_DATA,		"BGP aspath segment data")
DEFINE_MTYPE(BGPD, AS_STR,			"BGP aspath str")

DEFINE_MTYPE(BGPD, BGP_TABLE,		"BGP table")
DEFINE_MTYPE(BGPD, BGP_NODE,		"BGP node")
DEFINE_MTYPE(BGPD, BGP_ROUTE,		"BGP route")
DEFINE_MTYPE(BGPD, BGP_ROUTE_EXTRA,	"BGP ancillary route info")
DEFINE_MTYPE(BGPD, BGP_CONN,		"BGP connected")
DEFINE_MTYPE(BGPD, BGP_STATIC,		"BGP static")
DEFINE_MTYPE(BGPD, BGP_ADVERTISE_ATTR,	"BGP adv attr")
DEFINE_MTYPE(BGPD, BGP_ADVERTISE,		"BGP adv")
DEFINE_MTYPE(BGPD, BGP_SYNCHRONISE,	"BGP synchronise")
DEFINE_MTYPE(BGPD, BGP_ADJ_IN,		"BGP adj in")
DEFINE_MTYPE(BGPD, BGP_ADJ_OUT,		"BGP adj out")
DEFINE_MTYPE(BGPD, BGP_MPATH_INFO,		"BGP multipath info")

DEFINE_MTYPE(BGPD, AS_LIST,		"BGP AS list")
DEFINE_MTYPE(BGPD, AS_FILTER,		"BGP AS filter")
DEFINE_MTYPE(BGPD, AS_FILTER_STR,		"BGP AS filter str")

DEFINE_MTYPE(BGPD, COMMUNITY,		"community")
DEFINE_MTYPE(BGPD, COMMUNITY_VAL,		"community val")
DEFINE_MTYPE(BGPD, COMMUNITY_STR,		"community str")

DEFINE_MTYPE(BGPD, ECOMMUNITY,		"extcommunity")
DEFINE_MTYPE(BGPD, ECOMMUNITY_VAL,		"extcommunity val")
DEFINE_MTYPE(BGPD, ECOMMUNITY_STR,		"extcommunity str")

DEFINE_MTYPE(BGPD, COMMUNITY_LIST,		"community-list")
DEFINE_MTYPE(BGPD, COMMUNITY_LIST_NAME,	"community-list name")
DEFINE_MTYPE(BGPD, COMMUNITY_LIST_ENTRY,	"community-list entry")
DEFINE_MTYPE(BGPD, COMMUNITY_LIST_CONFIG,	"community-list config")
DEFINE_MTYPE(BGPD, COMMUNITY_LIST_HANDLER,	"community-list handler")

DEFINE_MTYPE(BGPD, CLUSTER,		"Cluster list")
DEFINE_MTYPE(BGPD, CLUSTER_VAL,		"Cluster list val")

DEFINE_MTYPE(BGPD, BGP_PROCESS_QUEUE,	"BGP Process queue")
DEFINE_MTYPE(BGPD, BGP_CLEAR_NODE_QUEUE,	"BGP node clear queue")

DEFINE_MTYPE(BGPD, TRANSIT,		"BGP transit attr")
DEFINE_MTYPE(BGPD, TRANSIT_VAL,		"BGP transit val")

DEFINE_MTYPE(BGPD, BGP_DISTANCE,		"BGP distance")
DEFINE_MTYPE(BGPD, BGP_NEXTHOP_CACHE,	"BGP nexthop")
DEFINE_MTYPE(BGPD, BGP_CONFED_LIST,	"BGP confed list")
DEFINE_MTYPE(BGPD, PEER_UPDATE_SOURCE,	"BGP peer update interface")
DEFINE_MTYPE(BGPD, BGP_DAMP_INFO,		"Dampening info")
DEFINE_MTYPE(BGPD, BGP_DAMP_ARRAY,		"BGP Dampening array")
DEFINE_MTYPE(BGPD, BGP_REGEXP,		"BGP regexp")
DEFINE_MTYPE(BGPD, BGP_AGGREGATE,		"BGP aggregate")
DEFINE_MTYPE(BGPD, BGP_ADDR,		"BGP own address")



DEFINE_MGROUP(RIPD, "ripd")
DEFINE_MTYPE(RIPD, RIP,			"RIP structure")
DEFINE_MTYPE(RIPD, RIP_INFO,		"RIP route info")
DEFINE_MTYPE(RIPD, RIP_INTERFACE,		"RIP interface")
DEFINE_MTYPE(RIPD, RIP_PEER,		"RIP peer")
DEFINE_MTYPE(RIPD, RIP_OFFSET_LIST,	"RIP offset list")
DEFINE_MTYPE(RIPD, RIP_DISTANCE,		"RIP distance")



DEFINE_MGROUP(RIPNGD, "ripngd")
DEFINE_MTYPE(RIPNGD, RIPNG,		"RIPng structure")
DEFINE_MTYPE(RIPNGD, RIPNG_ROUTE,		"RIPng route info")
DEFINE_MTYPE(RIPNGD, RIPNG_AGGREGATE,	"RIPng aggregate")
DEFINE_MTYPE(RIPNGD, RIPNG_PEER,		"RIPng peer")
DEFINE_MTYPE(RIPNGD, RIPNG_OFFSET_LIST,	"RIPng offset lst")
DEFINE_MTYPE(RIPNGD, RIPNG_RTE_DATA,	"RIPng rte data")



DEFINE_MGROUP(BABELD, "babeld")
DEFINE_MTYPE(BABELD, BABEL,		"Babel structure")
DEFINE_MTYPE(BABELD, BABEL_IF,		"Babel interface")



DEFINE_MGROUP(OSPFD, "ospfd")
DEFINE_MTYPE(OSPFD, OSPF_TOP,           "OSPF top")
DEFINE_MTYPE(OSPFD, OSPF_AREA,          "OSPF area")
DEFINE_MTYPE(OSPFD, OSPF_AREA_RANGE,    "OSPF area range")
DEFINE_MTYPE(OSPFD, OSPF_NETWORK,       "OSPF network")
DEFINE_MTYPE(OSPFD, OSPF_NEIGHBOR_STATIC, "OSPF static nbr")
DEFINE_MTYPE(OSPFD, OSPF_IF,            "OSPF interface")
DEFINE_MTYPE(OSPFD, OSPF_NEIGHBOR,      "OSPF neighbor")
DEFINE_MTYPE(OSPFD, OSPF_ROUTE,         "OSPF route")
DEFINE_MTYPE(OSPFD, OSPF_TMP,           "OSPF tmp mem")
DEFINE_MTYPE(OSPFD, OSPF_LSA,           "OSPF LSA")
DEFINE_MTYPE(OSPFD, OSPF_LSA_DATA,      "OSPF LSA data")
DEFINE_MTYPE(OSPFD, OSPF_LSDB,          "OSPF LSDB")
DEFINE_MTYPE(OSPFD, OSPF_PACKET,        "OSPF packet")
DEFINE_MTYPE(OSPFD, OSPF_FIFO,          "OSPF FIFO queue")
DEFINE_MTYPE(OSPFD, OSPF_VERTEX,        "OSPF vertex")
DEFINE_MTYPE(OSPFD, OSPF_VERTEX_PARENT, "OSPF vertex parent")
DEFINE_MTYPE(OSPFD, OSPF_NEXTHOP,       "OSPF nexthop")
DEFINE_MTYPE(OSPFD, OSPF_PATH,	      "OSPF path")
DEFINE_MTYPE(OSPFD, OSPF_VL_DATA,       "OSPF VL data")
DEFINE_MTYPE(OSPFD, OSPF_CRYPT_KEY,     "OSPF crypt key")
DEFINE_MTYPE(OSPFD, OSPF_EXTERNAL_INFO, "OSPF ext. info")
DEFINE_MTYPE(OSPFD, OSPF_DISTANCE,      "OSPF distance")
DEFINE_MTYPE(OSPFD, OSPF_IF_INFO,       "OSPF if info")
DEFINE_MTYPE(OSPFD, OSPF_IF_PARAMS,     "OSPF if params")
DEFINE_MTYPE(OSPFD, OSPF_MESSAGE,		"OSPF message")



DEFINE_MGROUP(OSPF6D, "ospf6d")
DEFINE_MTYPE(OSPF6D, OSPF6_TOP,          "OSPF6 top")
DEFINE_MTYPE(OSPF6D, OSPF6_AREA,         "OSPF6 area")
DEFINE_MTYPE(OSPF6D, OSPF6_IF,           "OSPF6 interface")
DEFINE_MTYPE(OSPF6D, OSPF6_NEIGHBOR,     "OSPF6 neighbor")
DEFINE_MTYPE(OSPF6D, OSPF6_ROUTE,        "OSPF6 route")
DEFINE_MTYPE(OSPF6D, OSPF6_PREFIX,       "OSPF6 prefix")
DEFINE_MTYPE(OSPF6D, OSPF6_MESSAGE,      "OSPF6 message")
DEFINE_MTYPE(OSPF6D, OSPF6_LSA,          "OSPF6 LSA")
DEFINE_MTYPE(OSPF6D, OSPF6_LSA_SUMMARY,  "OSPF6 LSA summary")
DEFINE_MTYPE(OSPF6D, OSPF6_LSDB,         "OSPF6 LSA database")
DEFINE_MTYPE(OSPF6D, OSPF6_VERTEX,       "OSPF6 vertex")
DEFINE_MTYPE(OSPF6D, OSPF6_SPFTREE,      "OSPF6 SPF tree")
DEFINE_MTYPE(OSPF6D, OSPF6_NEXTHOP,      "OSPF6 nexthop")
DEFINE_MTYPE(OSPF6D, OSPF6_EXTERNAL_INFO,"OSPF6 ext. info")
DEFINE_MTYPE(OSPF6D, OSPF6_OTHER,        "OSPF6 other")



DEFINE_MGROUP(ISISD, "isisd")
DEFINE_MTYPE(ISISD, ISIS,               "ISIS")
DEFINE_MTYPE(ISISD, ISIS_TMP,           "ISIS TMP")
DEFINE_MTYPE(ISISD, ISIS_CIRCUIT,       "ISIS circuit")
DEFINE_MTYPE(ISISD, ISIS_LSP,           "ISIS LSP")
DEFINE_MTYPE(ISISD, ISIS_ADJACENCY,     "ISIS adjacency")
DEFINE_MTYPE(ISISD, ISIS_AREA,          "ISIS area")
DEFINE_MTYPE(ISISD, ISIS_AREA_ADDR,     "ISIS area address")
DEFINE_MTYPE(ISISD, ISIS_TLV,           "ISIS TLV")
DEFINE_MTYPE(ISISD, ISIS_DYNHN,         "ISIS dyn hostname")
DEFINE_MTYPE(ISISD, ISIS_SPFTREE,       "ISIS SPFtree")
DEFINE_MTYPE(ISISD, ISIS_VERTEX,        "ISIS vertex")
DEFINE_MTYPE(ISISD, ISIS_ROUTE_INFO,    "ISIS route info")
DEFINE_MTYPE(ISISD, ISIS_NEXTHOP,       "ISIS nexthop")
DEFINE_MTYPE(ISISD, ISIS_NEXTHOP6,      "ISIS nexthop6")
DEFINE_MTYPE(ISISD, ISIS_DICT,          "ISIS dictionary")
DEFINE_MTYPE(ISISD, ISIS_DICT_NODE,     "ISIS dictionary node")



DEFINE_MGROUP(PIMD, "pimd")
DEFINE_MTYPE(PIMD, PIM_CHANNEL_OIL,       "PIM SSM (S,G) channel OIL")
DEFINE_MTYPE(PIMD, PIM_INTERFACE,         "PIM interface")
DEFINE_MTYPE(PIMD, PIM_IGMP_JOIN,         "PIM interface IGMP static join")
DEFINE_MTYPE(PIMD, PIM_IGMP_SOCKET,       "PIM interface IGMP socket")
DEFINE_MTYPE(PIMD, PIM_IGMP_GROUP,        "PIM interface IGMP group")
DEFINE_MTYPE(PIMD, PIM_IGMP_GROUP_SOURCE, "PIM interface IGMP source")
DEFINE_MTYPE(PIMD, PIM_NEIGHBOR,          "PIM interface neighbor")
DEFINE_MTYPE(PIMD, PIM_IFCHANNEL,         "PIM interface (S,G) state")
DEFINE_MTYPE(PIMD, PIM_UPSTREAM,          "PIM upstream (S,G) state")
DEFINE_MTYPE(PIMD, PIM_SSMPINGD,          "PIM sspimgd socket")



DEFINE_MGROUP(MVTYSH, "vtysh")
DEFINE_MTYPE(MVTYSH, VTYSH_CONFIG,		"Vtysh configuration")
DEFINE_MTYPE(MVTYSH, VTYSH_CONFIG_LINE,	"Vtysh configuration line")

