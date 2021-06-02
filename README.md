# struktur-data-h-praktikum-2-2021

## Distribusi Vaksin

### Verdict

AC saat revisi

#### Bukti

![verdict_dv](img/verdict_dv.jpg)

### Penjelasan Soal

Terdapat V rumah, dengan E jalan yang menghubungkannya, dan Q vaksin yang akan diantar. Input yang diberikan adalah V, E, Q, ruas jalan dan waktu tempuh yang diperlukan sebanyak E baris, dan urutan rumah yang akan dikunjungi sebanyak Q baris.

### Penjelasan Solusi

p

### Visualisasi Solusi

Untuk mempermudah visualisasi solusi dari permasalahan Nadut Belajar, digunakan sample input berikut:

```c
6 1
7 10 21 45 30 29
7
```

![nb1](img/si_nb1.JPG)

Semua pointer start di root.

![nb2](img/si_nb2.JPG)

Karena data dari node yang ditunjuk p3 lebih besar dari value, geser p3 ke kiri node. depth + 1.

![nb3](img/si_nb3.JPG)

`p3` belum menunjuk node yang sesuai dan depth > 1, p2 pindah ke p3.

![nb4](img/si_nb4.JPG)

Karena data dari node yang ditunjuk p3 lebih besar dari value, geser p3 ke kiri node.

![nb5a](img/si_nb5.JPG)

Node yang ditunjuk p3 memiliki nilai yang dicari, sehingga cetak selisih dari anak-anak node yang ditunjuk p1.

Output:

```c
20
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
7
Taro 100
Taro 74
Cari 100
Taro 152
Taro 21
Taro 33
Cari 100
```

![bc1](img/si_bc1.JPG)

Masukkan 100 dan 74 (command `Taro`)

![bc2](img/si_bc2.JPG)

Mencari nilai tumpukan 100. Karena inorder, dari root ke node kiri terlebih dahulu.

![bc3](img/si_bc3.JPG)

Nilai node tidak sesuai dengan yang diminta, sehingga *count + 1. Kanan node tidak ada, kembali ke parent node.

![bc4](img/si_bc4.JPG)

Nilai node merupakan yang diinginkan. return, dan program main mencetak `Kasetnya ada di tumpukan ke - 2`

![bc5](img/si_bc5.JPG)

Masukkan 152, 21, dan 33 (command `Taro`)

![bc6](img/si_bc6.JPG)

Cari 100. Telusur ke kiri dahulu.

![bc7](img/si_bc7.JPG)

Telusur ke kiri lagi.

![bc8](img/si_bc8.JPG)

Nilai node tidak sesuai dengan yang diminta, sehingga *count + 1. Kanan node tidak ada, kembali ke parent node.

![bc9](img/si_bc9.JPG)

Nilai node tidak sesuai dengan yang diminta, sehingga *count + 1. Lanjut ke kanan node.

![bc10](img/si_bc10.JPG)

Nilai node tidak sesuai dengan yang diminta, sehingga *count + 1. Kanan node tidak ada, kembali ke parent dari parent node.

![bc11](img/si_bc11.JPG)

Nilai node merupakan yang diinginkan. return, dan program main mencetak `Kasetnya ada di tumpukan ke - 4`

Output:

```c
Kasetnya ada di tumpukan ke - 2
Kasetnya ada di tumpukan ke - 4
```



### Verdict

WA

#### Bukti

![verdict_cr](img/verdict_cr.jpg)

### Penjelasan Soal

j

### Penjelasan Solusi

j

### Visualisasi Solusi

Untuk mempermudah visualisasi solusi dari permasalahan Part Time, digunakan sample input berikut:

```c
5 5
1 13000
2 5500
3 8750
4 21900
5 30000
4 4
2 3
2 1
1 7
3 2
```

![pt1](img/si_pt1.JPG)

Modifikasi node untuk menyimpan harga.

![pt2](img/si_pt2.JPG)

Masukkan semua input ke dalam tree.

Y = 4, Cari 4. Hasilnya true sehingga lanjutkan operasi dalam loop.

![pt3](img/si_pt3.JPG)

Ambil node yang memiliki ID = 4 dengan fungsi `_search`, simpan pada pointer p.

![pt4](img/si_pt4.JPG)

Lalu, kalikan p->price dengan X, lalu tambahkan ke Z.

![pt5](img/si_pt5.JPG)
![pt6](img/si_pt6.JPG)
![pt7](img/si_pt7.JPG)
![pt8](img/si_pt8.JPG)
![pt9](img/si_pt9.JPG)
![pt10](img/si_pt10.JPG)

Untuk dua input selanjutnya, sama seperti input di atas karena IDnya ada.

![pt11](img/si_pt11.JPG)

Y = 7. Karena tidak ada barang dengan ID 7, keluarkan `Maaf barang tidak tersedia`

![pt12](img/si_pt12.JPG)
![pt13](img/si_pt13.JPG)
![pt14](img/si_pt14.JPG)

Y = 2. Barang dengan ID 2 ada, sehingga harganya ditambahkan ke Z

Terakhir, cetak Z.

Output:

```c
Maaf barang tidak tersedia
147600
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
3
soalnya
mudah
dipahami
3
dan
soalnya
singkat
```

![kk1](img/si_kk1.JPG)

Hasil input data pada trie.

![kk2a](img/si_kk2a.JPG)

Mencari "dan", dimulai dari node root.

![kk2b](img/si_kk2b.JPG)

Cek apakah node root punya child node untuk karakter 'd'. Karena ada, lanjut cek ke karakter berikutnya.

![kk2c](img/si_kk2c.JPG)

Cek apakah node 'd' punya child node untuk karakter 'a'. Karena tidak ada, hentikan pencarian dan return false. Karena fungsi main menerima false, print `0`.

![kk3](img/si_kk3.gif)

Mencari "soalnya". Tiap karakter dalam kata "soalnya" ditemukan dalam rangkaian node. Terakhir, karakter 'a' merupakan karakter terakhir dari "soalnya" sehingga cek isEndOfWord pada node yang menyimpan karakter 'a'. Karena nilainya true, fungsi search akan mengembalikan nilai true ke fungsi main dan di print `1` melalui fungsi main.

![kk4a](img/si_kk4a.JPG)
![kk4b](img/si_kk4b.JPG)
![kk4c](img/si_kk4c.JPG)

Mencari "singkat". Mirip dengan pencarian "dan", pencarian berhenti di karakter kedua ('i') karena tidak terdapat node children yang melambangkan karakter tersebut. Dengan demikian, dikembalikan nilai false dan fungsi main melakukan print `0`.

Output:

```c
0
1
0
```

