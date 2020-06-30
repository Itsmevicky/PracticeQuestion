class RightRotateArray{

    void rightRotate(int arr[], int d, int n){
        for(int i = 0; i < d; i++){
            int temp, j;
            temp = arr[n-1];
            for (j = n - 1; j > 0; j--) {
                arr[j] = arr[j-1];
            }
            arr[j] = temp;
        }
    }

    void print(int arr[]){
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
    }




    public static void main(String[] args) {
        RightRotateArray rotate = new RightRotateArray();
        int arr[] = {1,2,3,4,5,6,7,8,9};
        rotate.rightRotate(arr, 2, 9);
        rotate.print(arr);
    }
}
