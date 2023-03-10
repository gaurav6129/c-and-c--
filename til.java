public class JumpGame {
	
*/
	public boolean canJump(int[] nums) {
		int lastAccuratePosition=nums.length-1;
		int furthestJump=0;
		for(int i=nums.length-2;i>=0;i--) {
			furthestJump=nums[i]+i;
			if(furthestJump>=lastAccuratePosition)
				lastAccuratePosition=i;
		}
		return lastAccuratePosition==0;
	}
	public boolean canJump1(int[] nums) {
		if (nums.length <= 1)
			return true;

	
		int largestIndex = nums[0];

		for (int i = 0; i < nums.length; i++) {
			if (largestIndex <= i && nums[i] == 0)
				return false;

			if (i + nums[i] > largestIndex) {
				largestIndex = i + nums[i];
			}

			
			if (largestIndex >= nums.length - 1)
				return true;
		}
		return false;
	}
	public static void main(String[] args) {
		int[] nums= {2,3,1,1,4};
		//int[] nums= {3,2,1,0,4};
		
		System.out.println("Can jump?"+new JumpGame().canJump(nums));

	}
}