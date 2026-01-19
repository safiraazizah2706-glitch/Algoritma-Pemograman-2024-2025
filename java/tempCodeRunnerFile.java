// Kasir.java
import java.util.Scanner;

public class kasir {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Masukkan nama barang: ");
        String nama = sc.nextLine();
        System.out.print("Masukkan harga barang: ");
        double harga = sc.nextDouble();
        System.out.print("Masukkan jumlah beli: ");
        int jumlah = sc.nextInt();

        double total = harga * jumlah;
        double diskon = 0.0;
        if (total > 56000.0) diskon = total * 0.06;

        double totalBayar = total - diskon;

        System.out.println("\n===== STRUK PEMBELIAN =====");
        System.out.printf("Nama barang   : %s%n", nama);
        System.out.printf("Harga Satuan  : %.2f%n", harga);
        System.out.printf("Jumlah Beli   : %d%n", jumlah);
        System.out.printf("Total Harga   : %.2f%n", total);
        System.out.printf("Diskon        : %.2f%n", diskon);
        System.out.printf("Total bayar   : %.2f%n", totalBayar);
        System.out.println("===========================");
        sc.close();
    }
}