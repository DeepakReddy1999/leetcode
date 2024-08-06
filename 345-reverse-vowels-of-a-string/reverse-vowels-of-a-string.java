class Solution {
    public String reverseVowels(String s) {
       char[] ch=s.toCharArray();
       int r=s.length()-1,l=0;
       while(l<r){
        if(!isVowel(ch[l])){
            l++;
        }else if(!isVowel(ch[r])){
            r--;
        }else{
            char temp=ch[r];
            ch[r]=ch[l];
            ch[l]=temp;
            l++;r--;
        }
       }
       return String.valueOf(ch);
    }

    public Boolean isVowel(char ch){
       if(ch=='a'||ch=='A'||ch=='o'||ch=='O'||ch=='u'||ch=='U'||ch=='E'||ch=='e'||ch=='I'||ch=='i')
        {
            return true;
        }
        return false;
    }
}