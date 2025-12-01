import java.util.Scanner;

public class ATM {
    
    public static boolean validasiNama(String nama) {
        return nama.matches("[a-zA-Z]+");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nama;

        do {
            System.out.print("Masukkan nama: ");
            nama = sc.nextLine();
            if (!validasiNama(nama)) {
                System.out.println("Nama tidak valid, coba lagi!");
            }
        } while (!validasiNama(nama));

        System.out.print("Masukkan NIM: ");
        String nim = sc.nextLine();
        long saldo = Long.parseLong(nim);

        System.out.println("\nHalo " + nama + ", saldo kamu Rp " + saldo);

        while (true) {
            System.out.println("\n===== MENU ATM =====");
            System.out.println("1. Cek Saldo");
            System.out.println("2. Tarik Tunai");
            System.out.println("3. Setor Tunai");
            System.out.println("4. Transfer");
            System.out.println("5. Keluar");
            System.out.print("Pilih menu: ");
            int pilih = sc.nextInt();

            switch (pilih) {
                case 1:
                    System.out.println("Saldo: Rp " + saldo);
                    break;

                case 2:
                    System.out.print("Jumlah tarik: ");
                    long tarik = sc.nextLong();
                    if (tarik <= saldo) saldo -= tarik;
                    else System.out.println("Saldo tidak cukup!");
                    break;

                case 3:
                    System.out.print("Jumlah setor: ");
                    long setor = sc.nextLong();
                    saldo += setor;
                    break;

                case 4:
                    sc.nextLine(); 
                    System.out.print("Rekening tujuan: ");
                    String rek = sc.nextLine();
                    System.out.print("Nominal transfer: ");
                    long nominal = sc.nextLong();

                    if (nominal <= saldo) saldo -= nominal;
                    else System.out.println("Saldo tidak cukup!");
                    break;

                case 5:
                    System.out.println("Terima kasih!");
                    return;

                default:
                    System.out.println("Menu tidak valid!");
            }
        }
    }
}