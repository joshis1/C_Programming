# This is the Vpath; as my source directory is in the src folder - all the .c files
#folder structure
#Gif_Utility
#-->src/*.c
#-->include/*.h
VPATH = src:include:objects
CFLAGS = -I ./include -Wall 
# You can convert  Warnings into errors using the -Werror flag 
#CFLAGS = -I ./include -Wall -Werror

OBJS =./objects
# Look at the CFLAGS here; it has -DDEBUG because in my code, I have #ifdef DEBUG
# Look at the CFLAGS here; -Wall : To generate all the compiler warnings.
# include is required as my compilation depends on the .h files.

# The LD flags to link the shared objects 
LDFLAGS= -L/usr/local/lib -lm -lc 
#LDFLAGS= -rpath=/usr/local/lib -lm -lc -Wl
#in my mini-project, I am using maths library, Thus, I have lm.
# lc to link my main function with crt1.o

#what is the compiler, am I using.
#This is a good practice since I can modify these flags when cross-compiling.
CC= gcc

#PATH for the LIBS 
#This might be useful while cross-compiling.
#LIBS 

#This is the main rule that will be called
# I have two flavours of make - one for release, and other for debug
# The target_dbg is dependent on ./obj_dbg/*.o
# That is all the *.o in the ./obj_dbg
#how to get the *.o; use pattern substitute.
#it says - whatever files in the directory src is there.. substitute with ./obj_dbg/*.o
#It says the wildcard to look here is ./src/*.c
#As it needs the ./obj_dbg/%.o
#The makefile will look for the rule ./obj_dbg/%.o
# -o specifies the output file to be created - here it is gif_dbg
# link the .o with gcc and then link the dynamic libraries too. This will create the final image- gif_dbg.

target_dbg: $(patsubst ./src/%.c,./obj_dbg/%.o,$(wildcard ./src/*.c))
	@echo "Target main rule__dbg $(NPROCS)"
	$(CC) $(patsubst ./src/%.c,./obj_dbg/%.o,$(wildcard ./src/*.c)) $(LDFLAGS) -o gif_dbg -Xlinker -Map=gif_dbg.map -Wl,-R./


#Here the rule is available 
#Now this rules depends on the %.c files in the src directory.
# Thus, the first line states the dependencies.
#mkdir -p ./obj_dbg. If this directory doesn't exist,then create it.
#rule to create .o now,
# $(CC) -> compiler, CFLAGS -> Remember, You need -I ./include to build the source code. This contains the header files.
# -g option to build the debug symbols, this is a part of the CFLAGS.
# -c : This produces the .o files.
# $< : This is the automatic variable, it means that the value is ./src/%.c specified in the first line of this rule.
# $@ : This is the automatic variable, it means that the value of output is ./obj_dbg/%.o
# -o : This specifies that the following this will be the output file.
# -DDEBUG : I have #ifdef DEBUG in my code, with the -DDEBUG. This flag DDEBUG will be enabled.
# In release build, I don't need -DDEBUG flag,since I don't want any debug prints  

./obj_dbg/%.o: ./src/%.c ./include/*.h
	@echo "I am called first..dbg"
	@mkdir -p ./obj_dbg
	#$(CC) $(CFLAGS) -E $<
	#$(CC) $(CFLAGS) -S $< 
	$(CC) $(CFLAGS) -g -DDEBUG -c $< -o $@


# Similarly,Everthing is done for release target
# Remember, here the obj folder is different, because we are "not" generating the .o with the debug symbol i.e. -g.
# Look at the LDFLAGS, which is not available here. no -g option here.
# You can see the size of the gif and gif_dbg image formed. 
# The debug image is larger in size than the release image.

target: $(patsubst ./src/%.c,./obj/%.o,$(wildcard ./src/*.c)) 
	@echo "Target main rule__rel"
	$(CC) $(patsubst ./src/%.c,./obj/%.o,$(wildcard ./src/*.c)) $(LDFLAGS) -o gif -Xlinker -Map=gif.map


	
./obj/%.o: ./src/%.c ./include/*.h
	@echo "I am called first..release"
	@mkdir -p ./obj
	$(CC) $(CFLAGS) -g -c $< -o $@
	
#It is always better to write a PHONY rule for a rules like clean.
#It may happen that in source sandbox, you have a clean file. This may invoke the clean file.
#In order to prevent invoking a clean file during make clean; We give this general rule as PHONY
#PHONY tells the MAKEFILE that there is a rule clean, not a file called clean.
#Generally use PHONY for all, install, clean, distclean, 
.PHONY: clean
clean: 
	@echo "cleaning everything"
	@rm -f gif	
	@rm -f ./obj/*.o
	@rm -f ./obj_dbg/*.o
	@rm -f gif_dbg
	@rm -vrf ./obj
	@rm -vrf ./obj_dbg

target_clean:
	@echo "clean release target"
	@rm -f ./obj/*.o ./obj/*.d
	@rm -f gif

target_dbg_clean:
	@echo "clean debug target"
	@rm -f ./obj_dbg/*.o ./obj_dbg/*.d
	@rm -f gif_dbg
	
	
everything:
	@echo "Building the debug image"
	@echo "NPROCS value"
	@echo $(NPROCS)
	@make -j$(NPROCS) target_dbg
	@echo "Now building the release image"
	@make -j$(NPROCS) target	


###################Improved Version $$$$$$$$$$$$$$$$$##########################
## No need to have an another rule for dbg.
## combine the dbg version here itself 
###############################################################################
##Ideally setting of the this variable should be done in the environment
## This is the way it is done in the live projects

# Set the environment variables
# The order doesn't matter; but a good practice is to declare this at the top 
include env.mk

## This make doesn't exist, if it exist then include otherwise not, so don't complain if it is not there
-include hypothetical.mk 

ifeq ($(NO_DISPLAY),YES)
CFLAGS += -D__DISPLAY_DISABLE
endif

## How to check whether these flags are working fine or not 
## make -p | tee cflags.txt 
## Now grep for CFLAGS in this Makefile database.
## When the NO_DISPLAY was on i.e. YES , I could see that the CFLAGS : CFLAGS = -I ./include -Wall  -D__DISPLAY_DISABLE
## See that the order of variable declaration doesn't make any sense for the makefile.
## Makfiles are not like a C programs ,,, Structural programs
## It is like a program that gathers and builds the database and then runs the rule.


############Ways to Debug a Makefile####################
# Debug the Trace of the rule called by makefile.
## make -n <rule_name>


## To print the Makefile Database 
## I found this one quite useful, let's print the makefile database [IMPORTANT]
## This will tell the PATH variables, and other variables,almost a complete list will be generated here
## make -p | tee log.txt


## What is a Lex?
## Lex is a program to generate the tokens 

## what is a yacc?
## The output of lex is input to the yacc that checks the grammar part.

## Methods of Variable assignment in Makefile

## This will assign the value when it is used, but not when it is declared.
## toolchains = /usr/gcc

## This will assign the value immediately
## toolchains := /usr/gcc

## This will set the value only if the toolchain variable was not set previously
## toolchains ?= /usr/gcc

## This will append the value to the variable, it is widely used for CFLAGS, when using #ifdef conditions
## CFLAGS += -DDebug  
## Always remember the prefix -D


## Let's expand the Macro's and see the result
## GCC provides the option -E to expand the macros
# make target_dbg | tee macro_expanded.txt
# basically in the target_dbg rule, I have added the -E option 


##############################MAKE TUTORIAL#########################################################

#Make : utility to execute a makefile.
#makefile : it contains shell commands, list of rules.
#In rules, first line is the dependency line.
#In the second line, it is the actions or commands.
# By default, the action line is understood by Makefile as 'tab'
#Although, you can change this characteristic, but this is not done usually
# Make rebuilds the target files if they are missing or older than the dependency files.

# Objs depend on source for that objects
# Objs depend on headers.
# binary depends on objs.
# libs depend on objs.

# In traditional ways, as seen in the projects.
# There are multiple sub-folders. Every sub-folder contains the Makefile. These Makefiles are invoked by the top Makefile. 
# Generally, you should export the variables set in the main Makefile.So that the sub Makefiles invoked by main Makefile  is inherited with those settings.
# Remember, make is a utility, a program. Writing a Makefile is not equivalent to writing a C-Program. The order doesn't matter here. The make utility first creates a database then executes the makefile.

# The common way, I have seen is the following.
# make -C $(WORKROOT)/linux/Makefile everything
# Another point, before invoking the main Makefile. We generally set the environment. This can be invoked by calling 
# include env.mk
# The env.mk will set the environment variables.
# For example WORKROOT=<PATH of the Source code>
# Now invoke the other makefiles using the WORKROOT.

#Remember
# $(MAKE) -c $(WORKROOT)/linux/Makefile everything

#Remember, always use $(MAKE) not make
# The $(MAKE) inherits the environment of the parent makefile to the sub Makefile called.

#Variables
# case sensitive
# avoid underscore name variables
# make cannot truncate trailing spaces
# so, you will find the space issues

# Standard variable for Makefiles
# $(OBJS)
# $(SHELL)
# $(MAKE)
# $(CC)
# $(CFLAGS)
# $(INCLUDE)
# $(LDFLAGS)


#Implicit rules are
# use  automatic variables like $< $@

#static pattern rules
# This the traditional way, not used anymore
# OBJS = hello1.c hello2.c
# $(OBJS): 
#          gcc -c hello1.c hello2.c
