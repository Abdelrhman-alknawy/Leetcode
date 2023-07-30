#include<stdlib.h>
int removeDuplicates(int* nums, int numsSize){
int size = 0;
int *Arr = (int *) malloc(size*sizeof(int));
for(int i = 0 ; i < numsSize ; i ++)
{
    if(i<numsSize-1 && nums[i]==nums[i+1])
    {

    }
    else
    {
        
        Arr =realloc(Arr,++size*sizeof(int));
        Arr[size-1] = nums[i];
    }

}
    for(int i = 0 ; i < size ; i++)
    {
        nums[i]=Arr[i];
    }
    free(Arr);
    return size ;
}