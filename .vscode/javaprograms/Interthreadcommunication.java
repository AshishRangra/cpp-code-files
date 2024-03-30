//  /wait() notify() and notifyall()
// //1st case
// class Mythread4 extends Thread{
//     int total =0;
//     public void run(){
//         for(int i = 0 ; i <= 100 ; i++){
//             total+=i;
//             try {
//                 Thread.sleep(200);
//             } catch (InterruptedException e) {
//                 e.printStackTrace();
//             }
//             System.out.println(total);
//         }
//     }
// }


// public class multi11 {
//     public static void main(String[] args) throws InterruptedException{
//         Mythread4 t = new Mythread4();
//         t.start();

//         Thread.sleep(2000);
//         System.out.println("  total is   "+t.total);// not printing this in sleep

//     }
// }
// [7:14 pm, 11/11/2022] Rohit Chaudhary: //2nd case    join()
// class Mythread5 extends Thread{
//     int total = 0;
//     public void run(){
//         for(int i = 0; i  <=100 ; i++){
//             total+=i;
//         }
//     }
// }

// public class multi12 {
//     public static void main(String[] args) throws InterruptedException {
//         Mythread5 t = new Mythread5();

//      //   t.join();// on writing it first it will not give the desired output

//         t.start();
//         t.join();
//         System.out.println("the sum is : "+t.total);
//     }
// }
// [7:14 pm, 11/11/2022] Rohit Chaudhary: //3rd case
// class Mythread6 extends Thread{
//     int total = 0;
//     public void run(){
//         synchronized (this){
//             System.out.println("child thread starts calling");
//             for(int i = 1; i <=100; i++){
//                 total+=i;
//                 System.out.println("child thread sending the notification");
//                 notifyAll();
//             }
//         }
//     }
// }

// public class multi13 {
//     public static void main(String[] args) throws InterruptedException {
//         Mythread6 t =  new Mythread6();
//         t.start();
//         synchronized (t){
//             System.out.println("main thread trying to call wait ()");
//             t.wait();
//             System.out.println("main thread got updated ");
//             System.out.println(t.total);
//         }
//     }
// }

class Mythread4 extends Thread{
    int total=0;
    public void run(){
        for(int i = 0 ; i <= 10 ; i++){
                        total+=i;
                        try {
                            Thread.sleep(200);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        System.out.println(total);
                    }
                
    }
}
public class Interthreadcommunication {
        public static void main(String[] args) throws InterruptedException{
            Mythread4 t = new Mythread4();
            t.start();
    
            Thread.sleep(2000);
            System.out.println("  total is   "+t.total);// not printing this in sleep
    
        }
    }