package com.go.ndk.demoproject.algorithm;

/**
 * Created by go on 2018/1/16.
 */

public class QuickSor {






    public static void recurPartiton(int[] arr, int start, int end){
//递归调用的结束条件,开始要拆分的数组就剩下一个元素的时候
        if(end-start<1)
            return;
        int part = partArr(arr, start, end);
        //三种情况下的继续拆分
        if(part==start)
            recurPartiton(arr,part+1,end);
        else if(part ==end)
            recurPartiton(arr,start,end-1);
        else{
            recurPartiton(arr,start,part-1);
            recurPartiton(arr,part+1,end);
        }

    }


    public static int partArr(int[] arr, int start, int end){


        int base = arr[end]; //基准


        int n = start;

        for(int i = start; i < end; i++){

            if (arr[i] < base){

                if (i != n){
                    exChange(arr, i, n);
                }
                n++;
            }
        }

        exChange(arr, n, end);
        return n;

    }

    private static void exChange(int[] array, int index1, int index2) {
        int temp = array[index1];
        array[index1] = array[index2];
        array[index2] = temp;

    }
}
