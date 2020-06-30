
class StackProgram{

    final int MAX = 100;
    int[] data = new int[MAX];
    int top = -1;

    //push
    public void push(final int num){
       if(top < MAX-1){
        data[++top] = num;
        System.out.println("Data inserted.");
       }else{
           System.out.println("Stack is full!");
       }
    }
//isEmpty function to check if stack is empty
    public boolean isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    } 
//isFull to check if stack is full

    public boolean isFull(){
        if( top == MAX-1)
            return true;
        else
            return false;
    }
    //pop
    public int pop(){
        final int num = data[top--];
        return num;
    }

    //peek
    public int peek(){
        final int num = data[top];
        return num;
    }

    public static void main(final String[] args){
        StackProgram stack = new StackProgram();
        stack.push(1);
        stack.push(4);
        stack.push(5);
        System.out.println(stack.pop());
        System.out.println(stack.pop());
        if(!stack.isEmpty())
            System.out.println("Stack still have some data.");
    }
}
