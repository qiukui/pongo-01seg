庞果网--编程题解
================
1. 均分01
----------------
>  题目地址：http://hero.pongo.cn/Question/Details?ID=171&ExamID=166  
>  题目：给定一个字符串，长度不超过100，其中只包含字符0和1,并且字符0和1出现的次数都是偶数。你可以把字符串任意切分，把切分后的字符串任意分给两个人，让两个人得到的0的总个数相等，得到的1的总个数也相等。 例如，输入串是010111,我们可以把串切位01, 011,和1， 把第1段和第3段放在一起分给一个人，第二段分给另外一个人，这样每个人都得到了1个0和两个1。我们要做的是让切分的次数尽可能少。 输入是这样一个字符串，输出是最少的切分次数，保证输入合法。 注：题目一定有解，因为我们最差情况时，把字符串切分(n - 1)次形成n个长度为1的串。
