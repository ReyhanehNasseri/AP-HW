#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{   
    float a;
    int az;
    int azz;
    float azzz;
    long long r[100];
    for(int j = 0 ; j<100 ; j++){
        r[j]=0;
    }
    for( long long i = 1 ; i<=60000000 ; i++)
    {
       
         az=(rand())%100;
         azzz= float(az) / 100;
         azz=azzz*100;
        
        r[azz]++ ;
    }

    for(int s = 0 ; s < 100 ; s++)
    {
        float sz = float(s) / 100;
        cout << sz << ": " << r[s] << endl;
    } 


    return 0;
}