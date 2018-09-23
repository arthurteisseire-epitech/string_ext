# RULES #


## PRACTICES ##

### In Progress ###
	Extrem programming practices
	TDD is mandatory



## COMMITS ##

### Convention ###
	All commits MUST be according to the next : [<char>]<header> -- <description>{ : fixed}

	<char> :
		- '+' for addition	//if a function it implicitly means that the UT too, there's no need to precise it
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



## SUFFIXES ##

### Variables / Functions names ###
	struct		:	_s
	string		:	_z
	bool		:	_b
	int / size	:	_i
	char		:	_c
	function pointer:	_f

	array		:	_a
	double array	:	_g	//memo :: grid
	pointer		:	_p

### Types name ###
	structs		:	_struct
	function pointer:	_func
	typedef		:	_t

### Precision ###
	Theses rules are cumulative (ex: structure double array will have _sg suffix)
	The priority order of suffixes is defined according the order they are displayed in the suffix rule
	To access to an array element it must be with square brackets [] and never with star * to dereference. For pointers, it's the opposite
	void type, for evident reasons, hasn't any rules



## Examples ##

### Functions ###
	For functions, if we want to calc len of an simple array, function prototype will be: int len_a(void *array_a); //TODO :: Find a better arg name

### Array ###
	Double array of product structure will be: struct product_s product_as
