
int myglobal = 0;

char *getname()
{
	static char *name = "EEE 13";
	return name;
}


int main()
{
	char *n = getname();

}
