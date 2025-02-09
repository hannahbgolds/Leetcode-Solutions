void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = 0; 
    int j = 0; 
    int aux; 

    while (j < n) {  // Iterate through nums2
        while (i < m + j && nums2[j] > nums1[i]) { 
            i++; 
        }

        // Shift to the right 
        int z = m + j;  
        while (z > i) {  
            nums1[z] = nums1[z - 1];  
            z--;
        }

        nums1[i] = nums2[j]; 
        j++; 
    }
}

int main (void) { 
    int nums1[6] = {1, 2, 3, 0, 0, 0}; 
    int nums2[3] = {2, 5, 6}; 
    merge(nums1, 6, 3, nums2, 3, 3); 
    return 0;
}