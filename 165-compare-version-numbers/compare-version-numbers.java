class Solution {
    public int compareVersion(String version1, String version2) {
        String[] list1=version1.split("\\.");
        String[] list2=version2.split("\\.");

        for(int i=0;i<Math.max(list1.length,list2.length);i++){
            int num1=i<list1.length ? Integer.parseInt(list1[i]):0;
            int num2=i<list2.length? Integer.parseInt(list2[i]):0;

            if(num1<num2){
                return -1;
            }
            if(num1 >num2){
                return 1;
            }
        }
        return 0;

    }
}