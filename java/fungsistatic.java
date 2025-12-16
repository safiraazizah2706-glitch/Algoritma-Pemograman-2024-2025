public class fungsistatic {
    static void minum (String minuman){
        System.out.println ("saya minum : "+minuman);
    }

    void makan (String makanan){
        System.out.println ("saya suka makan " + makanan);
    }
    public static void main (String[] args) {
        //memanggil fungsi static
        minum ("jus");

        fungsistatic saya = new fungsistatic ();
        saya.makan ("pizzahut");
    }
}
