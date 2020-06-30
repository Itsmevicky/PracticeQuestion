class RotateArray{

    void leftRotate(int arr[], int d, int n){
        for(int i = 0; i < d; i++){
            int temp, j;
            temp = arr[0];
            for(j = 0; j < n-1; j++){
                arr[j] = arr[j+1];
            }
            arr[j] = temp;
        }
    }
    void print(int arr[], int n){
        for(int i = 0; i < n; i++){
            System.out.print(arr[i]+ " ");
        }
    }
    public static void main(String[] args){
        RotateArray rotate = new RotateArray();
        int arr[] = {1,2,3,4,5,6,7,8,9};
        rotate.leftRotate(arr, 5, 7);
        rotate.print(arr, 7);
    }
}