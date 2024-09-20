class Solution {
    public String reverseWords(String s) {
        String[] words= s.trim().split("\\s+");
        Collections.reverse(Arrays.asList(words));
        StringBuffer sb=new StringBuffer();
        for(String word:words){
              sb.append(word).append(" ");

        }
        return sb.toString().trim();
    }
}