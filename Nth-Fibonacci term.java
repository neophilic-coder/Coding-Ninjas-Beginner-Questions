import java.util.* ;

import java.io.*; 

public class Solution{

    static final int MOD = 1000000007;

    public static int fibonacciNumber(int n){

        if(n==0){

            return 0;

        }
        if(n<0){

            return 0;

        }

        else{

            int a = 0;

            int b=1;

            int sum = 0;

            for(int i = 1; i<n ;i++){

                sum=a+b;

                a=b;

                b=sum;

                if(b>=MOD){

                    b-=MOD;

                }

            }

            return b;

        }

    }

}
