class Table{
// synchronized void print(int n){
   void print(int n){
    // synchronized(this){
    for(int i=1;i<5;i++){
        System.out.println(n*i);
        try{
            // Thread.sleep(1000);

        }
        catch(Exception e){
            System.out.println(e);
    }
    }
}}
// }

class Mythread extends Thread{
    Table t;
    Mythread(Table t){
        this.t=t;
    }
    public void run(){
        t.print(5);
    }
}
class Mythread1 extends Thread{
    Table t;
    Mythread1(Table t){
        this.t=t;
    }
    public void run(){
        t.print(100);

    }
}
class synchronizationmethod{
    public static void main(String[] args){
        Table obj=new Table();
        Mythread obj1=new Mythread(obj);
        Mythread1 obj2=new Mythread1(obj);
        obj1.start();
        obj2.start();
    }
}