void moveZeroes(int* nums, int numsSize){

    int num = 0;
    
    for (int i = 0; i < numsSize; i++) {
        
        if (nums[i] != 0) {
            nums[num] = nums[i];   
            if (num != i) {
                nums[i] = 0;
            }
            num++;
        }
    }
}
