// class Solution {
// public:
//     double myPow(double x, int n) {
//         double res=1;  
//         if(x==1)return res;
        
//         else if(n>0){
//             for(int i=0;i<n;i++){
//              res*=x;
//             }    
//         }
        
//         else{      
//             for(int i=0;i<abs(n);i++){
//                 res/=x;
//             }
        
//         }       
//         return res;
//     }
// };

class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0){
            return 1;
        }
        if (n < 0) { 
            n = abs(n);
            x = 1/x;
        }
        if(n%2==0){
            return myPow(x*x,n/2);
        
        }else{
            return x*myPow(x*x,n/2);
        }
    }
};