class Stack{
    int top;
    int size;
    int[]  a;
    
    Stack(int size){
        top = -1;
        this.size = size;
        a = new int[this.size];
    }

    

    public void push(int n){
        if(top >= this.size-1){
            System.out.println("Stack Overflow");
        }else{
            top = top+1;
            a[top] = n;
        }
    }


    public int pop(){
        int num = -1;
        if(top == -1){
            System.out.println("Stack Underflow");
        }else{
            num = a[top];
            top = top-1;
        }

        return num;
    }

    public void display(){
        for(int i=top;i>-1;i--){
            System.out.println(a[i]);
        }
    }


}


public class stack{
    public static void main(String[] args) {
        Stack s1 = new Stack(10);

        s1.push(1);
        s1.push(2);
        s1.push(3);
        s1.push(4);
        s1.push(5);
        s1.push(6);
        s1.push(7);
        s1.push(8);
        s1.push(9);
         s1.push(10);

         s1.display();
        // s1.push(11);
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());
        System.out.println("Popped Element : "+ s1.pop());

        System.out.println("New List : ");

        s1.display();

    }
}