int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // 1. Result ke liye memory allocate karo (2 numbers ke liye)
    int* result = (int*)malloc(2 * sizeof(int));
    
    // 2. Pehla loop: Ek number uthao
    for (int i = 0; i < numsSize; i++) {
        // 3. Doosra loop: Uske aage waale saare numbers check karo
        for (int j = i + 1; j < numsSize; j++) {
            // Agar dono ka sum target ke barabar hai
            if (nums[i] + nums[j] == target) {
                result[0] = i; // Pehla index save karo
                result[1] = j; // Doosra index save karo
                *returnSize = 2; // Batao ki 2 numbers mile hain
                return result; // Answer bhej do
            }
        }
    }
    
    // Agar kuch na mile toh
    *returnSize = 0;
    return NULL;
}