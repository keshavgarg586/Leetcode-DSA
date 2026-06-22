class Solution {
public:
    int reverse(int x) {
        int y=x;
        int n=0;
        long int output=0;

        

        while(y!=0)
        
        {
            y=y/10;
            n++;
        }

        while(n!=-1)
        {
           int N=x%10;
            x=x/10;

            output=output+N*pow(10,n-1);

            n--;

        }


        if (output > INT_MAX || output < INT_MIN)
        return 0;


        return output;
    }
};