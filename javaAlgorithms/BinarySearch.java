import java.util.Arrays;

public class BinarySearch {
    public static int binarySearch(int[] arr, int target) {
        int left = 0, right = arr.length - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                return mid; //hedef bulundu
            }
            if (arr[mid] < target) {
                left = mid + 1; //hedef daha sagda
            }
	    else {
                right = mid - 1; //hedef daha solda
            }
        }
        return -1; //hedef bulunamadi
    }

    public static void main(String[] args) {
        int[] arr = {2, 3, 4, 10, 40};
        int target = 10;
        Arrays.sort(arr); //binary search icin dizi sıralı olmalı
        int result = binarySearch(arr, target);
        if (result != -1) {
            System.out.println("Eleman bulundu, indeksi: " + result);
        }
	else {
            System.out.println("Eleman bulunamadı");
        }
    }
}
