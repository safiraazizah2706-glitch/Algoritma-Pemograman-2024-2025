<?php
function validasiNama($nama) {
    return preg_match("/^[a-zA-Z]+$/", $nama);
}

do {
    echo "Masukkan nama: ";
    $nama = trim(fgets(STDIN));

    if (!validasiNama($nama)) {
        echo "Nama tidak valid, coba lagi!\n";
    }
} while (!validasiNama($nama));

echo "Masukkan NIM: ";
$nim = trim(fgets(STDIN));

$saldo = intval($nim);
echo "\nHalo $nama, saldo kamu Rp " . number_format($saldo, 0, ',', '.') . "\n";

while (true) {
    echo "\n===== MENU ATM =====\n";
    echo "1. Cek Saldo\n";
    echo "2. Tarik Tunai\n";
    echo "3. Setor Tunai\n";
    echo "4. Transfer\n";
    echo "5. Keluar\n";
    echo "Pilih menu: ";
    $pilih = trim(fgets(STDIN));

    switch ($pilih) {
        case 1:
            echo "Saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n";
            break;

        case 2:
            echo "Jumlah tarik: ";
            $tarik = intval(fgets(STDIN));
            if ($tarik <= $saldo) {
                $saldo -= $tarik;
                echo "Penarikan berhasil!\n";
            } else {
                echo "Saldo tidak cukup!\n";
            }
            break;

        case 3:
            echo "Jumlah setor: ";
            $setor = intval(fgets(STDIN));
            $saldo += $setor;
            echo "Setoran berhasil!\n";
            break;

        case 4:
            echo "Rekening tujuan: ";
            $rek = trim(fgets(STDIN));
            echo "Nominal transfer: ";
            $nominal = intval(fgets(STDIN));

            if ($nominal <= $saldo) {
                $saldo -= $nominal;
                echo "Transfer berhasil ke $rek!\n";
            } else {
                echo "Saldo tidak cukup!\n";
            }
            break;

        case 5:
            echo "Terima kasih!\n";
            exit;

        default:
            echo "Menu tidak valid!\n";
    }
}
?>