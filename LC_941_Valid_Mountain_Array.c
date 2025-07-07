/*
The Goal of this function is find if the given array is increasing constantly and
decreasing the same way(ie.constantly).
For Example 
If Array a = [1,2,3,4,5,4,3,2,1]
THe function returns True saying that it is a Mountain Array
*/

/*
This is done by iterating the array with Two Pointers i,j.
i is started from 0 and j is started from the end of the array.
The condition used checks if arr[i]<arr[i+1] showing that it is constantly increasing.
for the other pointer arr[j-1]>arr[j] showing that it is decreasing. 
*/


bool validMountainArray(int* arr, int arrSize)
{
    // This is used as the constraint is that the arrSize should be greater than
    // 3 and if so it should return false.
    if(arrSize<3)
    {
        return false;
    }

    // Initialization of the variable i and j.
    int i = 0;int j = arrSize-1;

    //First while is for i .
    while(i<arrSize-1 && arr[i]<arr[i+1])
    {
        i++;
    }

    //Second while is for  j
    while(j>=1 && arr[j-1]>arr[j])
   {
        j--;
   } 
   
   // The return condition returns true or false by returning i and j
   // at the peak and it also checks the value of i and j .
   // THe check for i and j is done because the peaks can't be in the start of the 
   // array .
   return (i==j && i<arrSize-1 && j>0 );
    

}
// @lc code=end

