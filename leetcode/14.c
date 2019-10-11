/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*判断两个字符串的最大前缀，同时把结果放在char2上并返回计数*/
int commonPrefixTwoString(char* str1, char* str2)
{
	int str1Length = strlen(str1);
	int str2Length = strlen(str2);
	if(!str1Length||!str2Length) return 0;
	int matchPace = sizeof(long);
	int length = str1Length<str2Length?str1Length:str2Length;
	int retLength = 0;
	if(length>=matchPace){
		for(int i=0;i<length;i+=matchPace)
		{
			long *tmp1 = (long*)(str1+i);
			long *tmp2 = (long*)(str2+i);

			if((*tmp1)^(*tmp2)!=0){
				break;
			}else{
				retLength+=matchPace;
			}
		}
	}
	if(retLength<length){
		for(int i=retLength;i<length;i++){
			if(str1[i]==str2[i]){
				retLength++;
			}else{
				break;
			}
		}
	}
	str2[retLength] = '\0';
	return retLength;
}

char * longestCommonPrefix(char ** strs, int strsSize)
{
	if(strsSize==0)return "";
	else if(strsSize==1) return strs[0];
	for(int i=0;i<strsSize-1;i++){
		int common_len = commonPrefixTwoString(strs[i], strs[i+1]);
		if(common_len==0)
			return "";
	}
	return strs[strsSize-1];
}

int main(int argc, char *argv[])
{
	char *re = longestCommonPrefix(++argv, argc-1);
	printf("%s\n", re);
}