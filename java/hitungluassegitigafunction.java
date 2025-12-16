public class hitungluassegitigafunction {
    public static void main (String[] args) {
        double a = 2.0;
        double t = 3.0;
            System.out.println ("alas : "+a+ " cm "+"tinggi : "+t+ " cm");
            System.out.println ("luas Segitiga : alas x tinggi / 2");
            System.out.println ("Luas Segitiga : "+luassegitiga(a,t)+" cm2");
        
    }
    static double luassegitiga (double a, double t){
            double L ;
            L = a*t/2;
            return L;
    }
    
}
