//���´������������ӷֽ����������˳���
//�����Ӵ洢��factor�У�����ʾ�����ӣ�ֵ��ʾ�������Ӹ���
unordered_map<LL, LL> factor;
void getFactor(LL n, LL arg) {  //argΪ1ʱ��ʾ��n�ڷ����ϣ����˷���argΪ-1��ʾ��n�ڷ�ĸ�ϣ�������
    Eratosthenes(n);  //��ӡn���ڵ�������洢��prime��
    for (LL i : prime) {
        while (n % i == 0) {
            factor[i] += arg;
            n /= i;
        }
        if (n == 1)
            break;
    }
}