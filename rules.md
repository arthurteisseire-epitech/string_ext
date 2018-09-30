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



## SUFFIXES ##

### Variables / Functions names ###
	struct		:	_s
	string		:	_z
	bool		:	_b
	int / size	:	_i
	char		:	_c

	/!\ IMPORTANT /!\
	If and only if the variable is according to next types apply this suffix rule else name the variable as clear as you can without suffix

	pointer		:	_p
	function pointer:	_f
	array		:	_a
	double array	:	_g	//memo :: grid

### Types name ###
	structs		:	_st
	function pointer:	_func
	typedef		:	_t

### Precision ###
	Theses rules will help to identify the type in an array, just looking at the variable name
	The goal of theses rules is cumulation (ex: structure double array will have _sg suffix)
	The priority order of suffixes is defined according the order they are displayed in the suffix rule
	To access to an array element it must be with square brackets [] and never with star * to dereference. For pointers, it's the opposite
	void type, for evident reasons, hasn't any rules
	Look up tables doesn't have any rules, the stars before the variable are enough to identify the variable purpose



## Examples ##

### Functions ###
	or functions, if we want to calc len of a pointer array, function prototype will be: int len_pa(void *src_pa);

### Array ###
	Double array of product structure will be: struct product_st product_as
