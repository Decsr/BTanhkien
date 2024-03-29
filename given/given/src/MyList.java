/* This program contains 2 parts: (1) and (2)
   YOUR TASK IS TO COMPLETE THE PART  (2)  ONLY
 */
//(1)==============================================================
import java.util.*;
import java.io.*;

public class MyList {

    Node head, tail;

    MyList() {
        head = tail = null;
    }

    boolean isEmpty() {
        return (head == null);
    }

    void clear() {
        head = tail = null;
    }

    void fvisit(Node p, RandomAccessFile f) throws Exception {
        if (p != null) {
            f.writeBytes(p.info + " ");
        }
    }

    void ftraverse(RandomAccessFile f) throws Exception {
        Node p = head;
        while (p != null) {
            fvisit(p, f); // You will use this statement to write information of the node p to the file
            p = p.next;
        }
        f.writeBytes("\r\n");
    }

    void loadData(int k) { //do not edit this function
        String[] a = Lib.readLineToStrArray("data.txt", k);
        int[] b = Lib.readLineToIntArray("data.txt", k + 1);
        int[] c = Lib.readLineToIntArray("data.txt", k + 2);
        int n = a.length;
        for (int i = 0; i < n; i++) {
            addLast(a[i], b[i], c[i]);
        }
    }

//===========================================================================
//(2)===YOU CAN EDIT OR EVEN ADD NEW FUNCTIONS IN THE FOLLOWING PART=========
//===========================================================================
//===========================================================================
/* 
   Khong su dung tieng Viet co dau de viet ghi chu.
   Neu dung khi chay truc tiep se bao loi va nhan 0 diem
*/
    void addLast(String xSource, int xPrice, int xType) {
        //You should write here appropriate statements to complete this function.
        
        
        
        
        //----------------------------------------------------------------------
    }

    void addFirst(String xSource, int xPrice, int xType) {
        //You should write here appropriate statements to complete this function.
        
        
        
        
        
        //----------------------------------------------------------------------
    }
    
    //f2
    public void insert(Node y, int k) {
        //You should write here appropriate statements to complete this function.
        
       
        
        
        //----------------------------------------------------------------------
    }
    

    //f3
    public void removeNodeAtPosition(int position) {
        //You should write here appropriate statements to complete this function.
       
        
        
        //----------------------------------------------------------------------
    }
 
    //f4
    

    void sortFull() {//sort full
        Node i = head;
        Node j = null;
        Watermelon tmp;
        while (i != null) {
            j = i.next;
            while (j != null) {
                if (i.info.price > j.info.price) {
                    tmp = i.info;
                    i.info = j.info;
                    j.info = tmp;
                }
                j = j.next;
            }
            i = i.next;
        }
    }

    //f5
    public void deleteLast() {
        //You should write here appropriate statements to complete this function.
        
        

        //----------------------------------------------------------------------
    }
    //f6
    public void deleteFirst() {
        //You should write here appropriate statements to complete this function.
        
        
        //----------------------------------------------------------------------
    }
  

    void f1() throws Exception {
        clear();
        loadData(1);
        String fname = "f1.txt";
        File g123 = new File(fname);
        if (g123.exists()) {
            g123.delete();
        }
        RandomAccessFile f = new RandomAccessFile(fname, "rw");
        ftraverse(f);
        f.close();
    }

    //==================================================================
    void f2() throws Exception {
        clear();
        loadData(5);
        String fname = "f2.txt";
        File g123 = new File(fname);
        if (g123.exists()) {
            g123.delete();
        }
        RandomAccessFile f = new RandomAccessFile(fname, "rw");
        ftraverse(f);
        Watermelon g;
        Watermelon h;
        g = new Watermelon("G", 2, 3);
        h = new Watermelon("H", 5, 6);
        Node x = new Node(g);
        Node y = new Node(h);
        //------------------------------------------------------------------------------------
        /*You must keep statements pre-given in this function.
          Your task is to insert statements here, just after this comment,
          to complete the question in the exam paper.*/



        
        
        //------------------------------------------------------------------------------------
        ftraverse(f);
        f.close();
    }

    //==================================================================
    void f3() throws Exception {
        clear();
        loadData(9);
        String fname = "f3.txt";
        File g123 = new File(fname);
        if (g123.exists()) {
            g123.delete();
        }
        RandomAccessFile f = new RandomAccessFile(fname, "rw");
        ftraverse(f);
        //------------------------------------------------------------------------------------
        /*You must keep statements pre-given in this function.
        Your task is to insert statements here, just after this comment,
        to complete the question in the exam paper.*/

        
        
        
        //------------------------------------------------------------------------------------
        ftraverse(f);
        f.close();
    }

    //==================================================================
    void f4() throws Exception {
        clear();
        loadData(13);
        String fname = "f4.txt";
        File g123 = new File(fname);
        if (g123.exists()) {
            g123.delete();
        }
        RandomAccessFile f = new RandomAccessFile(fname, "rw");
        ftraverse(f);
        //------------------------------------------------------------------------------------
        /*You must keep statements pre-given in this function.
           Your task is to insert statements here, just after this comment,
           to complete the question in the exam paper.*/

        
        

        //------------------------------------------------------------------------------------
        ftraverse(f);
        f.close();
    }

    //==================================================================
    void f5() throws Exception {
        clear();
        loadData(17);
        String fname = "f5.txt";
        File g123 = new File(fname);
        if (g123.exists()) {
            g123.delete();
        }
        RandomAccessFile f = new RandomAccessFile(fname, "rw");
        ftraverse(f);
        //------------------------------------------------------------------------------------
        /*You must keep statements pre-given in this function.
           Your task is to insert statements here, just after this comment,
           to complete the question in the exam paper.*/


        
        //------------------------------------------------------------------------------------
        ftraverse(f);
        f.close();
    }
    //==================================================================
    void f6() throws Exception {
        clear();
        loadData(21);
        String fname = "f6.txt";
        File g123 = new File(fname);
        if (g123.exists()) {
            g123.delete();
        }
        RandomAccessFile f = new RandomAccessFile(fname, "rw");
        ftraverse(f);
        //------------------------------------------------------------------------------------
        /*You must keep statements pre-given in this function.
           Your task is to insert statements here, just after this comment,
           to complete the question in the exam paper.*/


        
        
        //------------------------------------------------------------------------------------
        ftraverse(f);
        f.close();
    }
}
