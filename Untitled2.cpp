#include<stdio.h>   
#include<stdlib.h>   
   
   
int mastris[5][5]={ 0,1,0,0,0,
					0,1,0,0,0,
					0,0,0,0,0,
					0,0,0,0,0 };

	
   
   
   

void check(int i, int j, int k, int m)
{
     if(  ( abs(i-k)==1 || i==k ) && ( abs(j-m)==1 || j==m ) )	 //capraz
	    printf("komsular");
	else
	  printf("komsu degiller");
}




int main()
{
	
check(0,1,1,3);	
	
	
	
}
		
