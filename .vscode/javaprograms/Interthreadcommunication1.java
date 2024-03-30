class Mythread5 extends Thread{
        int total = 0;
        public void run(){
            for(int i = 0; i  <=100 ; i++){
                total+=i;
            }
        }
    }
    
    public class Interthreadcommunication1 {
        public static void main(String[] args) throws InterruptedException {
            Mythread5 t = new Mythread5();
    
         //   t.join();// on writing it first it will not give the desired output
    
            t.start();
            t.join();
            System.out.println("the sum is : "+t.total);
        }
    }