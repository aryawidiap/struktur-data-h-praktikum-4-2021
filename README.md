# struktur-data-h-praktikum-2-2021

## Distribusi Vaksin

### Verdict

AC saat revisi

#### Bukti

![verdict_dv](img/verdict_dv.jpg)

### Penjelasan Soal

Terdapat V rumah, dengan E jalan yang menghubungkannya, dan Q vaksin yang akan diantar. Input yang diberikan adalah V, E, Q, ruas jalan dan waktu tempuh yang diperlukan sebanyak E baris, dan urutan rumah yang akan dikunjungi sebanyak Q baris.

### Penjelasan Solusi

Solusi untuk permasalahan ini menggunakan graf yang direpresentasikan dengan adjacency list. Kemudian, jalan dengan waktu tempuh tercepat dari rumah pertama ke rumah selanjutnya dicari dengan algoritma Dijkstra. Implementasi algoritma Dijkstra yang digunakan dapat mengembalikan waktu tempuh tersingkat antara satu rumah dengan rumah yang lainnya, sehingga untuk mencari total waktu minimum yang dibutuhkan untuk mencapai semua rumah yang akan diantarkan vaksin adalah penjumlahan dari waktu tempuh tersingkat antara rumah.

### Visualisasi Solusi

Untuk mempermudah visualisasi solusi dari permasalahan Distribusi Vaksin, digunakan sample input berikut:

```c
5 6 5
1 2 6
1 4 12
3 2 8
3 4 4
3 5 10
5 4 16
1
5
2
4
3
```

![dv1](img/si_dv1.JPG)

Semua pointer start di root.

![dv2](img/si_dv2.JPG)

Karena data dari node yang ditunjuk p3 lebih besar dari value, geser p3 ke kiri node. depth + 1.

![dv3](img/si_dv3.JPG)

`p3` belum menunjuk node yang sesuai dan depth > 1, p2 pindah ke p3.

![dv4](img/si_dv4.JPG)

Karena data dari node yang ditunjuk p3 lebih besar dari value, geser p3 ke kiri node.

![dv5](img/si_dv5.JPG)

Node yang ditunjuk p3 memiliki nilai yang dicari, sehingga cetak selisih dari anak-anak node yang ditunjuk p1.

Output:

```c
58
```

## Roy Sang Kurir

### Verdict

WA

#### Bukti

![verdict_rsk](img/verdict_rsk.jpg)

### Penjelasan Soal

Diberikan pasangan angka sejumlah N angka yang merupakan rute pengiriman. Dicari apakah rute tersebut membentuk suatu cycle.

### Penjelasan Solusi

Pertama, masukkan pasangan angka sebagai edge dalam graph. Lalu, lakukan DFS pada graph. Jika saat DFS ditemukan vertex yang sudah dilewati (visited == true), terdapat cycle dalam graph. Jika tidak, tidak terdapat cycle dalam graph.

Dalam fungsi main, pertama diambil N. Kemudian, dibuat graph dengan vertex sebanyak N. Lalu, diambil input untuk X dan Y, dan dimasukkan ke dalam graph sebanyak N kali. Setelah loop selesai uji graph dengan fungsi isCyclic (`g.isCyclic()`). Jika fungsi tersebut mengembalikan nilai `true`, keluarkan `Ada Cycle!`. Jika `false`, keluarkan `Tidak Ada Cycle!`.

### Visualisasi Solusi

Untuk mempermudah visualisasi solusi dari permasalahan Bucyn, digunakan sample input berikut:

```c
5
1 0
0 2
2 1
0 3
3 4
```

![rsk1](img/si_rsk1.JPG)

Masukkan 100 dan 74 (command `Taro`)

![rsk2](img/si_rsk2.JPG)

Mencari nilai tumpukan 100. Karena inorder, dari root ke node kiri terlebih dahulu.

![rsk3](img/si_rsk3.JPG)

Nilai node tidak sesuai dengan yang diminta, sehingga *count + 1. Kanan node tidak ada, kembali ke parent node.

![rsk4](img/si_rsk4.JPG)

Nilai node merupakan yang diinginkan. return, dan program main mencetak `Kasetnya ada di tumpukan ke - 2`

Output:

```c
Ada Cycle!
```

## Sayonara

### Verdict

WA

#### Bukti

![verdict_s](img/verdict_s.jpg)

### Penjelasan Soal

Diberikan suatu papan catur dengan pola seperti berikut:

![verdict_s](img/verdict_s.jpg)

Sebuah bidak dapat bergerak ke arah utara, timur, selatan, barat. Untuk berpindah dari P ke Q, bidak catur harus melangkah secara berurutan dari P ke P+1, P+2, P+3, sampai ke Q. Diminta untuk mengeluarkan seberapa banyak langkah yang dibutuhkan untuk berpindah dari P ke Q beserta arahnya. 

### Penjelasan Solusi

Arah pergerakan maksimal dalam satu arah mengikuti pola 1, 1, 2, 2, 3, 3. (1U, 1T, 2S, 2B, seterusnya). Dengan informasi ini, dibuat loop dengan iterasi maksimalnya adalah sebanyak Q kali, dengan 

### Visualisasi Solusi

Untuk mempermudah visualisasi solusi dari permasalahan Kata-Kata, digunakan sample input berikut:

```c
2
8 14
3 5
```

![s1](img/si_s1.JPG)

Hasil input data pada trie.

![s2](img/si_s2.JPG)

Mencari "dan", dimulai dari node root.

![s3](img/si_s3.JPG)

Cek apakah node root punya child node untuk karakter 'd'. Karena ada, lanjut cek ke karakter berikutnya.

![s4](img/si_s4.JPG)

Cek apakah node 'd' punya child node untuk karakter 'a'. Karena tidak ada, hentikan pencarian dan return false. Karena fungsi main menerima false, print `0`.

![s5](img/si_s5.JPG)

Mencari "soalnya". Tiap karakter dalam kata "soalnya" ditemukan dalam rangkaian node. Terakhir, karakter 'a' merupakan karakter terakhir dari "soalnya" sehingga cek isEndOfWord pada node yang menyimpan karakter 'a'. Karena nilainya true, fungsi search akan mengembalikan nilai true ke fungsi main dan di print `1` melalui fungsi main.

```c
1U -> 3T -> 2S
1S -> 1B
```
