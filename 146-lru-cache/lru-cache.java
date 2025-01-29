    class Node{
        int key;
        int value;
        Node prev;
        Node next;

        public Node(int key,int value){
           this.key=key;
           this.value=value;
           this.prev=null;
           this.next=null;
        }
    }

class LRUCache {

    private int cap;
    private Map<Integer,Node> cache;
    private Node old;
    private Node lat;

    public LRUCache(int capacity) {
        this.cap=capacity;
        this.cache=new HashMap<>();
        this.old=new Node(0,0);
        this.lat=new Node(0,0);
        this.old.next=this.lat;
        this.lat.prev=this.old;
    }
    
    public int get(int key) {
        if(cache.containsKey(key)){
            Node node=cache.get(key);
            remove(node);
            insert(node);

            return node.value;
        }
        return -1;
    }

    private void remove(Node node){
        Node prev=node.prev;
        Node next=node.next;
        prev.next=next;
        next.prev=prev;
    }

    private void insert(Node node){
        Node prev=lat.prev;
        Node next=lat;
        prev.next=next.prev=node;
        node.next=next;
        node.prev=prev;
    }
    
    public void put(int key, int value) {
        if(cache.containsKey(key)){
            remove(cache.get(key));
        }
        Node newNode=new Node(key,value);
        cache.put(key,newNode);
        insert(newNode);

        if(cache.size()>cap){
            Node lru=old.next;
            remove(lru);
            cache.remove(lru.key);
        }
    }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */