class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String>> map=new HashMap<>();

        for(String str:strs){
            
            String sortedWord=str.chars().sorted().mapToObj(c->String.valueOf((char)c)).collect(Collectors.joining());


            if(!map.containsKey(sortedWord)){
                map.put(sortedWord,new ArrayList<>());
            }

            map.get(sortedWord).add(str);
        }
        return new ArrayList<>(map.values());
    }
}