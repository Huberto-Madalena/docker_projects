#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <infiniband/verbs.h>

int main() {
    struct ibv_device **dev_list;
    struct ibv_device *ib_dev;

    dev_list = ibv_get_device_list(NULL);
    if (!dev_list) {
        perror("Failed to get IB devices list");
        return 1;
    }

    ib_dev = dev_list[0];
    if (!ib_dev) {
        printf("No RDMA devices found\n");
        return 1;
    }

    printf("Using RDMA device: %s\n", ibv_get_device_name(ib_dev));

    ibv_free_device_list(dev_list);
    return 0;
}
