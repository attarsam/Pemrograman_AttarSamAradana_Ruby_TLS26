Tugas Pemrograman TLS 2026

Nama: Attar Sam Aradana

Deskripsi

Repository ini berisi penyelesaian dua soal pemrograman dalam bahasa C++. Kedua program dibuat hanya menggunakan library iostream, tanpa fungsi bawaan dari library lain — semua fungsi pendukung (menghitung panjang string, mengecek genap/ganjil, konversi huruf, dsb.) dibuat sendiri.

Daftar File
File	Deskripsi
konversi_huruf.cpp	Menyandikan pesan dengan menggeser tiap huruf berdasarkan posisi huruf sebelumnya di alfabet.
astronot_terakhir.cpp	Simulasi eliminasi astronot secara berurutan sampai tersisa satu, dengan aturan pergeseran indeks K.
Problem 1: Konversi Huruf

Setiap huruf pada pesan diubah menjadi huruf baru berdasarkan posisi huruf itu sendiri ditambah posisi huruf sebelumnya (A=1, B=2, ..., Z=26). Huruf pertama tidak berubah. Jika hasil penjumlahan melebihi 26, dikurangi 26.

Contoh:

Input : ALIENS
Output: AMUNSG
Problem 2: Astronot Terakhir

Simulasi eliminasi N astronot secara berulang, mengeliminasi astronot bernomor K setiap putaran, dengan K bertambah 2 jika genap atau bertambah 1 jika ganjil, sampai tersisa satu astronot.

Input: nilai N dan K (keduanya bilangan positif) Output: jumlah astronot yang tersisa dan nilai K terakhir

Cara Menjalankan

Kompilasi dan jalankan salah satu file dengan g++:

g++ -o program konversi_huruf.cpp
./program
g++ -o program astronot_terakhir.cpp
./program
