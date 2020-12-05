package lrucache;

import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Deque;

public class LRU {
    int CACHE_SIZE;
    private Deque<Integer> dq;
    private HashSet<Integer> set;

    public LRU(int size) {
        CACHE_SIZE = size;
        dq = new LinkedList<Integer>();
        set = new HashSet<Integer>();
    }

    public void set(int page) {
        if (!set.contains(page)) {
            if (dq.size() == CACHE_SIZE) {
                int last = dq.removeLast();
                set.remove(last);
            }
        } else {
            dq.remove(page);
        }
        dq.addFirst(page);
        set.add(page);
    }

    public void print() {
        Iterator<Integer> itr = dq.iterator();
        while (itr.hasNext()) {
            System.out.print(itr.next() + " ");
        }
    }

    public static void main(String args[]) {
        System.out.println("This is Main method of LRU package.");
    }
}