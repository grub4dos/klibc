# -*- makefile -*-
#
# arch/sparc64/Makefile.inc
#
# Special rules for this architecture.  Note that this is actually
# included from the main Makefile, and that pathnames should be
# accordingly.
#

KLIBCARCHOBJS = \
	arch/$(KLIBCARCH)/pipe.o \
	arch/$(KLIBCARCH)/setjmp.o \
	arch/$(KLIBCARCH)/syscall.o \
	arch/$(KLIBCARCH)/sysfork.o

archclean: