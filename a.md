#欧几里德算法
##辗转相除 法

---

用于快速计算两个数字的最大公约数
还可以用于快速求解 $ a\\*x+b\\*y=1 $
方程的一组整数解

`gcd(a,b) => gcd(b, a % b);`


if b== 0 return a;
大问题到小问题 可解决 用递归
