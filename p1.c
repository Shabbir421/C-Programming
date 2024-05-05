#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char ip[10][20] = {"192.168.0.64", "192.168.0.60", "192.168.0.68", "132.147.3.3"};
    char et[10][20] = {"00_A8_00_40_8E_FS", "00_-16_17_31_8e_22", "00_.16_17_31_8E_F7", "00_-16_17_31_8E_O2"};
    char ipaddr[20], etaddr[20];
    int op, i, x = 0, y = 0;

    while (1) {
        printf("\n\n1.ARP 2.RARP 3.EXIT");
        printf("\nEnter the choice: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("\nEnter IP address: ");
                scanf("%s", ipaddr);
                for (i = 0; i < 10; i++) {
                    if (strcmp(ipaddr, ip[i]) == 0) {
                        printf("Ethernet address is %s\n", et[i]);
                        x = 1;
                        break;
                    }
                }
                if (x == 0)
                    printf("Invalid IP address\n");
                break;

            case 2:
                printf("\nEnter Ethernet address: ");
                scanf("%s", etaddr);
                for (i = 0; i < 10; i++) {
                    if (strcmp(etaddr, et[i]) == 0) {
                        printf("IP address is %s\n", ip[i]);
                        y = 1;
                        break;
                    }
                }
                if (y == 0)
                    printf("Invalid Ethernet address\n");
                break;

            case 3:
                exit(0);
        }
    }

    return 0;
}
