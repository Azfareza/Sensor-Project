#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Fungsi untuk membaca data dari sensor (simulasi nilai acak)
double readSensorData() {
    return (double)(rand() % 800 + 200) / 10.0;
}

int main() {
    srand(time(NULL));

    while (1) {
        // Membaca data dari sensor
        double sensorData = readSensorData();

        // Simulasi pengiriman data ke server
        printf("Mengirim data ke server: %.2lf\n", sensorData);

        // Menunggu 1 detik sebelum membaca sensor lagi
        sleep(1);
    }

    return 0;
}

