import java.util.Arrays;
class KthElement{

    public static int kthelement(int arr[], int index){
        Arrays.sort(arr);

        return arr[index - 1];
    }
    
    public static void main(String[] args){
        int[] arr ={2,4,5,7,1};

        int result = kthelement(arr, 3);
        System.out.println(result);
    }
}
