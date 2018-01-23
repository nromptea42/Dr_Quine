SRC_D = ./
SRCCOLLEEN =	$(SRC_D)ColleenDir/Colleen.c
SRCGRACE =		$(SRC_D)GraceDir/Grace.c
SRCSULLY =		$(SRC_D)SullyDir/Sully.c
CC = clang
CFLAGS = -Wall -Wextra -Werror
COLLEEN = Colleen
GRACE = Grace
SULLY = Sully
all : $(COLLEEN) $(GRACE) $(SULLY)
$(COLLEEN) :
	@$(CC) $(CFLAGS) -o $(COLLEEN) $(SRCCOLLEEN)
$(GRACE) :
	@$(CC) $(CFLAGS) -o $(GRACE) $(SRCGRACE)
$(SULLY) :
	@$(CC) $(CFLAGS) -o $(SULLY) $(SRCSULLY)
clean :
	@/bin/rm -rf Grace_kid.c Sully_*
fclean : clean
	@/bin/rm -rf $(COLLEEN) $(GRACE) $(SULLY)
	@echo 'Binary removed'
re  : fclean all
	@echo "Re done"