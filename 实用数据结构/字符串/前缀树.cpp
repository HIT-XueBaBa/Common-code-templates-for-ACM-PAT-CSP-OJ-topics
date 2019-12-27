struct TrieNode {
    LL count = 0;                     //该结点代表的单词个数,count>0表示这是一个单词结点
    array<TrieNode*, 26> children{};  //数组长为26表示单词只由26个小写英文字母组成，可按实际需要修改
};
TrieNode* root = new TrieNode();
//插入一个单词
void insert(string word) {
    auto i = root;
    for (char c : word) {
        if (not i->children[c - 'a'])
            i->children[c - 'a'] = new TrieNode();
        i = i->children[c - 'a'];
    }
    ++i->count;
}
//查找一个单词
bool search(string word) {
    auto i = root;
    for (char c : word) {
        if (not i->children[c - 'a'])
            return false;
        i = i->children[c - 'a'];
    }
    return i->count > 0;  //如果是查找前缀把这条语句换成return true;就可以了
}