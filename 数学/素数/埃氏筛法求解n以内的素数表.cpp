//���´����ð���ɸ�����[2,n]���ڵ�������
vector<LL> prime;  //������洢��prime�У�prime��ȫ�ֱ���
void Eratosthenes(LL n) {
    //f[i]Ϊtrue����ʾ����i��ɸȥ�ˣ����f[i]Ϊfalse����ʾ����iû�б�ɸȥ
    bitset<100005> f;  //����Ĭ��nС��100005
    for (LL i = 2; i <= n; ++i)
        if (!f[i]) {  //iû�б�ɸȥ
            prime.push_back(i);
            for (LL j = i + i; j <= n; j += i)  //ɸȥi�����б���
                f[j] = true;
        }
}