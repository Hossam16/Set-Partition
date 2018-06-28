#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int dif(int S[],int ssize,int S1,int S2){
    if(ssize<0){
        return abs(S1-S2);
    }
    int SumS1=dif(S,ssize-1,S1+S[ssize],S2);
    int SumS2=dif(S,ssize-1,S1,S2+S[ssize]);

    if(SumS1>SumS2)
        return SumS2;
    else
        return SumS1;
}

int main()
{

    int S[]={2,3,3,2};
    int i,ssize=sizeof(S)/sizeof(int);

    printf("The Dif is %d",dif(S,ssize-1,0,0));

    return 0;
}
