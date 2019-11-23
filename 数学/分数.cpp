//以下代码进行分数的输入、输出、化简以及加减乘除四则运算
using all2 = array<LL, 2>;
//分数的输入，针对的是按a/b的格式给出分数形式，分母不为0。
all2 input() {
    all2 f;
    char c;  //吸收'/'符号
    cin >> f[0] >> c >> f[1];
    return f;
}
//分数的化简
void simplify(array<LL, 2>& f) {
    if (f[0] == 0) {  //如果分子f[0]为0，则令f[1]=1
        f[1] = 1;
        return;
    }
    if (f[1] < 0) {  //如果分母f[1]为负，将分子f[0]和分母f[1]都取相反数
        f[1] = -f[1];
        f[0] = -f[0];
    }
    LL d = gcd(abs(f[0]), abs(f[1]));  //求出分子f[0]和分母f[1]绝对值的最大公约数
    f[0] /= d;
    f[1] /= d;
}
//分数的加法
all2 plus(const all2& f1, const all2& f2) {
    all2 f;
    f[0] = f1[0] * f2[1] + f2[0] * f1[1];
    f[1] = f1[1] * f2[1];
    simplify(f);
    return f;
}
//分数的减法
all2 Sub(const all2& f1, const all2& f2) {
    all2 f;
    f[0] = f1[0] * f2[1] - f2[0] * f1[1];
    f[1] = f1[1] * f2[1];
    simplify(f);
    return f;
}
//分数的乘法
all2 Multiply(const all2& f1, const all2& f2) {
    all2 f;
    f[0] = f1[0] * f2[0];
    f[1] = f1[1] * f2[1];
    simplify(f);
    return f;
}
//分数的除法
all2 Div(const all2& f1, const all2& f2) {
    all2 f;
    f[0] = f1[0] * f2[1];
    f[1] = f1[1] * f2[0];
    simplify(f);
    return f;
}
/*分数输出，输出的分数形式满足以下要求：
1. 如果分数的值是一个整数，只输出整数部分；
2. 如果分数的值大于1，按带分数“k\ a / b”形式输出，k为整数部分，a / b为约分后的分数部分，如果有负号，只出现在整数部分； 
3. 如果分数的值小于1，按带分数“a / b”形式输出，a / b为约分后的分数部分，如果有负号，只出现在分子前； 
4. 负号只可能出现在分子前，分母不为0。*/
void output(const all2& f) {
    if (f[1] == 1) {
        cout << f[0];
        return;
    }
    if (abs(f[0]) < f[1])
        cout << f[0] << "/" << f[1];
    else
        cout << f[0] / f[1] << " " << abs(f[0]) % f[1] << "/" << f[1];
}
