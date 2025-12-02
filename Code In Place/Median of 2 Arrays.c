double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size)
{
    if (nums1Size > nums2Size)
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);

    int m = nums1Size, n = nums2Size;
    int leftTotal = (m + n + 1) / 2;
    int low = 0, high = m;

    while (low <= high)
	{
        int i = (low + high) / 2;
        int j = leftTotal - i;

        int left1  = (i > 0) ? nums1[i - 1] : INT_MIN;
        int right1 = (i < m) ? nums1[i]     : INT_MAX;
        int left2  = (j > 0) ? nums2[j - 1] : INT_MIN;
        int right2 = (j < n) ? nums2[j]     : INT_MAX;

        if (left1 <= right2 && left2 <= right1)
		{
            if ((m + n) % 2 == 1)
                return (double)(left1 > left2 ? left1 : left2);
            int maxLeft = left1 > left2 ? left1 : left2;
            
            int minRight = right1 < right2 ? right1 : right2;
            
            return ((double)maxLeft + (double)minRight) / 2.0;
        }
		else if (left1 > right2)
		{
            high = i - 1;
        }
		else
		{
            low = i + 1;
        }
    }
    return 0.0;
}
