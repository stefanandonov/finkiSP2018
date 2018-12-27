#include<stdio.h>
#include<math.h>

int sum_array(int a[], int num_elements)
{
   int i, sum=0;
   for (i=0; i<num_elements; i++)
   {
	 sum = sum + abs(a[i]);
   }
   return(sum);
}
void print_array(int a[], int num_elements)
{
   int i;
   for(i=0; i<num_elements; i++)
   {
	 printf("%d ", a[i]);
   }
   printf("\n");
}
int main () {
	
	int matrica[100][100],novaMatrica[100][100],i,j,m,n,sum=0;
	
	scanf("%d %d", &m, &n);
	
	for (i=0;i<m;i++)
		for (j=0;j<n;j++)
			scanf("%d", &matrica[i][j]);
		
	
	
	for (i=0;i<m;i++){
		for (j=0;j<n;j++) {
            int array[100];
			if (matrica[i][j]>0) {
                for (int k=0;k<m;k++)
                    array[k]=matrica[k][j];
				novaMatrica[i][j]=sum_array(array,m);
			}
			else if (matrica[i][j]<0) {
                for (int k=0;k<n;k++)
                    array[k]=matrica[i][k];
				novaMatrica[i][j]=sum_array(array,n);
			}
			else {
				novaMatrica[i][j]=matrica[i][j];
			}
            
		}		
	}
    
    
	
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
			printf("%d ", novaMatrica[i][j]);
        }
        printf("\n");
    }
	
	return 0;
}