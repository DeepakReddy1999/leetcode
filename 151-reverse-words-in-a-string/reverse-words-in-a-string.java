class Solution {
    public String reverseWords(String s) {
        String[] arr=s.trim().split("( )+",0);
        String ans="";
        for(int i=arr.length-1;i>=0;i--){
            ans+=arr[i];
            ans+=" ";
        }
        return ans.trim();
    }
}