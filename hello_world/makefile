SRC = src
INC = inc
OBJ = obj
DIST = dist
EXE = helloworld
SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

all: $(DIST)/$(EXE)	
	@echo Compilado!

$(DIST)/$(EXE): $(OBJS)
	@echo Compilando $(EXE)...
	@gcc $(OBJS) -o $(DIST)/$(EXE)

$(OBJ)/%.o: $(SRC)/%.c
	@echo Compilando $< ...
	@gcc -c $< -I ./$(INC) -o $@

clean: 
	@echo Limpando...
	@rm -rf $(OBJ)/*.o $(DIST)/$(EXE)

remake: clean all