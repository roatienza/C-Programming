# CSV Parser

Create a C Program that will parse comma separated variable (csv) input string and save the fields in an array of structure. Each line of csv input has the format:

`last name, first name, student number`

For example:

`Bonifacio, Andres, 200012345`

`Rizal, Jose, 200154321`

`del Pilar, Marcelo, 200298765`

...

You must save the fields in a structure:

`struct student_info{`
	
`	char first_name[32];`
	
`	char last_name[32];`

`	unsigned long long student_number;`

`};`

Notes:
1. Terminate parsing when the user enters an empty line
2. Print the contents of the array of structure after parsing
