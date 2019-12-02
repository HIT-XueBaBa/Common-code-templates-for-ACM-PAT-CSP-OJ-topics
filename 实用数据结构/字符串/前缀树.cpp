struct TrieNode {
    LL count = 0;  //该结点代表的单词个数,count>0表示这是一个单词结点
    array<TrieNode*, 26> children{};  //数组长为26表示单词只由26个小写英文字母组成，可按实际需要修改
};
TrieNode* root = new TrieNode();
void insert(TrieNode* r, const string& word, int p = 0) {
    auto& i = r->children[word[p] - 'a'];
    if (i == nullptr)
        i = new TrieNode();
    if (p == word.size() - 1)
        ++i->count;
    else
        insert(i, word, p + 1);
}