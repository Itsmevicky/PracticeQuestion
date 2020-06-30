class SecondLargest{

    public static void print2largest(int arr[]){
        int first , second, arr_size = arr.length;

        first = second = Integer.MIN_VALUE;

        if(arr_size < 2)
            System.out.println("Array is too short!");

        for(int i = 0; i < arr_size; i++){
            if(arr[i] > first){
                second = first;
                first = arr[i];
            }
            else if(arr[i] > second && arr[i] != first){
                second = arr[i];
            }
        }
        if(second == Integer.MIN_VALUE){
            System.out.println("There is no second largest element.");
        }
        else{
            System.out.println("The first largest element = " + first + " and second largest element is " + second);
        }
    }





    public static void main(String[] args){
        int[] arr = {10,34,12,56,23};
        print2largest(arr);
    }
}
