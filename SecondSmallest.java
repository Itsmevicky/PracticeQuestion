class SecondSmallest{

    public static void print2smallest(int arr[]){
        int first, second, third;
        first = second = third = Integer.MAX_VALUE;

        if(arr.length < 2)
            System.out.println("Array too short!");
    for(int i = 0; i < arr.length; i++){
        if(arr[i] < first){
            third = second;
            second = first;
            first = arr[i];
        }else if(arr[i] < second && arr[i] != first){
            second = arr[i];
        }else if(arr[i] < third && arr[i] != second){
            third = arr[i];
        }
    }
        if(second == Integer.MAX_VALUE){
            System.out.println("Value not found!");
        }
        else{
            System.out.println(first + " " + second + " " + third);
        }
    }


    public static void main(String[] args){
        int[] arr = {23, 4, 6, 2, 1};
        print2smallest(arr);
    }
}
