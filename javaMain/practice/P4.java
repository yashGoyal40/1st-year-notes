import java.util.concurrent.atomic.AtomicInteger;

public class P4 {
    public static void main(String[] args) {
        AtomicInteger a = new AtomicInteger(10);
        Thread t = new Thread(() -> {
            a.incrementAndGet();
            try{
                Thread.sleep(2000);
            }
            catch(Exception e){
                e.printStackTrace();
            }
            System.out.println("Thread 1: " +a);
        });
        Thread t1 = new Thread(() -> {
            a.decrementAndGet();
            try{
                Thread.sleep(2000);
            }
            catch(Exception e){
                e.printStackTrace();
                
            }
            System.out.println("Thread 2: " +a);
        });
        t.start();
        t1.start();
    }   
}
