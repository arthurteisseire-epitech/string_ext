# RULES #


## PRACTICES ##

### In Progress ###
	Extrem programming practices
	TDD is mandatory



## COMMITS ##

### Convention ###
	All commits MUST be according to the next : [<char>]<header> -- <description>{ : fixed}

	<char> :
		- '+' for addition	//if a function is added it implicitly means that the UT too, there's no need to precise it
		- '-' for deletion
		- '*' for modification
	<header> : doesn't normally begins with a capital letter except for special cases
		- filename with extension
		- subject
	<description> :
		- description of the main changes
	{ : fixed} :
		- add this without brackets when you fixed something

	There MUST NOT be any TODO in commits, you can put TODO before the function declaration instead
