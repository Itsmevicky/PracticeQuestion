class BinarySearch{
    public static void search(int[] arr, int num){
        int mid;
        int l = 0;
        int r = arr.length - 1;
        while(l <= r){
            mid = l + (r - l) / 2;
            if(arr[mid]==num)
                System.out.println(num);
            if(arr[mid]<num)
                l  = mid + 1;
            else
                r = mid - 1;
        }
        System.out.println("Not found!");
    }

    public static void print(int[] arr){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args){
        int[] arr = {2,3,5,6,7,8};
       // print(arr);
        search(arr,7);
        search(arr, 10);
    }
}
