all:
		nasm –felf64 $(source)
		ld $(source).o
		rm $(source).o 
