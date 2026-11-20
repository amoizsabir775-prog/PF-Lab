#include <stdio.h>

const int TOLL_RATE = 50;

void processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static long long totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("Processed %-12s   %d  Revenue : %d PKR\n",
           vehicleType, totalVehicles, totalRevenue);
}

int main() {
    processVehicle("Car");
    processVehicle("Motorcycle");
    processVehicle("Truck");
    processVehicle("Bus");

    printf("Final Toll Plaza Collection Report \n");
    printf("Toll Rate per Vehicle: %d PKR\n", TOLL_RATE);
    processVehicle("Van");

    return 0;
}
