/*
将输入的大写转换成小写
可以用管道进行测试
dir | rpp.exe example/36_9.h
*/

main
{
	for
		s=getsl
		if s.empty
			return
		for i in s
			if s[i]>=`A&&s[i]<=`Z
				s[i]=s[i].toint+32
		putsl s
}