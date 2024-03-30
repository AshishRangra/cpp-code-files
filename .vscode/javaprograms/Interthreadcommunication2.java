class Mythread6 extends Thread{
        int total = 0;
        public void run(){
            synchronized (this){
                System.out.println("child thread starts calling");
                for(int i = 1; i <=10; i++){
                    total+=i;
                    System.out.println("child thread sending the notification");
                    notifyAll();
                }
            }
        }
    }
    
    public class Interthreadcommunication2 {
        public static void main(String[] args) throws InterruptedException {
            Mythread6 t =  new Mythread6();
            t.start();
            synchronized (t){
                System.out.println("main thread trying to call wait ()");
                t.wait();
                System.out.println("main thread got updated ");
                System.out.println(t.total);
            }
        }
    }