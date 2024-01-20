#include <stdio.h>
#include <unistd.h>



void motor_tungkai() {
    printf("3.Motor tungkai berputar 45 derajat.\n");

    usleep(1000000); 
}


void motor_jari() {
    printf("4.Motor jari mendekati objek.\n");

    usleep(1000000); 
}

void proses_pengelasan(int ketebalan, int waktu) {
    printf("Pengelasan dengan ketebalan %d mm, waktu: %d detik.\n", ketebalan, waktu);

    usleep(waktu * 1000000); 
}

void motor_utama() {
    printf("1.Motor utama berputar 180 derajat.\n");
    usleep(1000000); 
}
int main() {

    int ketebalan[] = {6, 12, 24, 30, 36, 42, 49, 50};
    int jumlahKetebalan = sizeof(ketebalan) / sizeof(ketebalan[0]);


    motor_utama();

    for (int i = 0; i < jumlahKetebalan; i++) {

        int nilaiTengah = ketebalan[i] / 2;


        printf("2.Motor utama pindah ke titik nilai tengah %d mm.\n", nilaiTengah);

        usleep(1000000); 


        motor_tungkai();


        motor_jari();


        int waktuPengelasan;
        switch (ketebalan[i]) {
            case 6: waktuPengelasan = 1; break;
            case 12: waktuPengelasan = 2; break;
            case 24: waktuPengelasan = 3; break;
            case 30: waktuPengelasan = 4; break;
            case 36: waktuPengelasan = 5; break;
            case 42: waktuPengelasan = 6; break;
            case 49: waktuPengelasan = 7; break;
            case 50: waktuPengelasan = 8; break;
            default: waktuPengelasan = 0;
        }


        proses_pengelasan(ketebalan[i], waktuPengelasan);

        usleep(1000000);
    }

    return 0;
}
