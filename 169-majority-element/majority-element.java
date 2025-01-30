class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> freq= new HashMap<>();

        for(int i :nums){
            freq.put(i,freq.getOrDefault(i,0)+1);
        }
        int n=nums.length;

        int majority=n/2;

        for(int key:freq.keySet()){
            if(freq.get(key)>majority){
                return key;
            }
        }
        return -1;

    }
}