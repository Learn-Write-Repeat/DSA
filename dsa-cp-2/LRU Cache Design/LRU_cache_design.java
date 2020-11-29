import lrucache.LRU;
import java.util.Scanner;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Deque;

class LRU_cache_design {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        LRU lru;
        System.out.print("Enter the size of LRU Cache : ");
        int size = sc.nextInt();
        lru = new LRU(size);
        int exit = 1;
        do {
            System.out.println("_________Menu_________");
            System.out.println("1. Add page into cache ");
            System.out.println("2. Exit ");
            System.out.print("Enter option (1 or 2) : ");
            exit = sc.nextInt();
            if (exit == 1) {
                System.out.print("Enter the page number : ");
                int page = sc.nextInt();
                lru.set(page);
                System.out.print("After adding page into cache it look like : ");
                lru.print();
            }
            System.out.println();
        } while (exit != 2);
        sc.close();
    }
}