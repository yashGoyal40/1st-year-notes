public class Multithread{
    public static void main(String[] args) {
        Thread thread1 = new Thread(() -> {
            System.out.println("Thread 1");
            try{
                Thread.sleep(2000);
            }
            catch(Exception e){
                System.out.println(e);
            }
            System.out.println("thread 1 closed");
        });
        

        Thread thread2 = new Thread(() -> {
            System.out.println("Thread 2");
            try{
                Thread.sleep(2000);
            }
            catch(Exception e){
                System.out.println(e);
            }
            System.out.println("thread 2 closed");
        });

        thread1.start();
        thread2.start();
    }
}