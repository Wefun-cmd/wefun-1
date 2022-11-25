int GetNumberOfK(int* data, int dataLen, int k ) {
    int count=0;
    for(int i=0;i<dataLen;i++)
    {
        if(data[i]==k)
            count++;
    }
    return count;
}
int get_bin(int n)
{
    int count=0;
    for(int i=0;i<32;i++)
    {
        if((n>>i)&1)
        {
            count++;
        }
    }
    return count;
}
int convertInteger(int A, int B){
   return get_bin(A^B);
}

if(numsSize<=1)
        return 0;
    else
    {
        int tmp=nums[0];
        for(int i=1;i<numsSize;i++)
        {
            if(tmp<nums[i])
             tmp=nums[i];
        }
        int location=0;
        for(int j=0;j<numsSize;j++)
        {
            if(nums[j]==tmp)
                location=j;
        }
        int count=0;
        for(int k=0;k<numsSize;k++)
        {
            while(nums[k]!=tmp)
            {
                if(tmp>2*nums[k])
                    count++;
            }
        }
        if(count==(numsSize-1))
            return location;
        else
            return -1;
    }//超出时间限制
    
    int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    static int arr[1000];
    *returnSize=0;
    int i,j,k;
    for(i=0;i<nums1Size;i++)
    {
        for(j=0;j<nums2Size;j++)
        {
            if(nums2[j]==nums1[i])
                break;
        }
        if(j==nums2Size)
        {
            continue;
        }
        for(j=0;j<*returnSize;j++)
        {
            if(nums1[i]==arr[j])
                break;
        }
        if(j==*returnSize)
        {
            arr[*returnSize]=nums1[i];
            *returnSize+=1;
        }
    }
    return arr;
}
