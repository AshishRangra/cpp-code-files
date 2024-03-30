class Ashish{
    public void wish(String name){

        synchronized(this){
        System.out.println("HEllo");
        System.out.println("world");
        for(int i=0;i<4;i++){
            System.out.println("Good Morning");

        
        try{
            Thread.sleep(222);

        }
        catch(Exception e){
            e.printStackTrace();
                System.out.println("Thread interrupted");
        }
            System.out.println(name);
    }}}
}
class Mythread extends Thread{
    Ashish d;
    String name;
    Mythread(Ashish d,String name){
        this.d=d;
        this.name=name;
    }
    public void run(){
        d.wish(name);
    }
}
public class synchronization{
    public static void main(String[] args){
        Ashish d=new Ashish();
        Mythread obj1=new Mythread(d,"Dhoni");
        Mythread obj2=new Mythread(d,"Kohli");
        
        obj1.start();
        obj2.start();
    }
}