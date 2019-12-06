#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
static int b=0;
bool isMatch(const char * s,const char * p){
	
	// if(b>200)return false;
	// printf("s:%s\n", s);
	// printf("p:%s\n", p);
	int add = 0;
	if(*s=='\0'&&*p=='\0') return true;
	if(*p=='\0') return false;
	if(*s==*p || (*p=='?'&&*s!='\0')){
		return isMatch((s+1),(p+1));
	}else if(*p=='*'){
		if(isMatch(s,p+1)){
			return true;
		}else{
			// printf("c:%c\n", *s);
			if(*(s)!='\0')
			return isMatch(s+1,p);
		    else{
		    	// printf("come in\n");
		    	return false;
		    }
		}	
	}
	else{
		return false;
	}
}

//"adceb"
// "*a*b"
// "aaaabaaaabbbbaabbbaabbaababbabbaaaababaaabbbbbbaabbbabababbaaabaabaaaaaabbaabbbbaababbababaabbbaababbbba"
// "*****b*aba***babaa*bbaba***a*aaba*b*aa**a*b**ba***a*a*"
// "acdcb"
// "a*c?b"
// "babaaababaabababbbbbbaabaabbabababbaababbaaabbbaaab"
// "***bba**a*bbba**aab**b"
// "aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba"
    // aabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba
// "a*******b"

int main() {
	char *s="aaabbbaabaaaaababaabaaabbabbbbbbbbaabababbabbbaaaaba";
	char *p="a*******b";
	bool ret = isMatch(s,p);
	if(ret){
		printf("true\n");
	}else{
		printf("false\n");
	}
}