/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var countMajoritySubarrays = function(nums, target) {
    let count = 0;
    const n = nums.length;

    for (let i = 0; i < n; i++) {
        let targetCount = 0;

        for (let j = i; j < n; j++) {
            if (nums[j] === target) targetCount++;

            const length = j - i + 1;
            if (targetCount * 2 > length) count++;
        }
    }

    return count;
};