tags::
	ctags -R

cscope.files::
	find ./ -name *.[chS] > cscope.files

cscope:: cscope.files
	cscope -b -q -k
