#include "net.h"
#include "netif_pcap.h"
#include "log.h"

net_err_t netdev_init(void)
{
    return netif_pcap_open();
}

int main(int argc, char **argv)
{
    LOG_INFO("start.");
    net_init();
    net_start();

    netdev_init();
    return 0;
}