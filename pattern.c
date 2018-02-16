/*
N=5
Output
1
3*2
4*5*6
10*9*8*7
11*12*13*14*15

*/

#include <stdio.h>

int main() {
	//code
	static int x=0;
	int i,j;
	int n;
	int arr[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    if(i%2==0)
	    {
	       
	       for(j=0;j<2*i+1;j++)
	       {
	           if(j%2==0)
	           {
	             x++;  
	           printf("%d ",x);
	           
	           }
	           else
	           printf("* ");
	       }
	    }
	    else
	    {
	        int t;
	    t=x+i+1;
	    x=x+i+1;
	    for(j=2*i;j>=0;j--)
	    {
	    
	    
	        
	             if(j%2==0)
	           {
	               
	           printf("%d ",t);
	           t--;
	           }
	           else
	           printf("* ");
	            
	        }
	    }
	    printf("\n");
	}
	
	
	
	
	
	return 0;
}
