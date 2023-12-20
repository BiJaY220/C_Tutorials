
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int dec , bin, rbin;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    bin = 0;
    while(dec > 0)// 13
    {
        rbin = dec % 2;// 13%2 = 1->1
        bin = bin * 10 + rbin;// bin->1011
        dec /= 2;//dec = dec/2
    } 
    int binary =0;
    while(bin > 0)
    {
        rbin = bin % 10;
       binary = binary*10+rbin;// 1101
        bin = bin / 10;
    } // pallindrom - >
    printf("%d", binary);  
    printf("\n"); //logic bin-> dec 1*2^0+0*2^1+1*2^2+1*2^3 = 13
    dec=0;
    int pow = 0;
    while(binary>0){
        rbin = binary % 10;
        dec = dec+rbin*pow(2,i);// 1101
        binary = binary/10;//pow(2,i)
        pow = pow*2;
    }
    printf("%d", dec);
   
}
