#include <cs50.h> //making the ARI function
string ari(string x)
{
	float cl = 0.0f, cw = 0.0f, cs = 0.0f;
	string s[] = {"Kindergarten","First/Second Grade","Third Grade","Fourth Grade","Fifth Grade","Sixth Grade","Seventh Grade","Eighth Grade","Ninth Grade","Tenth Grade","Eleventh Grade","Twelfth grade","College student","Professor"}; 
	int i, l, ari;
	l = strlen(x);
	for(i=0; i<l; i++)
	{
		if(isalnum(x[i]))
			cl++;
		if(x[i]==' ')
			cw++;
		if(x[i]=='.' || x[i]=='?' || x[i]=='!')
			cs++;
	}
	ari = ceil(4.71*(cl/cw) + 0.5*(cw/cs) - 21.43);
	return(s[ari-1]);
}
