#include <stdio.h>

int main()
{
	char* a[99];
	a[1]="edno";
	a[2]="dve";
	a[3]="tri";
	a[4]="chetiri";
	a[5]="pet";
	a[6]="shest";
	a[7]="sedem";
	a[8]="osem";
	a[9]="devet";
	a[10]="deset";
	a[11]="edinadeset";
	a[12]="dvanadeset";
	a[13]="trinadeset";
	a[14]="chetirinadeset";
	a[15]="petnadeset";
	a[16]="shestnadeset";
	a[17]="sedemnadeset";
	a[18]="osemnadeset";
	a[19]="devetnadeset";
	a[20]="dvadeset";
	a[30]="trideset";
	a[40]="chetirideset";
	a[50]="petdeset";
	a[60]="shestdeset";
	a[70]="sedemdeset";
	a[80]="osemdeset";
	a[90]="devetdeset";
	int n,ed,des;
	scanf("%d",&n);
	ed=n % 10;
	des=n / 10;
	printf("%s i %s\n", a[des*10], a[ed]);		

	return 0;
}
