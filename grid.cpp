#include<iostream>
using namespace std;

int main()
{
 int rows,cols;
 cin>>rows>>cols;

 int mat[100][100];

 for(int i=0;i<rows;i++)
 {
     for(int j=0;j<cols;j++)
     {
         cin>>mat[i][j];
     }
 }

int result =0;
int count1 = 0;
int row = 0;
int arr[100];

   for(int i=0;i<rows;i++)
   {
       count1 = 0;
       for(int j=0;j<cols;j++)
       {
           if(mat[i][j]==0)
             continue;
            else
            {
                  count1++;
            }
      
       
       }
       arr[i]= count1;
       
   } 
   
   int sum = 0;
   
   for(int i=0;i<rows-1;i++)
   {
       if(arr[i]==0)
       continue;
       else
       {
           for(int j=i+1;j<rows;j++)
            {
                 if(arr[j]==0)
                continue;
                else
                {
                   
                    sum = sum+arr[i]*arr[j];
                    
                    break;
                 }
            
     }
       }
       
     
   }
   cout<<sum<<endl;







 return 0;
}
