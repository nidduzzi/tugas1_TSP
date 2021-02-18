# Jawaban

Ahmad Izzuddin 1908919  
Aldiandya Irsyad 1904100  

## [Kasus 1](https://github.com/nidduzzi/tugas1_TSP/commit/a47840f861bebdfac237d296f4a09a8152a5992e)

Di kasus 1 simulasi berhenti ketika waktu simulasi mencapai 2 jam.  
Outputnya adalah sebagai berikut:  

        Single-server queueing system

        Mean interarrival time      1.000 minutes

        Mean service time           0.500 minutes

        Number of customers          1000



        Average delay in queue      0.383 minutes

        Average number in queue     0.375

        Server utilization          0.445

        Time simulation ended     122.394 minutes

## [Kasus 2](https://github.com/nidduzzi/tugas1_TSP/commit/7b56b4e09a87ac502ae3625aed898bb73fa7f6ec)

Di kasus 2 simulasi berhenti ketika pelanggan yang datang sebelum jam 17:00, 8 jam setelah jam 9:00, telah dilayani.  
Outputnya adalah sebagai berikut:  

        Single-server queueing system

        Mean interarrival time      1.000 minutes

        Mean service time           0.500 minutes

        Number of customers          1000



        Average delay in queue      0.399 minutes

        Average number in queue     0.394

        Server utilization          0.464

        Time simulation ended     480.158 minutes

Dengan setting `Mean interarrival time` 1 menit dan `Mean service time` 0.5 menit, dapat dilihat bahwa `Average number in queue` hanya bernilai 0.394.  
Ini jauh lebih kecil daripada nilai `Mean interarrival time`. Ini berarti tidak banyak costumer yang harus menunggu di antrian. Sehingga, meskipun layanan tetap  
jalan setelah jam 17:00 untuk costumer yang sudah mengantri sebelum waktu tersbut, simulasi tetap berhenti tidak lama dari jam 17:00.

## [Kasus 3](https://github.com/nidduzzi/tugas1_TSP/commit/9ccf5ddf478e88cfefe22ca14592175a562069e7)

Di kasus 3, panjang antrian maksimum adalah 2 dan ketika sudah penuh costumer yang baru datang akan pergi "Balking". Waktu maksimum simulasinya adalah 10 menit.  
Outputnya adalah sebagai berikut:  

        Single-server queueing system

        Mean interarrival time      1.000 minutes

        Mean service time           0.500 minutes

        Number of customers          1000



        Average delay in queue      0.169 minutes

        Average number in queue     0.181

        Server utilization          0.360

        Number of costumers that balked 0

        Time simulation ended      13.126 minutes

Dengan setting `Mean interarrival time` 1 menit dan `Mean service time` 0.5 menit, dapat dilihat bahwa `Average number in queue` hanya bernilai 0.181.  
Nilai ini lebih kecil daripada panjang maksimu antrian, sehingga pada rata rata antrian tidak melebihi batasnya, sehingga costumer yang pergi tanpa dilayani  
sangat sedikit dan dalam kasus ini adalah 0. Namun jika `Mean interarrival time` diubah menjadi lebih kecil, dapat dilihat bahwa `Average number in queue`  
membesar nilainya, sehingga terdapat costumer yang "balking" seperti pada [hasil berikut](https://github.com/nidduzzi/tugas1_TSP/commit/bdd0172b081ea9213f87c7781fbc6427d51980b8):

        Single-server queueing system

        Mean interarrival time      0.800 minutes

        Mean service time           0.500 minutes

        Number of customers          1000



        Average delay in queue      0.424 minutes

        Average number in queue     0.588

        Server utilization          0.787

        Number of costumers that balked 1

        Time simulation ended      10.096 minutes
