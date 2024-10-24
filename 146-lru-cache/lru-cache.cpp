class Node{
    public:
    int key;
    int value;
    Node *next;
    Node *prev;
    Node(int k,int v){
        key=k;
        value=v;
        next=nullptr;
        prev=nullptr;
    }
};


class LRUCache {
    int cap;
    Node* head;
    Node* tail;
    unordered_map<int,Node*> cache;
public:
    LRUCache(int capacity) {
        cap=capacity;
        cache.clear();
        head=new Node(0,0);
        tail=new Node(0,0);
        head->next=tail;
        tail->prev=head;

    }

    void add(Node* node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
    }

    void remove(Node* node){
        node->prev->next=node->next;
        node->next->prev=node->prev;
    }
    
    int get(int key) {
        if(cache.find(key)!=cache.end()){
            Node* node=cache[key];
            remove(node);
            add(node);
            return node->value;
       }
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.find(key)!=cache.end()){
            remove(cache[key]);
        }
        Node* node=new Node(key,value);
        cache[key]=node;
        add(node);

        if(cache.size()>cap){
            Node* lru=tail->prev;
            remove(lru);
            cache.erase(lru->key);
            delete lru;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */