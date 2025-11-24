<?php
echo "Masukkan nama barang: ";
$nama = trim(fgets(STDIN));

echo "Masukkan harga barang: ";
$harga = floatval(trim(fgets(STDIN)));

echo "masukkan jumlah beli: ";
$jumlah = intval(trim(fgets(STDIN)));

$total =$harga * $jumlah;

if ($total > 56000){
    $diskon = $total * 0.06;
} else {
    $diskon = 0.0;
}

$total_bayar = $total - $diskon;

    echo "\n===== STRUK PEMBELIAN =====\n";
    echo  "Nama barang : $nama\n";
    echo "Harga Satuan : $harga\n";
    echo  "Jumlah Beli : $jumlah \n";
    echo  "Total Harga : $total\n";
    echo  "Diskon : $diskon \n";
    echo  "Total bayar : $total_bayar\n";
    echo  "========================\n";
    ?>